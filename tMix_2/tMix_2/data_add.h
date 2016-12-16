#ifndef DATA_ADD_H
#define DATA_ADD_H

#include <QWidget>
#include <QtSql/QtSql>
#include <QTimer>
#include <QSettings>
#include <QCloseEvent>
#include <QFileDialog>

namespace Ui {
class data_add;
}

class data_add : public QWidget
{
    Q_OBJECT

public:
    explicit data_add(QWidget *parent = 0);
    ~data_add();

    QTimer *timer;

    QString report;

    QMap<int, int> map_operator;

private:
    Ui::data_add *ui;

    virtual void closeEvent(QCloseEvent *event);

public slots:
    void setting_read();
    void setting_write();

    void load_operator();

    void select_file();
    void read_file();

    void load_data();

    void make_report();
};

#endif // DATA_ADD_H
