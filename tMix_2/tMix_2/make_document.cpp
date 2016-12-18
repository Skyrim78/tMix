#include "make_document.h"
#include "ui_make_document.h"

make_document::make_document(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::make_document)
{
    ui->setupUi(this);

    ui->lineEdit_file->clear();
    ui->groupBox_report->hide();

    connect(ui->toolButton_file, SIGNAL(clicked(bool)), this, SLOT(select_file()));
    connect(ui->toolButton_file, SIGNAL(clicked(bool)), this, SLOT(setting_read()));

    connect(ui->pushButton_make, SIGNAL(clicked(bool)), this, SLOT(make_file()));
    connect(ui->pushButton_make, SIGNAL(clicked(bool)), this, SLOT(setting_write()));

    connect(ui->spinBox_active, SIGNAL(valueChanged(int)), ui->horizontalSlider_active, SLOT(setValue(int)));
    connect(ui->horizontalSlider_active, SIGNAL(valueChanged(int)), ui->spinBox_active, SLOT(setValue(int)));

    connect(ui->spinBox_frow, SIGNAL(valueChanged(int)), ui->horizontalSlider_frow, SLOT(setValue(int)));
    connect(ui->horizontalSlider_frow, SIGNAL(valueChanged(int)), ui->spinBox_frow, SLOT(setValue(int)));

    connect(ui->spinBox_sn, SIGNAL(valueChanged(int)), ui->horizontalSlider_sn, SLOT(setValue(int)));
    connect(ui->horizontalSlider_sn, SIGNAL(valueChanged(int)), ui->spinBox_sn, SLOT(setValue(int)));

    connect(ui->spinBox_num, SIGNAL(valueChanged(int)), ui->horizontalSlider_num, SLOT(setValue(int)));
    connect(ui->horizontalSlider_num, SIGNAL(valueChanged(int)), ui->spinBox_num, SLOT(setValue(int)));
}

make_document::~make_document()
{
    delete ui;
}

void make_document::load()
{
    ui->lineEdit_file->clear();
    ui->groupBox_report->hide();

    ui->comboBox_list->clear();
    ui->spinBox_active->setValue(1);
    ui->spinBox_frow->setValue(1);
    ui->spinBox_sn->setValue(1);
    ui->spinBox_num->setValue(1);
    ui->horizontalSlider_num->setValue(1);
    ui->horizontalSlider_frow->setValue(1);
    ui->horizontalSlider_sn->setValue(1);
    ui->horizontalSlider_active->setValue(1);

}

void make_document::setting_read()
{
    QSettings sett("setting.ini", QSettings::IniFormat);
    ui->spinBox_num->setValue(sett.value("to/num").toInt());
    ui->spinBox_active->setValue(sett.value("to/active").toInt());
    ui->spinBox_sn->setValue(sett.value("to/serial").toInt());
    ui->spinBox_frow->setValue(sett.value("to/frow").toInt());
}

void make_document::setting_write()
{
    QSettings sett("setting.ini", QSettings::IniFormat);
    sett.beginGroup("to");
    sett.setValue("num", ui->spinBox_num->value());
    sett.setValue("serial", ui->spinBox_sn->value());
    sett.setValue("frow", ui->spinBox_frow->value());
    sett.setValue("active", ui->spinBox_active->value());
    sett.endGroup();
}

void make_document::select_file()
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

        ui->groupBox_report->hide();
    }
}

