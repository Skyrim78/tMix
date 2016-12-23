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

    //-nakl
    connect(ui->toolButton_n_file, SIGNAL(clicked(bool)), this, SLOT(n_select_file()));
    connect(ui->toolButton_n_file, SIGNAL(clicked(bool)), this, SLOT(setting_read()));

    connect(ui->pushButton_n_read, SIGNAL(clicked(bool)), this, SLOT(n_read_file()));
    connect(ui->pushButton_n_read, SIGNAL(clicked(bool)), this, SLOT(setting_write()));

    connect(ui->pushButton_n_load, SIGNAL(clicked(bool)), this, SLOT(n_load_data()));

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

    load_operator();

    for (int r = ui->tableWidget_data->rowCount() - 1; r >= 0; r--){
        ui->tableWidget_data->removeRow(r);
    }
    for (int r = ui->tableWidget_act_data->rowCount() - 1; r >= 0; r--){
        ui->tableWidget_act_data->removeRow(r);
    }

}


void data_add::setting_read()
{
    QSettings sett("setting.ini", QSettings::IniFormat);
    ui->spinBox_num->setValue(sett.value("data/num").toInt());
    ui->spinBox_serial->setValue(sett.value("data/serial").toInt());
    ui->spinBox_frow->setValue(sett.value("data/frow").toInt());

    ui->spinBox_n_frow->setValue(sett.value("n/frow").toInt());
    ui->spinBox_n_firm->setValue(sett.value("n/firm").toInt());
    ui->spinBox_n_nom->setValue(sett.value("n/nom").toInt());
    ui->spinBox_n_serial->setValue(sett.value("n/serial").toInt());
    ui->spinBox_n_date->setValue(sett.value("n/date").toInt());
    ui->spinBox_n_doc->setValue(sett.value("n/doc").toInt());
    ui->spinBox_n_org->setValue(sett.value("n/org").toInt());
    ui->spinBox_n_note->setValue(sett.value("n/note").toInt());

}

void data_add::setting_write()
{
    QSettings sett("setting.ini", QSettings::IniFormat);
    sett.beginGroup("data");
    sett.setValue("num", ui->spinBox_num->value());
    sett.setValue("serial", ui->spinBox_serial->value());
    sett.setValue("frow", ui->spinBox_frow->value());
    sett.endGroup();
    sett.beginGroup("n");
    sett.setValue("frow", ui->spinBox_n_frow->value());
    sett.setValue("firm", ui->spinBox_n_firm->value());
    sett.setValue("nom", ui->spinBox_n_nom->value());
    sett.setValue("serial", ui->spinBox_n_serial->value());
    sett.setValue("date", ui->spinBox_n_date->value());
    sett.setValue("doc", ui->spinBox_n_doc->value());
    sett.setValue("org", ui->spinBox_n_org->value());
    sett.setValue("note", ui->spinBox_n_note->value());
    sett.endGroup();
}

