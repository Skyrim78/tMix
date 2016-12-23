#include "stat.h"
#include "ui_stat.h"

statA::statA(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::statA)
{
    ui->setupUi(this);
    load();
    connect(ui->pushButton_del_nakl, SIGNAL(clicked(bool)), this, SLOT(del_nakl()));
    connect(ui->pushButton_make_file, SIGNAL(clicked(bool)), this, SLOT(make_files()));
}

statA::~statA()
{
    delete ui;
}

void statA::load()
{
    load_firm();
    load_org();
    load_nakl();
    load_active();
}

void statA::load_firm()
{
    for (int r = ui->tableWidget_firm->rowCount() - 1; r >= 0; r--){
        ui->tableWidget_firm->removeRow(r);
    }

    QSqlQuery query("SELECT firm.name, "
                    "(SELECT Count(phone.id) FROM phone WHERE phone.firm = firm.id), "
                    "(SELECT Count(phone.id) FROM phone WHERE phone.firm = firm.id AND phone.active IS NOT NULL) "
                    "FROM firm "
                    "WHERE firm.id > \'0\' "
                    "ORDER BY firm.name ");
    int row = 0;
    while (query.next()){
        ui->tableWidget_firm->insertRow(row);
        for (int col = 0; col < 3; col++){
            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());
            ui->tableWidget_firm->setItem(row, col, item);
        }
        row++;
    }
    ui->tableWidget_firm->resizeColumnsToContents();
    ui->tableWidget_firm->horizontalHeader()->setStretchLastSection(true);
}

void statA::load_org()
{
    for (int r = ui->tableWidget_org->rowCount() - 1; r >= 0; r--){
        ui->tableWidget_org->removeRow(r);
    }

    QSqlQuery query("SELECT org.name, "
                    "(SELECT Count(phone.id) FROM phone WHERE phone.org = org.id), "
                    "(SELECT Count(phone.id) FROM phone WHERE phone.org = org.id AND phone.active IS NOT NULL) "
                    "FROM org "
                    "WHERE org.id > \'0\' "
                    "ORDER BY org.name ");
    int row = 0;
    while (query.next()){
        ui->tableWidget_org->insertRow(row);
        for (int col = 0; col < 3; col++){
            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());
            ui->tableWidget_org->setItem(row, col, item);
        }
        row++;
    }
    ui->tableWidget_org->resizeColumnsToContents();
    ui->tableWidget_org->horizontalHeader()->setStretchLastSection(true);
}

void statA::load_nakl()
{
    for (int r = ui->tableWidget_nakl->rowCount() - 1; r >= 0; r--){
        ui->tableWidget_nakl->removeRow(r);
    }

    QSqlQuery query("SELECT nakl.id, nakl.name, "
                    "(SELECT Count(phone.id) FROM phone WHERE phone.nakl = nakl.id), "
                    "(SELECT Count(phone.id) FROM phone WHERE phone.nakl = nakl.id AND phone.num IS NOT NULL), "
                    "(SELECT Count(phone.id) FROM phone WHERE phone.nakl = nakl.id AND phone.active IS NOT NULL) "
                    "FROM nakl "
                    "WHERE nakl.id > \'0\' "
                    "ORDER BY nakl.name ");
    int row = 0;
    while (query.next()){
        ui->tableWidget_nakl->insertRow(row);
        for (int col = 0; col < 5; col++){
            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());
            ui->tableWidget_nakl->setItem(row, col, item);
        }
        row++;
    }
    ui->tableWidget_nakl->setColumnHidden(0, true);
    ui->tableWidget_nakl->resizeColumnsToContents();
    ui->tableWidget_nakl->horizontalHeader()->setStretchLastSection(true);
}

void statA::load_active()
{
    for (int r = ui->tableWidget_active->rowCount() - 1; r >= 0; r--){
        ui->tableWidget_active->removeRow(r);
    }

    QSqlQuery query("SELECT oper.id, oper.name, "
                    "(SELECT Count(phone.id) FROM phone WHERE (phone.oper = oper.id) AND (phone.active IS NULL) AND (phone.nakl > 0) AND (phone.num IS NOT NULL)) "
                    "FROM oper "
                    "WHERE oper.id > \'0\' "
                    "ORDER BY oper.name ");
    int row = 0;
    while (query.next()){
        ui->tableWidget_active->insertRow(row);
        for (int col = 0; col < 3; col++){
            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());
            ui->tableWidget_active->setItem(row, col, item);
        }
        row++;
    }
    ui->tableWidget_active->setColumnHidden(0, true);
    ui->tableWidget_active->resizeColumnsToContents();
    ui->tableWidget_active->horizontalHeader()->setStretchLastSection(true);
}

void statA::del_nakl()
{
    if (ui->tableWidget_nakl->rowCount() > 0){
        for (int row = 0; row < ui->tableWidget_nakl->rowCount(); row++){
            if (ui->tableWidget_nakl->item(row, 0)->isSelected()){
                QSqlQuery queryA(QString("DELETE FROM phone WHERE phone.nakl = \'%1\' ")
                                .arg(ui->tableWidget_nakl->item(row, 0)->text()));
                queryA.exec();

                QSqlQuery queryB(QString("DELETE FROM nakl WHERE nakl.id = \'%1\' ")
                                .arg(ui->tableWidget_nakl->item(row, 0)->text()));
                queryB.exec();
            }
        }
    }
    load();
}

void statA::make_files()
{

    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                      "/home",
                                                      QFileDialog::ShowDirsOnly
                                                      | QFileDialog::DontResolveSymlinks);

    for (int r = 0; r < ui->tableWidget_active->rowCount(); r++){
        int x = ui->tableWidget_active->item(r, 2)->text().toInt();
        if (x > 0){
            QString fname = QString("%1/%2_active_%3.txt")
                    .arg(dir)
                    .arg(ui->tableWidget_active->item(r, 1)->text())
                    .arg(QDateTime::currentDateTime().toString("dd-MM-yyyy_hh-mm-ss"));

            QFile file(fname);
            if (file.open(QIODevice::WriteOnly)){
                QTextStream out(&file);
                QString str;
                QSqlQuery query_num(QString("SELECT phone.num "
                                            "FROM phone "
                                            "WHERE (phone.oper = \'%1\') AND (phone.nakl > 0) AND (phone.active IS NULL) ")
                                    .arg(ui->tableWidget_active->item(r, 0)->text()));
                while (query_num.next()){
                    str.append(QString("%1\r\n").arg(query_num.value(0).toString()));
                }
                out << str;
                file.close();
            }
        }
    }
    QMessageBox messa;
    messa.setText("Файлы сохранены!");
    messa.exec();
}
