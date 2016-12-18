#ifndef MAKE_DOCUMENT_H
#define MAKE_DOCUMENT_H

#include <QWidget>
#include <QtSql/QtSql>
#include <QFileDialog>
#include <ActiveQt/QAxBase>
#include <ActiveQt/QAxObject>

namespace Ui {
class make_document;
}

class make_document : public QWidget
{
    Q_OBJECT

public:
    explicit make_document(QWidget *parent = 0);
    ~make_document();

    QAxObject *excel;
    QAxObject *wbook;
    QAxObject *book;
    QAxObject *sheets;
    QAxObject *currSheet;

    QTimer *timer;

    QString report;
    QStringList numActiveList;
    QStringList operActiveList;


private:
    Ui::make_document *ui;

public slots:
    void load();

    void setting_read();
    void setting_write();

    void select_file();
    void make_file();
    void make_file_activation();

    void make_report();
};

#endif // MAKE_DOCUMENT_H
