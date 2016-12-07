#ifndef TMIX_H
#define TMIX_H

#include <QMainWindow>
#include <QCloseEvent>
#include <QSettings>
#include <QFileDialog>
#include <ActiveQt/QAxBase>
#include <ActiveQt/QAxObject>
#include <qmath.h>
#include <QMessageBox>

namespace Ui {
class tMix;
}

class tMix : public QMainWindow
{
    Q_OBJECT

public:
    explicit tMix(QWidget *parent = 0);
    ~tMix();

    QMap<QString, QString> map_from;

    QAxObject *excel;
    QAxObject *wbook;
    QAxObject *book;
    QAxObject *sheets;
    QAxObject *currSheet;

private:
    Ui::tMix *ui;

    virtual void closeEvent(QCloseEvent *event);

public slots:
    void setting_read();
    void setting_write();

    void select_from();
    void select_to();

    void read_source();

    void make_it();
};

#endif // TMIX_H
