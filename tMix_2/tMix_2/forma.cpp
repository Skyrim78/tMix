#include "forma.h"
#include "ui_forma.h"

FormA::FormA(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormA)
{
    ui->setupUi(this);
    connect(ui->pushButton_exit, SIGNAL(clicked(bool)), this, SLOT(closeProgramm()));
}

FormA::~FormA()
{
    delete ui;
}

void FormA::closeProgramm()
{
    QApplication::quit();
}