void make_document::make_file()
{
    //очистка списка активации
    numActiveList.clear();
    operActiveList.clear();

    ui->progressBar->setValue(0);
    ui->progressBar->setFormat("Открываем файл...");
    ui->progressBar->setVisible(true);

    //формируем имя файла для вывода
    QFile file(ui->lineEdit_file->text());
    QString fname = ui->lineEdit_file->text();
    QString fnew = fname.section("/", 0, fname.split("/").size() - 2);
    fnew.append(QString("/mix_%1").arg(fname.section("/", fname.split("/").size() - 1, fname.split("/").size() - 1)));

    file.copy(fnew);

    report.append("<p><strong>Отчет обработки</strong>");
    report.append(QString("<br>Исходный файл: <b>%1</b>").arg(ui->lineEdit_file->text()));
    report.append(QString("<br>Результат: <b>%1</b>").arg(fnew));

    excel = new QAxObject("Excel.Application", this);
    excel->setProperty("Visible", 0);
    excel->setProperty("DisplayAlerts", 0);
    wbook = excel->querySubObject("Workbooks");
    book = wbook->querySubObject("Open (const QString&)", fnew);
    sheets = book->querySubObject("Sheets");

    currSheet = sheets->querySubObject("Item(Int)", ui->comboBox_list->currentIndex() + 1);

    int row_count = 0;

    int rows = ui->spinBox_frow->value() - 1;
    for (int r = ui->spinBox_frow->value(); r < /*500/*/25000/**/; r++){
        QAxObject *cell = currSheet->querySubObject("Cells(Int, Int)", r, ui->spinBox_sn->value());
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

    int _n = 0;
    int _a = 0;
    for (int r = ui->spinBox_frow->value(); r <= rows; r++){
        QAxObject *cellSN = currSheet->querySubObject("Cells(Int, Int)", r, ui->spinBox_sn->value());
        QAxObject *cellNum = currSheet->querySubObject("Cells(Int, Int)", r, ui->spinBox_num->value());
        QAxObject *cellAct = currSheet->querySubObject("Cells(Int, Int)", r, ui->spinBox_active->value());

        QString _sn = cellSN->dynamicCall("Value").toString();

        QSqlQuery query(QString("SELECT phone.num, phone.active, oper.name "
                                "FROM phone "
                                "INNER JOIN oper ON oper.id = phone.oper "
                                "WHERE phone.serial = \'%1\' ").arg(_sn));
        query.next();
        if (query.isValid()){
            QString _num = query.value(0).toString();
            QString _act = query.value(1).toString();

            cellNum->dynamicCall("NumberFormat", "@");
            cellNum->dynamicCall("Value", _num);
            cellAct->dynamicCall("NumberFormat", "@");
            cellAct->dynamicCall("Value", _act);

            if (!_num.isEmpty()){
                _n++;
            }
            if (!_act.isEmpty()){
                _a++;
            }
            //если номер есть, а активации нет
            if (!_num.isEmpty() and _act.isEmpty()){
                numActiveList.append(QString("%1||%2")
                                     .arg(query.value(2).toString())
                                     .arg(query.value(0).toString()));
                operActiveList.append(query.value(2).toString());
            }
        }

        ui->progressBar->setFormat("Обработка - %p%");
        ui->progressBar->setValue(qFloor((r * 100)/rows));
        QApplication::processEvents();
    }


    book->dynamicCall("Save()");
    wbook->dynamicCall("Close()");
    excel->dynamicCall("Quit()");
    delete excel;

    report.append(QString("<br>Позиции с номерами: <b>%1</b>").arg(_n));
    report.append(QString("<br>Активных номеров: <b>%1</b></p>").arg(_a));
    ui->progressBar->hide();

    //файл для проверки активации
    if (ui->checkBox_active->isChecked()){
        if (numActiveList.size() > 0){
            make_file_activation();
        }
    }
    //-----------------------

    make_report();
}

void make_document::make_file_activation()
{
    operActiveList.removeDuplicates();
    for (int a = 0; a < operActiveList.size(); a++){
        int count = 0;

        QString fname = ui->lineEdit_file->text();
        QString nameActiveFile = fname.section("/", 0, fname.split("/").size() - 2);
        nameActiveFile.append(QString("/%1_active_%2.txt")
                              .arg(operActiveList.at(a))
                              .arg(QDateTime::currentDateTime().toString("dd-MM-yyyy_hh-mm-ss")));


        QFile file(nameActiveFile);
        if (file.open(QIODevice::WriteOnly)){
            QTextStream out(&file);
            QString str;
            for (int x = 0; x < numActiveList.size(); x++){
                QString _oper = numActiveList.at(x).split("||").at(0);
                if (_oper == operActiveList.at(a)){
                    str.append(QString("%1\r\n").arg(numActiveList.at(x).split("||").at(1)));
                    count++;
                }
            }
            out << str;
            file.close();
        }
        report.append("<p>------------</p>");
        report.append(QString("<p>Создан файл проверки активации: <b>%1</b>").arg(nameActiveFile));
        report.append(QString("<br>Кол-во номеров в файле: <b>%1</b>").arg(count));
        report.append("<br>------------</p>");
    }
}

void make_document::make_report()
{
    ui->label_report->clear();
    ui->label_report->setTextFormat(Qt::RichText);
    ui->label_report->setText(report);
    ui->groupBox_report->setVisible(true);
}
