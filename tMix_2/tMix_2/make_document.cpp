#include "make_document.h"
#include "ui_make_document.h"

make_document::make_document(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::make_document)
{
    ui->setupUi(this);
    load();

    connect(ui->pushButton_filter, SIGNAL(clicked(bool)), this, SLOT(filter()));
    connect(ui->pushButton_save, SIGNAL(clicked(bool)), this, SLOT(save()));
}

make_document::~make_document()
{
    delete ui;
}

void make_document::load_operators()
{
    map_oper.clear();
    ui->comboBox_f_oper->clear();
    QSqlQuery query("SELECT oper.id, oper.name FROM oper ORDER BY oper.name ASC ");
    while (query.next()){
        map_oper.insert(ui->comboBox_f_oper->count(), query.value(0).toInt());
        ui->comboBox_f_oper->addItem(query.value(1).toString());
    }
}

void make_document::load_nakl()
{
    map_nakl.clear();
    ui->comboBox_f_nakl->clear();
    QSqlQuery query("SELECT nakl.id, nakl.name FROM nakl ORDER BY nakl.name ASC ");
    while (query.next()){
        map_nakl.insert(ui->comboBox_f_nakl->count(), query.value(0).toInt());
        ui->comboBox_f_nakl->addItem(query.value(1).toString());
    }
}

void make_document::load_firm()
{
    map_firm.clear();
    ui->comboBox_f_firm->clear();
    QSqlQuery query("SELECT firm.id, firm.name FROM firm ORDER BY firm.name ASC ");
    while (query.next()){
        map_firm.insert(ui->comboBox_f_firm->count(), query.value(0).toInt());
        ui->comboBox_f_firm->addItem(query.value(1).toString());
    }
}

void make_document::load_org()
{
    map_org.clear();
    ui->comboBox_f_org->clear();
    QSqlQuery query("SELECT org.id, org.name FROM org ORDER BY org.name ASC ");
    while (query.next()){
        map_org.insert(ui->comboBox_f_org->count(), query.value(0).toInt());
        ui->comboBox_f_org->addItem(query.value(1).toString());
    }
}

void make_document::load()
{
    for (int r = ui->tableWidget_filter->rowCount() - 1; r >= 0; r--){
        ui->tableWidget_filter->removeRow(r);
    }
    ui->checkBox_f_oper->setChecked(false);
    ui->comboBox_f_oper->setEnabled(false);
    connect(ui->checkBox_f_oper, SIGNAL(clicked(bool)), ui->comboBox_f_oper, SLOT(setEnabled(bool)));

    ui->checkBox_f_nakl->setChecked(false);
    ui->comboBox_f_nakl->setEnabled(false);
    connect(ui->checkBox_f_nakl, SIGNAL(clicked(bool)), ui->comboBox_f_nakl, SLOT(setEnabled(bool)));

    ui->checkBox_f_firm->setChecked(false);
    ui->comboBox_f_firm->setEnabled(false);
    connect(ui->checkBox_f_firm, SIGNAL(clicked(bool)), ui->comboBox_f_firm, SLOT(setEnabled(bool)));

    ui->checkBox_f_org->setChecked(false);
    ui->comboBox_f_org->setEnabled(false);
    connect(ui->checkBox_f_org, SIGNAL(clicked(bool)), ui->comboBox_f_org, SLOT(setEnabled(bool)));

    ui->checkBox_f_active->setChecked(false);
    ui->radioButton_fa_yes->setEnabled(false);
    ui->radioButton_fa_no->setEnabled(false);
    connect(ui->checkBox_f_active, SIGNAL(clicked(bool)), ui->radioButton_fa_yes, SLOT(setEnabled(bool)));
    connect(ui->checkBox_f_active, SIGNAL(clicked(bool)), ui->radioButton_fa_no, SLOT(setEnabled(bool)));

    load_operators();
    load_nakl();
    load_firm();
    load_org();
}

