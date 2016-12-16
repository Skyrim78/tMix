#ifndef TMIX_H
#define TMIX_H

#include <QMainWindow>
#include "forma.h"
#include "data_add.h"
#include "operators.h"

namespace Ui {
class tMix;
}

class tMix : public QMainWindow
{
    Q_OBJECT

public:
    explicit tMix(QWidget *parent = 0);
    ~tMix();

    data_add *da;
    FormA *fa;
    operatorsM *om;

private:
    Ui::tMix *ui;

public slots:
    void widgetA();
    void widgetMainForm();
    void widgetOperators();
};

#endif // TMIX_H