void data_add::load_operator()
{
    map_operator.clear();
    ui->comboBox_operator->clear();
    QSqlQuery query("SELECT oper.id, oper.name FROM oper WHERE oper.id > \'0\' ORDER BY oper.name ");
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
        int add = 0;
        int upd = 0;
        int out = 0;
        for (int row = 0; row < ui->tableWidget_data->rowCount(); row++){
            QString num = ui->tableWidget_data->item(row, 0)->text();
            QString serial = ui->tableWidget_data->item(row, 1)->text();
            //test
            QSqlQuery queryTest(QString("SELECT phone.id, phone.num FROM phone "
                                    "WHERE phone.serial = \'%1\' ")
                            .arg(serial));
            queryTest.next();
            if (!queryTest.isValid()){
                QSqlQuery query_ins("INSERT INTO phone (num, serial, oper) VALUES (?, ?, ?) ");
                query_ins.bindValue(0, num);
                query_ins.bindValue(1, serial);
                query_ins.bindValue(2, map_operator.value(ui->comboBox_operator->currentIndex()));
                query_ins.exec();
                if (query_ins.lastError().isValid()){
                    error.append(QString("<p>Error: %1</p>").arg(query_ins.lastError().text()));
                    break;
                } else {
                    add++;
                }
            } else {
                int id = queryTest.value(0).toInt();
                QString num = queryTest.value(1).toString();
                if (num.isEmpty()){
                    QSqlQuery query_update(QString("UPDATE phone SET num = \'%1\' WHERE phone.id = \'%2\' ")
                                           .arg(num)
                                           .arg(id));
                    query_update.exec();
                    if (query_update.lastError().isValid()){
                        error.append(QString("<p>Error: %1</p>").arg(query_update.lastError().text()));
                        break;
                    } else {
                        upd++;
                    }
                } else {
                    // повтор
                    out++;
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
                                  "<br>Обновлено номеров: %2"
                                  "<br>Пропущено (повторы): %3</p>").arg(add).arg(upd).arg(out));
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

        int upd = 0;
        int out = 0;

        for (int row = 0; row < ui->tableWidget_act_data->rowCount(); row++){
            QSqlQuery query_test(QString("SELECT phone.id FROM phone WHERE phone.num = \'%1\' ")
                                 .arg(ui->tableWidget_act_data->item(row, 0)->text()));
            query_test.next();
            if (query_test.isValid()){
                QSqlQuery query(QString("UPDATE phone SET active = \'%1\' WHERE phone.num = \'%2\' ")
                                .arg(ui->tableWidget_act_data->item(row, 1)->text())
                                .arg(ui->tableWidget_act_data->item(row, 0)->text()));
                query.exec();
                upd++;
            } else {
               out++;
            }

            ui->progressBar->setFormat("Обновление базы данных - %p%");
            ui->progressBar->setValue(qFloor((row * 100)/ui->tableWidget_act_data->rowCount()));
            QApplication::processEvents();
        }

        report.append(QString("<p>Файл: %1"
                              "<br>Обновлено номеров: %2"
                              "<br>Не найдено номеров: %3")
                      .arg(ui->lineEdit_act_file->text())
                      .arg(upd)
                      .arg(out));
    }
    ui->progressBar->hide();
    make_report();
}

//-----------НАКЛАДНЫЕ--------

void data_add::n_select_file()
{
    QString error;

    QString fname = QFileDialog::getOpenFileName(this, "Select file...", "/HOME/", "Excel (*.xls *.xlsx)");
    ui->lineEdit_n_file->setText(fname);

    ui->comboBox_n_list->clear();

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

        ui->comboBox_n_list->addItems(list_name);


        wbook->dynamicCall("Close()");
        excel->dynamicCall("Quit()");
        delete excel;
    }
}

