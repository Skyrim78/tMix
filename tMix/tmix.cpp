#include "tmix.h"
#include "ui_tmix.h"
#include <QDebug>

tMix::tMix(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tMix)
{
    ui->setupUi(this);

    ui->progressBar->hide();
    setting_read();



    connect(ui->toolButton_from_file, SIGNAL(clicked(bool)), this, SLOT(select_from()));
    connect(ui->toolButton_to_file, SIGNAL(clicked(bool)), this, SLOT(select_to()));
    connect(ui->pushButton_make, SIGNAL(clicked(bool)), this, SLOT(make_it()));

    connect(ui->spinBox_from_sn, SIGNAL(valueChanged(int)), ui->horizontalSlider_from_sn, SLOT(setValue(int)));
    connect(ui->horizontalSlider_from_sn, SIGNAL(valueChanged(int)), ui->spinBox_from_sn, SLOT(setValue(int)));
    connect(ui->spinBox_from_num, SIGNAL(valueChanged(int)), ui->horizontalSlider_from_num, SLOT(setValue(int)));
    connect(ui->horizontalSlider_from_num, SIGNAL(valueChanged(int)), ui->spinBox_from_num, SLOT(setValue(int)));
    connect(ui->spinBox_to_sn, SIGNAL(valueChanged(int)), ui->horizontalSlider_to_sn, SLOT(setValue(int)));
    connect(ui->horizontalSlider_to_sn, SIGNAL(valueChanged(int)), ui->spinBox_to_sn, SLOT(setValue(int)));
    connect(ui->spinBox_to_tag, SIGNAL(valueChanged(int)), ui->horizontalSlider_to_tag, SLOT(setValue(int)));
    connect(ui->horizontalSlider_to_tag, SIGNAL(valueChanged(int)), ui->spinBox_to_tag, SLOT(setValue(int)));

    connect(ui->toolButton_close, SIGNAL(clicked(bool)), this, SLOT(close()));


}

tMix::~tMix()
{
    delete ui;
}

void tMix::closeEvent(QCloseEvent *event)
{
    if (event->isAccepted()){
        setting_write();
    }
}

void tMix::setting_read()
{
    QSettings sett("setting.ini", QSettings::IniFormat);
    resize(sett.value("size").toSize());
    move(sett.value("pos").toPoint());

}

void tMix::setting_write()
{
    QSettings sett("setting.ini", QSettings::IniFormat);
    sett.setValue("pos", pos());
    sett.setValue("size", size());

}

void tMix::select_from()
{
    QString fname = QFileDialog::getOpenFileName(this, "Select file...", "/HOME/", "Excel (*.xls *.xlsx)");
    ui->lineEdit_from->setText(fname);

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

        ui->comboBox_from_list->addItems(list_name);


        wbook->dynamicCall("Close()");
        excel->dynamicCall("Quit()");
        delete excel;

    }

    ui->progressBar->setValue(0);
}

void tMix::select_to()
{
    QString fname = QFileDialog::getOpenFileName(this, "Select file...", "/HOME/", "Excel (*.xls *.xlsx)");
    ui->lineEdit_to->setText(fname);

    ui->comboBox_to_list->clear();

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

        ui->comboBox_to_list->addItems(list_name);


        wbook->dynamicCall("Close()");
        excel->dynamicCall("Quit()");
        delete excel;

    }
}

void tMix::read_source()
{
    QString fname = ui->lineEdit_from->text();
    ui->progressBar->setValue(0);
    ui->progressBar->setVisible(true);

    map_from.clear();

    if (!fname.isEmpty()){
        excel = new QAxObject("Excel.Application", this);
        excel->setProperty("Visible", 0);
        excel->setProperty("DisplayAlerts", 0);
        wbook = excel->querySubObject("Workbooks");
        book = wbook->querySubObject("Open (const QString&)", fname);
        sheets = book->querySubObject("Sheets");

        currSheet = sheets->querySubObject("Item(Int)", ui->comboBox_from_list->currentIndex() + 1);

        int testA = 0;
        for (int r = ui->spinBox_from_frow->value(); r < 25000; r++){
            QAxObject *cell = currSheet->querySubObject("Cells(Int, Int)", r, ui->spinBox_from_sn->value());
            QString _data = cell->dynamicCall("Value").toString();
            if (_data.isEmpty()){
                break;
            }
            testA++;
        }

        for (int r = ui->spinBox_from_frow->value(); r < testA; r++){
            QAxObject *cellSN = currSheet->querySubObject("Cells(Int, Int)", r, ui->spinBox_from_sn->value());
            QAxObject *cellNum = currSheet->querySubObject("Cells(Int, Int)", r, ui->spinBox_from_num->value());

            map_from.insert(cellSN->dynamicCall("Value").toString(), cellNum->dynamicCall("Value").toString());

            ui->progressBar->setFormat("Сбор данных - %p%");
            ui->progressBar->setValue(qFloor((r * 100)/testA));
            QApplication::processEvents();
        }



        wbook->dynamicCall("Close()");
        excel->dynamicCall("Quit()");
        delete excel;

    }
    qDebug() << map_from.size();
}

void tMix::make_it()
{

    read_source();
    ui->progressBar->setFormat("Загрузка файла...");
    ui->progressBar->setValue(0);

    if (!ui->lineEdit_to->text().isEmpty()){

        QFile file(ui->lineEdit_to->text());
        int p = ui->lineEdit_to->text().indexOf(".");
        file.copy(ui->lineEdit_to->text().insert(p, "_mix"));
        QString fname = ui->lineEdit_to->text().insert(p, "_mix");

        excel = new QAxObject("Excel.Application", this);
        excel->setProperty("Visible", 0);
        excel->setProperty("DisplayAlerts", 0);
        wbook = excel->querySubObject("Workbooks");
        book = wbook->querySubObject("Open (const QString&)", fname);
        sheets = book->querySubObject("Sheets");

        currSheet = sheets->querySubObject("Item(Int)", ui->comboBox_to_list->currentIndex() + 1);

        int testA = 0;
        for (int r = ui->spinBox_to_frow->value(); r < 25000; r++){
            QAxObject *cell = currSheet->querySubObject("Cells(Int, Int)", r, ui->spinBox_to_sn->value());
            QString _data = cell->dynamicCall("Value").toString();
            if (_data.isEmpty()){
                break;
            }
            testA++;
        }

        qDebug() << testA;

        for (int r = ui->spinBox_to_frow->value(); r < testA; r++){
            QAxObject *cellSN = currSheet->querySubObject("Cells(Int, Int)", r, ui->spinBox_to_sn->value());
            QAxObject *cellTag = currSheet->querySubObject("Cells(Int, Int)", r, ui->spinBox_to_tag->value());

            QString _sn = cellSN->dynamicCall("Value").toString();

            cellTag->dynamicCall("Value", map_from.value(_sn));

            ui->progressBar->setFormat("Обработка - %p%");
            ui->progressBar->setValue(qFloor((r * 100)/testA));
            QApplication::processEvents();
        }


        book->dynamicCall("Save()");
        wbook->dynamicCall("Close()");
        excel->dynamicCall("Quit()");
        delete excel;

    }

    ui->progressBar->hide();
    QMessageBox messa;
    messa.setText("Готово!");
    messa.exec();
}
