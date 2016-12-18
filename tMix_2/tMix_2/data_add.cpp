#include "data_add.h"
#include "ui_data_add.h"

data_add::data_add(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::data_add)
{
    ui->setupUi(this);

    ui->progressBar->hide();
    ui->groupBox_report->hide();
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), ui->groupBox_report, SLOT(hide()));

    load_operator();



    connect(ui->toolButton_file, SIGNAL(clicked(bool)), this, SLOT(select_file()));
    connect(ui->toolButton_file, SIGNAL(clicked(bool)), this, SLOT(setting_read()));

    connect(ui->pushButton_read_file, SIGNAL(clicked(bool)), this, SLOT(read_file()));
    connect(ui->pushButton_read_file, SIGNAL(clicked(bool)), this, SLOT(setting_write()));

    connect(ui->pushButton_load, SIGNAL(clicked(bool)), this, SLOT(load_data()));
    //--act
    connect(ui->toolButton_act_file, SIGNAL(clicked(bool)), this, SLOT(act_select_file()));
    connect(ui->pushButton_act_load, SIGNAL(clicked(bool)),this, SLOT(act_update()));
    //-search
    connect(ui->lineEdit_search, SIGNAL(textChanged(QString)), this, SLOT(search(QString)));

}

data_add::~data_add()
{
    delete ui;
}

void data_add::load()
{
    ui->progressBar->hide();
    ui->groupBox_report->hide();
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), ui->groupBox_report, SLOT(hide()));

    ui->lineEdit_file->clear();
    ui->comboBox_list->clear();
    ui->spinBox_frow->setValue(1);
    ui->spinBox_num->setValue(1);
    ui->spinBox_serial->setValue(1);

    ui->lineEdit_act_file->clear();

    ui->lineEdit_search->clear();

    load_operator();

    for (int r = ui->tableWidget_data->rowCount() - 1; r >= 0; r--){
        ui->tableWidget_data->removeRow(r);
    }
    for (int r = ui->tableWidget_act_data->rowCount() - 1; r >= 0; r--){
        ui->tableWidget_act_data->removeRow(r);
    }
    for (int r = ui->tableWidget_search->rowCount() - 1; r >= 0; r--){
        ui->tableWidget_search->removeRow(r);
    }
}


void data_add::setting_read()
{
    QSettings sett("setting.ini", QSettings::IniFormat);
    ui->spinBox_num->setValue(sett.value("data/num").toInt());
    ui->spinBox_serial->setValue(sett.value("data/serial").toInt());
    ui->spinBox_frow->setValue(sett.value("data/frow").toInt());
}

void data_add::setting_write()
{
    QSettings sett("setting.ini", QSettings::IniFormat);
    sett.beginGroup("data");
    sett.setValue("num", ui->spinBox_num->value());
    sett.setValue("serial", ui->spinBox_serial->value());
    sett.setValue("frow", ui->spinBox_frow->value());
    sett.endGroup();
}

void data_add::load_operator()
{
    map_operator.clear();
    ui->comboBox_operator->clear();
    QSqlQuery query("SELECT oper.id, oper.name FROM oper ORDER BY oper.name ");
    while (query.next()){
        map_operator.insert(ui->comboBox_operator->count(), query.value(0).toInt());
        ui->comboBox_operator->addItem(query.value(1).toString());
    }
}

void data_add::select_file()
{
    QString fname = QFileDialog::getOpenFileName(this, "Select file...", "/HOME/", "Excel (*.xls *.xlsx)");
    ui->lineEdit_file->setText(fname);

    ui->comboBox_list->clear();

    if (!fname.isEmpty()){
        excel = new QAxObject("Excel.Application", this);
        excel->setProperty("Visible", 0);
        excel->setProperty("DisplayAlerts", 0);
        wbook = excel->querySubObject("Workbooks");
        book = wbook->querySubObject("Open (const QString&)", fname);
        sheets = book->querySubObject("Sheets");

        int lists = sheets->dynamicCall("Count()").toInt();
        QStringList list_name;
        for (int x = 1; x <= lists; x++){
            list_name << sheets->querySubObject("Item(Int)", x)->dynamicCall("Name").toString();
        }

        ui->comboBox_list->addItems(list_name);


        wbook->dynamicCall("Close()");
        excel->dynamicCall("Quit()");
        delete excel;
    }
}

