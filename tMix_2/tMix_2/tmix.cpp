#include "tmix.h"
#include "ui_tmix.h"

tMix::tMix(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tMix)
{
    ui->setupUi(this);



    connect(ui->pushButton_load, SIGNAL(clicked(bool)), this, SLOT(widgetA()));
    connect(ui->pushButton_main, SIGNAL(clicked(bool)), this, SLOT(widgetMainForm()));
    connect(ui->pushButton_oper, SIGNAL(clicked(bool)), this, SLOT(widgetOperators()));
}

tMix::~tMix()
{
    delete ui;
}

void tMix::widgetA()
{
    da = new data_add(this);
    ui->scrollArea->setWidget(da);
    da->show();
}

void tMix::widgetMainForm()
{
    fa = new FormA(this);
    ui->scrollArea->setWidget(fa);
    fa->show();

}

void tMix::widgetOperators()
{
    om = new operatorsM(this);
    ui->scrollArea->setWidget(om);
    om->show();
}

