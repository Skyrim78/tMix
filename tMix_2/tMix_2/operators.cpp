#include "operators.h"
#include "ui_operators.h"

operatorsM::operatorsM(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::operatorsM)
{
    ui->setupUi(this);

    ui->groupBox_operator->hide();
    ui->groupBox_messa->hide();
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), ui->groupBox_messa, SLOT(hide()));

    load();

    ui->tableWidget_oper->setColumnHidden(0, true);
    connect(ui->pushButton_next, SIGNAL(clicked(bool)), this, SLOT(next()));
    connect(ui->pushButton_prev, SIGNAL(clicked(bool)), this, SLOT(prev()));
    connect(ui->toolButton_close, SIGNAL(clicked(bool)), ui->groupBox_operator, SLOT(hide()));
    connect(ui->tableWidget_oper, SIGNAL(clicked(QModelIndex)), ui->groupBox_operator, SLOT(hide()));
    connect(ui->tableWidget_oper, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(edit()));

    connect(ui->pushButton_del, SIGNAL(clicked(bool)), this, SLOT(del()));
    connect(ui->pushButton_save, SIGNAL(clicked(bool)), this, SLOT(save()));
    connect(ui->toolButton_add, SIGNAL(clicked(bool)), this, SLOT(add()));
    connect(ui->toolButton_delN, SIGNAL(clicked(bool)), this, SLOT(delN()));



}

operatorsM::~operatorsM()
{
    delete ui;
}

void operatorsM::load()
{
    for (int r = ui->tableWidget_oper->rowCount() - 1; r >= 0; r--){
        ui->tableWidget_oper->removeRow(r);
    }
    QSqlQuery query("SELECT oper.id, oper.name, "
                    "(SELECT Count(phone.id) FROM phone WHERE phone.oper = oper.id) "
                    "FROM oper "
                    "ORDER BY oper.name ");
    int row = 0;
    while (query.next()){
        ui->tableWidget_oper->insertRow(row);
        for (int col = 0; col < 3; col++){
            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());
            ui->tableWidget_oper->setItem(row, col, item);
        }
        row++;
    }
    ui->tableWidget_oper->resizeColumnsToContents();
    ui->tableWidget_oper->horizontalHeader()->setStretchLastSection(true);
}

void operatorsM::add()
{
    ID = 0;
    ui->groupBox_operator->setVisible(true);
    ui->lineEdit_name->clear();
    ui->lineEdit_name->setFocus();
    ui->pushButton_del->setEnabled(false);
    ui->pushButton_prev->setEnabled(false);
    ui->pushButton_next->setEnabled(false);
}

void operatorsM::edit()
{
    ui->groupBox_operator->setVisible(true);
    POS = ui->tableWidget_oper->currentRow();
    ID = ui->tableWidget_oper->item(POS, 0)->text().toInt();
    ui->lineEdit_name->setText(ui->tableWidget_oper->item(POS, 1)->text());
    if (ui->tableWidget_oper->item(POS, 2)->text().toInt() == 0){
        ui->pushButton_del->setEnabled(true);
    } else {
        ui->pushButton_del->setEnabled(false);
    }

    if (POS == 0){
        ui->pushButton_prev->setEnabled(false);
    } else {
        ui->pushButton_prev->setEnabled(true);
    }
    if (POS == ui->tableWidget_oper->rowCount() - 1){
        ui->pushButton_next->setEnabled(false);
    } else {
        ui->pushButton_next->setEnabled(true);
    }
}

void operatorsM::save()
{
    QString error;
    if (ui->lineEdit_name->text().isEmpty()){
        error.append("Введите название оператора");
    } else {
        if (ID == 0){
            QSqlQuery query("INSERT INTO oper (name) VALUES (?)");
            query.bindValue(0, ui->lineEdit_name->text());
            query.exec();
            if (query.lastError().isValid()){
                error.append(query.lastError().text());
            }
        } else if (ID > 0){
            QSqlQuery query(QString("UPDATE oper SET name = \'%1\'WHERE oper.id = \'%2\' ")
                            .arg(ui->lineEdit_name->text())
                            .arg(ID));
            query.exec();
            if (query.lastError().isValid()){
                error.append(query.lastError().text());
            }
        }
    }
    if (error.size() > 0){
        make_report(error, false);
    } else {
        make_report("Сохранено", true);
        load();
        if (ID == 0){
            add();
        }
    }

}

void operatorsM::del()
{
    QSqlQuery query(QString("DELETE FROM oper WHERE oper.id = \'%1\' ").arg(ID));
    query.exec();
    if (query.lastError().isValid()){
        make_report(query.lastError().text(), false);
    } else {
        make_report("Удалено", false);
        ui->groupBox_operator->hide();
        load();
    }
}

void operatorsM::delN()
{
    ui->groupBox_operator->hide();
    if (ui->tableWidget_oper->rowCount() > 0){
        QString error;
        for (int row = 0; row < ui->tableWidget_oper->rowCount(); row++){
            if (ui->tableWidget_oper->item(row, 0)->isSelected()){
                int quan = ui->tableWidget_oper->item(row, 2)->text().toInt();
                if (quan == 0){
                    QSqlQuery query(QString("DELETE FROM oper WHERE oper.id = \'%1\' ")
                                    .arg(ui->tableWidget_oper->item(row, 0)->text().toInt()));
                    query.exec();
                    if (query.lastError().isValid()){
                        error.append(query.lastError().text());
                        break;
                    }
                }
            }
        }
        if (error.size() > 0){
            make_report(error, false);
        } else {
            make_report("Удалено", true);
            load();
        }
    }
}

void operatorsM::next()
{
    POS++;
    ui->tableWidget_oper->selectRow(POS);
    edit();

}

void operatorsM::prev()
{
    POS--;
    ui->tableWidget_oper->selectRow(POS);
    edit();
}

void operatorsM::make_report(QString str, bool v)
{
    ui->groupBox_messa->setVisible(true);
    int delay = 0;
    if (v){
        ui->groupBox_messa->setStyleSheet("background-color: #228B22; border-radius: 9px;");
        delay = 5000;
    } else {
        ui->groupBox_messa->setStyleSheet("background-color: #8B0000; border-radius: 9px;");
        delay = 15000;
    }
    ui->label_messa->setText(str);
    ui->label_messa->setStyleSheet("color: #FFF5EE; font-weight: bold; ");

    timer->start(delay);

}
