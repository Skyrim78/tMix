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
    for (int r = ui->tableWidget_nakl->rowCount() - 1; r >= 0; r--){
        ui->tableWidget_nakl->removeRow(r);
    }

    QSqlQuery query("SELECT nakl.id, nakl.name FROM nakl ORDER BY nakl.name ASC ");
    int row = 0;
    while (query.next()){
        ui->tableWidget_nakl->insertRow(row);
        for (int col = 0; col < 2; col++){
            if (col == 1){
                if (query.value(0).toInt() == 0){
                    QTableWidgetItem *itemN = new QTableWidgetItem("НЕТ НАКЛАДНОЙ");
                    ui->tableWidget_nakl->setItem(row, col, itemN);
                } else {
                    QTableWidgetItem *itemN = new QTableWidgetItem(query.value(col).toString());
                    ui->tableWidget_nakl->setItem(row, col, itemN);
                }
            } else {
                QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());
                ui->tableWidget_nakl->setItem(row, col, item);
            }
        }
        row++;

    }
    ui->tableWidget_nakl->horizontalHeader()->setStretchLastSection(true);
    ui->tableWidget_nakl->setColumnHidden(0, true);
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

    ui->groupBox_nakl->setChecked(false);
    for (int r = ui->tableWidget_nakl->rowCount() - 1; r >= 0; r--){
        ui->tableWidget_nakl->removeRow(r);
    }

    ui->checkBox_f_oper->setChecked(false);
    ui->comboBox_f_oper->setEnabled(false);
    connect(ui->checkBox_f_oper, SIGNAL(clicked(bool)), ui->comboBox_f_oper, SLOT(setEnabled(bool)));

    ui->checkBox_f_firm->setChecked(false);
    ui->comboBox_f_firm->setEnabled(false);
    connect(ui->checkBox_f_firm, SIGNAL(clicked(bool)), ui->comboBox_f_firm, SLOT(setEnabled(bool)));

    ui->checkBox_f_org->setChecked(false);
    ui->comboBox_f_org->setEnabled(false);
    connect(ui->checkBox_f_org, SIGNAL(clicked(bool)), ui->comboBox_f_org, SLOT(setEnabled(bool)));

    ui->checkBox_f_active->setChecked(false);
    ui->radioButton_fa_yes->setEnabled(false);
    ui->radioButton_fa_no->setEnabled(false);
    ui->dateEdit_from->setEnabled(false);
    ui->dateEdit_to->setEnabled(false);
    connect(ui->checkBox_f_active, SIGNAL(clicked(bool)), ui->radioButton_fa_yes, SLOT(setEnabled(bool)));
    connect(ui->checkBox_f_active, SIGNAL(clicked(bool)), ui->radioButton_fa_no, SLOT(setEnabled(bool)));

    ui->dateEdit_from->setDate(QDate::fromJulianDay(QDate::currentDate().toJulianDay() - 7));
    ui->dateEdit_from->setTime(QTime::fromString("00:00:01", "hh:mm:ss"));
    ui->dateEdit_to->setDate(QDate::currentDate());
    ui->dateEdit_to->setTime(QTime::fromString("23:59:59", "hh:mm:ss"));
    connect(ui->checkBox_f_active, SIGNAL(clicked(bool)), ui->dateEdit_from, SLOT(setEnabled(bool)));
    connect(ui->checkBox_f_active, SIGNAL(clicked(bool)), ui->dateEdit_to, SLOT(setEnabled(bool)));

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
    if (ui->groupBox_nakl->isChecked()){
        if (ui->tableWidget_nakl->rowCount() > 0){
            QList<int> list_nakl;
            for (int row = 0; row < ui->tableWidget_nakl->rowCount(); row++){
                if (ui->tableWidget_nakl->item(row, 0)->isSelected()){
                    list_nakl << ui->tableWidget_nakl->item(row, 0)->text().toInt();
                }
            }
            if (list_nakl.size() > 0){
                str.append("AND (");
                for (int x = 0; x < list_nakl.size(); x++){
                    str.append(QString("(phone.nakl = \'%1\')").arg(list_nakl.at(x)));
                    if (x != list_nakl.size() - 1){
                        str.append(" OR ");
                    }
                }
                str.append(") ");
            }
        }
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
            str.append(QString("AND (phone.active BETWEEN \'%1\' AND \'%2\') ")
                       .arg(ui->dateEdit_from->dateTime().toString("dd.MM.yyyy hh:mm:ss"))
                       .arg(ui->dateEdit_to->dateTime().toString("dd.MM.yyyy hh:mm:ss")));
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

        for (int col = 0; col < ui->tableWidget_filter->columnCount(); col++){
            QAxObject *cell = currSheet->querySubObject("Cells(Int, Int)", 1, col + 1);
            cell->dynamicCall("NumberFormat", "@");
            cell->dynamicCall("Value", ui->tableWidget_filter->horizontalHeaderItem(col)->text());
        }

        for (int row = 0; row < ui->tableWidget_filter->rowCount(); row++){
            for (int col = 0; col < ui->tableWidget_filter->columnCount(); col++){
                QAxObject *cell = currSheet->querySubObject("Cells(Int, Int)", row + 2, col + 1);
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