void data_add::read_file()
{
    QString fname = ui->lineEdit_file->text();
    ui->progressBar->setValue(0);
    ui->progressBar->setFormat("Открываем файл...");
    ui->progressBar->setVisible(true);

    for (int r = ui->tableWidget_data->rowCount() - 1; r >= 0; r--){
        ui->tableWidget_data->removeRow(r);
    }


    if (!fname.isEmpty()){
        excel = new QAxObject("Excel.Application", this);
        excel->setProperty("Visible", 0);
        excel->setProperty("DisplayAlerts", 0);
        wbook = excel->querySubObject("Workbooks");
        book = wbook->querySubObject("Open (const QString&)", fname);
        sheets = book->querySubObject("Sheets");

        currSheet = sheets->querySubObject("Item(Int)", ui->comboBox_list->currentIndex() + 1);

        int testA = ui->spinBox_frow->value() - 1;
        for (int r = ui->spinBox_frow->value(); r < /*500/*/25000/**/; r++){
            QAxObject *cell = currSheet->querySubObject("Cells(Int, Int)", r, ui->spinBox_num->value());
            QString _data = cell->dynamicCall("Value").toString();
            if (_data.isEmpty()){
                break;
            }
            testA++;
            ui->progressBar->setFormat("Подсчет количества строк - %p%");
            ui->progressBar->setValue(qFloor((r * 100) / /*500/*/25000/**/));
            QApplication::processEvents();
        }

        int row = 0;
        for (int r = ui->spinBox_frow->value(); r <= testA; r++){
            QAxObject *cellSN = currSheet->querySubObject("Cells(Int, Int)", r, ui->spinBox_serial->value());
            QAxObject *cellNum = currSheet->querySubObject("Cells(Int, Int)", r, ui->spinBox_num->value());
            ui->tableWidget_data->insertRow(row);
            QTableWidgetItem *itemNum = new QTableWidgetItem(cellNum->dynamicCall("Value").toString());
            ui->tableWidget_data->setItem(row, 0, itemNum);
            QTableWidgetItem *itemS = new QTableWidgetItem(cellSN->dynamicCall("Value").toString());
            ui->tableWidget_data->setItem(row, 1, itemS);
            row++;


            ui->progressBar->setFormat("Сбор данных - %p%");
            ui->progressBar->setValue(qFloor((r * 100)/testA));
            QApplication::processEvents();
        }
        wbook->dynamicCall("Close()");
        excel->dynamicCall("Quit()");
        delete excel;

    }
    ui->tableWidget_data->resizeColumnsToContents();
    ui->tableWidget_data->horizontalHeader()->setStretchLastSection(true);
    ui->progressBar->hide();


}

void data_add::load_data()
{
    if (ui->tableWidget_data->rowCount() > 0){
        ui->progressBar->setValue(0);
        ui->progressBar->setVisible(true);

        report.append(QString("<p>Файл: %1"
                              "<br>Всего строк: %2")
                      .arg(ui->lineEdit_file->text())
                      .arg(ui->tableWidget_data->rowCount()));

        QString error;
        int in = 0;
        int out = 0;
        for (int row = 0; row < ui->tableWidget_data->rowCount(); row++){
            QString num = ui->tableWidget_data->item(row, 0)->text();
            QString serial = ui->tableWidget_data->item(row, 1)->text();
            //test
            QSqlQuery queryTest(QString("SELECT phone.id FROM phone "
                                    "WHERE phone.num = \'%1\' AND phone.serial = \'%2\' ")
                            .arg(num).arg(serial));
            queryTest.next();
            if (queryTest.isValid()){
                out++;
            } else {
                QSqlQuery query_ins("INSERT INTO phone (num, serial, oper, active) VALUES (?, ?, ?, ?) ");
                query_ins.bindValue(0, num);
                query_ins.bindValue(1, serial);
                query_ins.bindValue(2, map_operator.value(ui->comboBox_operator->currentIndex()));
                query_ins.bindValue(3, "");
                query_ins.exec();
                if (query_ins.lastError().isValid()){
                    error.append(QString("<p>Error: %1</p>").arg(query_ins.lastError().text()));
                    break;
                } else {
                    in++;
                }
            }

            ui->progressBar->setFormat("Обновление базы данных - %p%");
            ui->progressBar->setValue(qFloor((row * 100)/ui->tableWidget_data->rowCount()));
            QApplication::processEvents();
        }
        if (error.size() > 0){
            report.append(error);
        } else {
            report.append(QString("<br>Добавлено номеров: %1"
                                  "<br>Пропущено (повторы): %2</p>").arg(in).arg(out));
        }
        make_report();
    }
    ui->progressBar->hide();    

}

