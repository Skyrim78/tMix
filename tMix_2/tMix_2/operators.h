#ifndef OPERATORS_H
#define OPERATORS_H

#include <QWidget>
#include <QtSql/QtSql>
#include <QTimer>

namespace Ui {
class operatorsM;
}

class operatorsM : public QWidget
{
    Q_OBJECT

public:
    explicit operatorsM(QWidget *parent = 0);
    ~operatorsM();

    QTimer *timer;

    int ID;
    int POS;

private:
    Ui::operatorsM *ui;

public slots:
    void load();
    void add();
    void edit();
    void save();
    void del();
    void delN();

    void next();
    void prev();

    void make_report(QString str, bool v);
};

#endif // OPERATORS_H