void data_add::n_read_file()
{

    ui->progressBar->setValue(0);
    ui->progressBar->setVisible(true);

    for (int r = ui->tableWidget_n->rowCount() - 1; r >= 0; r--){
        ui->tableWidget_n->removeRow(r);
    }

    QString fname = ui->lineEdit_n_file->text();

    excel = new QAxObject("Excel.Application", this);
    excel->setProperty("Visible", 0);
    excel->setProperty("DisplayAlerts", 0);
    wbook = excel->querySubObject("Workbooks");
    book = wbook->querySubObject("Open (const QString&)", fname);
    sheets = book->querySubObject("Sheets");

    currSheet = sheets->querySubObject("Item(Int)", ui->comboBox_n_list->currentIndex() + 1);

    int row_count = 0;

    int rows = ui->spinBox_n_frow->value() - 1;
    for (int r = ui->spinBox_n_frow->value(); r < /*500/*/25000/**/; r++){
        QAxObject *cell = currSheet->querySubObject("Cells(Int, Int)", r, ui->spinBox_n_serial->value());
        QString _data = cell->dynamicCall("Value").toString();
        if (_data.isEmpty()){
            break;
        }
        rows++;
        row_count++;
        ui->progressBar->setFormat("Подсчет количества строк - %p%");
        ui->progressBar->setValue(qFloor((r * 100) / /*500/*/25000/**/));
        QApplication::processEvents();

    }
    report.append(QString("<br>Всего строк: %1").arg(row_count));

    int row = 0;
    for (int r = ui->spinBox_n_frow->value(); r <= rows; r++){
        // firm
        QAxObject *c_firm = currSheet->querySubObject("Cells(Int, Int)", r, ui->spinBox_n_firm->value());
        QString firm = c_firm->dynamicCall("Value").toString();

        // org
        QAxObject *c_org = currSheet->querySubObject("Cells(Int, Int)", r, ui->spinBox_n_org->value());
        QString org = c_org->dynamicCall("Value").toString();

        //номенклатура
        QAxObject *c_nom = currSheet->querySubObject("Cells(Int, Int)", r, ui->spinBox_n_nom->value());
        QString nom = c_nom->dynamicCall("Value").toString();

        //SN
        QAxObject *c_serial = currSheet->querySubObject("Cells(Int, Int)", r, ui->spinBox_n_serial->value());
        QString serial = c_serial->dynamicCall("Value").toString();

        //date otgruz
        QAxObject *c_otg = currSheet->querySubObject("Cells(Int, Int)", r, ui->spinBox_n_date->value());
        QString otg = c_otg->dynamicCall("Value").toString();

        //doc
        QAxObject *c_doc = currSheet->querySubObject("Cells(Int, Int)", r, ui->spinBox_n_doc->value());
        QString doc = c_doc->dynamicCall("Value").toString();

        //note
        QAxObject *c_note = currSheet->querySubObject("Cells(Int, Int)", r, ui->spinBox_n_note->value());
        QString note = c_note->dynamicCall("Value").toString();

        ui->tableWidget_n->insertRow(row);
        QTableWidgetItem *itemF = new QTableWidgetItem(firm);
        ui->tableWidget_n->setItem(row, 0, itemF);
        QTableWidgetItem *itemN = new QTableWidgetItem(nom);
        ui->tableWidget_n->setItem(row, 1, itemN);
        QTableWidgetItem *itemS = new QTableWidgetItem(serial);
        ui->tableWidget_n->setItem(row, 2, itemS);
        QTableWidgetItem *itemO = new QTableWidgetItem(otg);
        ui->tableWidget_n->setItem(row, 3, itemO);
        QTableWidgetItem *itemD = new QTableWidgetItem(doc);
        ui->tableWidget_n->setItem(row, 4, itemD);
        QTableWidgetItem *itemOr = new QTableWidgetItem(org);
        ui->tableWidget_n->setItem(row, 5, itemOr);
        QTableWidgetItem *itemNo = new QTableWidgetItem(note);
        ui->tableWidget_n->setItem(row, 6, itemNo);
        row++;

        ui->progressBar->setFormat("Чтение данных - %p%");
        ui->progressBar->setValue(qFloor((r * 100)/rows));
        QApplication::processEvents();
    }
    ui->tableWidget_n->resizeColumnsToContents();
    ui->tableWidget_n->horizontalHeader()->setStretchLastSection(true);


    book->dynamicCall("Save()");
    wbook->dynamicCall("Close()");
    excel->dynamicCall("Quit()");
    delete excel;

    ui->progressBar->hide();

}