void make_document::filter()
{
    for (int r = ui->tableWidget_filter->rowCount() - 1; r >= 0; r--){
        ui->tableWidget_filter->removeRow(r);
    }

    QString str("SELECT firm.name, phone.cat, phone.serial, phone.otg, phone.doc, org.name, phone.note, phone.num, phone.active "
                "FROM phone "
                "INNER JOIN firm ON (firm.id = phone.firm) "
                "INNER JOIN org ON (org.id = phone.org) "
                "WHERE (phone.id > 0) ");
    if (ui->checkBox_f_oper->isChecked()){
        str.append(QString("AND (phone.oper = \'%1\') ").arg(map_oper.value(ui->comboBox_f_oper->currentIndex())));
    }
    if (ui->checkBox_f_nakl->isChecked()){
        str.append(QString("AND (phone.nakl = \'%1\') ").arg(map_nakl.value(ui->comboBox_f_nakl->currentIndex())));
    }
    if (ui->checkBox_f_firm->isChecked()){
        str.append(QString("AND (phone.firm = \'%1\') ").arg(map_firm.value(ui->comboBox_f_firm->currentIndex())));
    }
    if (ui->checkBox_f_org->isChecked()){
        str.append(QString("AND (phone.org = \'%1\') ").arg(map_org.value(ui->comboBox_f_org->currentIndex())));
    }
    if (ui->checkBox_f_active->isChecked()){
        if (ui->radioButton_fa_no->isChecked()){
            str.append("AND (phone.active IS NULL) ");
        } else if (ui->radioButton_fa_yes->isChecked()){
            str.append("AND (phone.active IS NOT NULL) ");
        }
    }
    QSqlQuery query(str);
    int row = 0;
    while (query.next()){
        ui->tableWidget_filter->insertRow(row);
        for (int col = 0; col < 9; col++){
            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());
            ui->tableWidget_filter->setItem(row, col, item);
        }
        row++;
    }
    ui->tableWidget_filter->resizeColumnsToContents();
    ui->tableWidget_filter->horizontalHeader()->setStretchLastSection(true);
}

void make_document::save()
{
    ui->progressBar->setValue(0);

    QString fempty = QDir::currentPath();
    fempty.append("/empty.xlsx");

    QString fname = QFileDialog::getSaveFileName(this, "Save as...", "/HOME/", "Excel (*.xlsx)");

    QFile file(fempty);
    file.copy(fname);


    //QString fname = QFileDialog::getOpenFileName(this, "Select file...", "/HOME/", "Excel (*.xls *.xlsx)");

    if (!fname.isEmpty()){
        excel = new QAxObject("Excel.Application", this);
        excel->setProperty("Visible", 0);
        excel->setProperty("DisplayAlerts", 0);
        wbook = excel->querySubObject("Workbooks");
        book = wbook->querySubObject("Open (const QString&)", fname);
        sheets = book->querySubObject("Sheets");
        currSheet = book->querySubObject("ActiveSheet");
        currSheet->dynamicCall("Name", "tMix");//QString("tMix_%1").arg(QDateTime::currentDateTime().toString("dd.MM.yyyy hh:mm:ss")));

        for (int row = 0; row < ui->tableWidget_filter->rowCount(); row++){
            for (int col = 0; col < ui->tableWidget_filter->columnCount(); col++){
                QAxObject *cell = currSheet->querySubObject("Cells(Int, Int)", row + 1, col + 1);
                cell->dynamicCall("NumberFormat", "@");
                cell->dynamicCall("Value", ui->tableWidget_filter->item(row, col)->text());
            }
            ui->progressBar->setValue(qFloor((row + 1) * 100 / ui->tableWidget_filter->rowCount()));
        }

        book->dynamicCall("Save()");
        wbook->dynamicCall("Close()");
        excel->dynamicCall("Quit()");
        delete excel;

        ui->progressBar->setValue(0);
        QMessageBox messa;
        messa.setText("Файл сохранен!");
        messa.exec();
    }

}

