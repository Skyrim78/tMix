#ifndef STAT_H
#define STAT_H

#include <QWidget>
#include <QtSql/QtSql>
#include <QFileDialog>
#include <QMessageBox>

namespace Ui {
class statA;
}

class statA : public QWidget
{
    Q_OBJECT

public:
    explicit statA(QWidget *parent = 0);
    ~statA();

private:
    Ui::statA *ui;
public slots:
    void load();

    void load_firm();
    void load_org();
    void load_nakl();
    void load_active();

    void del_nakl();
    void make_files();
};

#endif // STAT_H