void data_add::make_report()
{
    ui->groupBox_report->setVisible(true);
    ui->label_report->clear();
    ui->label_report->setText(report);
    report.clear();
    timer->start(15000);
}

void data_add::act_select_file()
{
    ui->progressBar->setValue(0);
    ui->progressBar->setFormat("Открываем файл...");
    ui->progressBar->setVisible(true);

    for (int r = ui->tableWidget_act_data->rowCount() - 1; r >= 0; r--){
        ui->tableWidget_act_data->removeRow(r);
    }

    QString fname = QFileDialog::getOpenFileName(this, "Select file...", "/HOME/", "Txt (*.txt)");
    ui->lineEdit_act_file->setText(fname);

    if (!fname.isEmpty()){
        QFile file(fname);
        if (file.open(QIODevice::ReadOnly)){
            int row = 0;
            while (!file.atEnd()){
                QByteArray ar = file.readLine();
                QString _line = ar;

                ui->tableWidget_act_data->insertRow(row);
                QTableWidgetItem *itemN = new QTableWidgetItem(_line.section(' ', 2, 2));
                ui->tableWidget_act_data->setItem(row, 0, itemN);
                QTableWidgetItem *itemD = new QTableWidgetItem(_line.section(' ', 0, 1));
                ui->tableWidget_act_data->setItem(row, 1, itemD);
                row++;

                ui->progressBar->setFormat("Сбор данных...");
                QApplication::processEvents();
            }
            file.close();
        }
    }

    ui->tableWidget_act_data->resizeColumnsToContents();
    ui->tableWidget_act_data->horizontalHeader()->setStretchLastSection(true);
    ui->progressBar->hide();
}

void data_add::act_update()
{
    if (ui->tableWidget_act_data->rowCount() > 0){
        ui->progressBar->setValue(0);
        ui->progressBar->setVisible(true);

        for (int row = 0; row < ui->tableWidget_act_data->rowCount(); row++){
            QSqlQuery query(QString("UPDATE phone SET active = \'%1\' WHERE phone.num = \'%2\' ")
                            .arg(ui->tableWidget_act_data->item(row, 1)->text())
                            .arg(ui->tableWidget_act_data->item(row, 0)->text()));
            query.exec();

            ui->progressBar->setFormat("Обновление базы данных - %p%");
            ui->progressBar->setValue(qFloor((row * 100)/ui->tableWidget_act_data->rowCount()));
            QApplication::processEvents();
        }

        report.append(QString("<p>Файл: %1"
                              "<br>Обновлено номеров: %2")
                      .arg(ui->lineEdit_act_file->text())
                      .arg(ui->tableWidget_act_data->rowCount()));
    }
    ui->progressBar->hide();
    make_report();
}

//----SEARCH------------------------

void data_add::search(const QString str)
{
    for (int r = ui->tableWidget_search->rowCount() - 1; r >= 0; r--){
        ui->tableWidget_search->removeRow(r);
    }
    QString str_query("SELECT oper.name, phone.num, phone.serial, phone.active "
                     "FROM phone "
                     "INNER JOIN oper ON oper.id = phone.oper ");
    str_query.append(QString("WHERE (phone.num LIKE \'%%1%\') OR (phone.serial LIKE \'%%1%\') ").arg(str));

    QSqlQuery query(str_query);
    int row = 0;
    while (query.next()){
        ui->tableWidget_search->insertRow(row);
        for (int col = 0; col < 4; col++){
            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());
            ui->tableWidget_search->setItem(row, col, item);
        }
        row++;
    }
    ui->tableWidget_search->resizeColumnsToContents();
    ui->tableWidget_search->horizontalHeader()->setStretchLastSection(true);

}
