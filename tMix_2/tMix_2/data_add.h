#ifndef DATA_ADD_H
#define DATA_ADD_H

#include <QWidget>
#include <QtSql/QtSql>
#include <QTimer>
#include <QSettings>
#include <QCloseEvent>
#include <QFileDialog>
#include <ActiveQt/QAxBase>
#include <ActiveQt/QAxObject>

namespace Ui {
class data_add;
}

class data_add : public QWidget
{
    Q_OBJECT

public:
    explicit data_add(QWidget *parent = 0);
    ~data_add();

    QAxObject *excel;
    QAxObject *wbook;
    QAxObject *book;
    QAxObject *sheets;
    QAxObject *currSheet;

    QTimer *timer;

    QString report;

    QMap<int, int> map_operator;

private:
    Ui::data_add *ui;

public slots:
    void load();

    void setting_read();
    void setting_write();

    void load_operator();

    void select_file();
    void read_file();

    void load_data();

    void make_report();
    // file active
    void act_select_file();
    void act_update();

    //накладные
    void n_select_file();
    void n_read_file();
    void n_load_data();

    int get_id_nakl(const QString _nakl);
    int get_id_firm(const QString _firm);
    int get_id_org(const QString _org);



};

#endif // DATA_ADD_H