void data_add::n_load_data()
{
    ui->progressBar->setValue(0);
    ui->progressBar->setVisible(true);
    report.clear();
    if (ui->tableWidget_n->rowCount() > 0){
        int add = 0;
        int upd = 0;
        int out = 0;
        for (int row = 0; row < ui->tableWidget_n->rowCount(); row++){
            QString _sn = ui->tableWidget_n->item(row, 2)->text();

            QSqlQuery query_test(QString("SELECT phone.id, phone.num, phone.nakl FROM phone WHERE phone.serial = \'%1\' ").arg(_sn));
            query_test.next();
            if (!query_test.isValid()){
                int ID_FIRM = get_id_firm(ui->tableWidget_n->item(row, 0)->text());
                int ID_NAKL = get_id_nakl(ui->lineEdit_n_file->text());
                int ID_ORG = get_id_org(ui->tableWidget_n->item(row, 5)->text());
                QSqlQuery query_insert("INSERT INTO phone (serial, nakl, firm, cat, otg, doc, org, note) "
                                       "VALUES (?, ?, ?, ?, ?, ?, ?, ?) ");
                query_insert.bindValue(0, _sn);
                query_insert.bindValue(1, ID_NAKL);
                query_insert.bindValue(2, ID_FIRM);
                query_insert.bindValue(3, ui->tableWidget_n->item(row, 1)->text());
                query_insert.bindValue(4, ui->tableWidget_n->item(row, 3)->text());
                query_insert.bindValue(5, ui->tableWidget_n->item(row, 4)->text());
                query_insert.bindValue(6, ID_ORG);
                query_insert.bindValue(7, ui->tableWidget_n->item(row, 6)->text());
                query_insert.exec();
                if (query_insert.lastError().isValid()){
                    qDebug() << "insert -" << query_insert.lastError();
                    break;
                } else {
                    add++;
                }
            } else {
                int id = query_test.value(0).toInt();
                int nakl = query_test.value(2).toInt();
                if (nakl > 0){
                    out++;
                    // повтор
                } else {
                    int ID_FIRM = get_id_firm(ui->tableWidget_n->item(row, 0)->text());
                    int ID_NAKL = get_id_nakl(ui->lineEdit_n_file->text());
                    int ID_ORG = get_id_org(ui->tableWidget_n->item(row, 5)->text());
                    QSqlQuery query_update(QString("UPDATE phone SET nakl = \'%1\', firm = \'%2\', cat = \'%3\', otg = \'%4\', "
                                                   "doc = \'%5\', org = \'%6\', note = \'%7\' "
                                                   "WHERE phone.id = \'%8\' ")
                                           .arg(ID_NAKL)
                                           .arg(ID_FIRM)
                                           .arg(ui->tableWidget_n->item(row, 1)->text())
                                           .arg(ui->tableWidget_n->item(row, 3)->text())
                                           .arg(ui->tableWidget_n->item(row, 4)->text())
                                           .arg(ID_ORG)
                                           .arg(ui->tableWidget_n->item(row, 6)->text())
                                           .arg(id));
                    query_update.exec();
                    if (query_update.lastError().isValid()){
                        qDebug() << "update -"  << query_update.lastError();
                        break;
                    } else {
                        upd++;
                    }
                }
            }
            ui->progressBar->setFormat("Загрузка данных - %p%");
            ui->progressBar->setValue(qFloor((row * 100)/ui->tableWidget_n->rowCount()));
            QApplication::processEvents();
        }
        report.append(QString("<p>Файл: %1"
                      "<br>Добавлено номеров: %2"
                      "<br>Обновлено номеров: %3"
                      "<br>Пропущено номеров: %4")
                      .arg(ui->lineEdit_n_file->text())
                      .arg(add)
                      .arg(upd)
                      .arg(out));
        make_report();
        ui->progressBar->hide();
    }
}

int data_add::get_id_nakl(const QString _nakl)
{
    int _id = 0;
    QSqlQuery query_select(QString("SELECT nakl.id FROM nakl WHERE nakl.name = \'%1\' ").arg(_nakl));
    query_select.next();
    if (query_select.isValid()){
        _id = query_select.value(0).toInt();
    } else {
        QSqlQuery query_insert("INSERT INTO nakl (name) VALUES (?)");
        query_insert.bindValue(0, _nakl);
        query_insert.exec();
        if (!query_insert.lastError().isValid()){
            _id = query_insert.lastInsertId().toInt();
        } else {
            qDebug() << query_insert.lastError();
        }
    }
    return _id;
}

int data_add::get_id_firm(const QString _firm)
{
    int _id = 0;
    QSqlQuery query_select(QString("SELECT firm.id FROM firm WHERE firm.name = \'%1\' ").arg(_firm));
    query_select.next();
    if (query_select.isValid()){
        _id = query_select.value(0).toInt();
    } else {
        QSqlQuery query_insert("INSERT INTO firm (name) VALUES (?)");
        query_insert.bindValue(0, _firm);
        query_insert.exec();
        if (!query_insert.lastError().isValid()){
            _id = query_insert.lastInsertId().toInt();
        } else {
            qDebug() << query_insert.lastError();
        }
    }
    return _id;
}

int data_add::get_id_org(const QString _org)
{
    int _id = 0;
    QSqlQuery query_select(QString("SELECT org.id FROM org WHERE org.name = \'%1\' ").arg(_org));
    query_select.next();
    if (query_select.isValid()){
        _id = query_select.value(0).toInt();
    } else {
        QSqlQuery query_insert("INSERT INTO org (name) VALUES (?)");
        query_insert.bindValue(0, _org);
        query_insert.exec();
        if (!query_insert.lastError().isValid()){
            _id = query_insert.lastInsertId().toInt();
        } else {
            qDebug() << query_insert.lastError();
        }
    }
    return _id;
}



