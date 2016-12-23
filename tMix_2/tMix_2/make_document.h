#ifndef MAKE_DOCUMENT_H
#define MAKE_DOCUMENT_H

#include <QWidget>
#include <QtSql/QtSql>

#include <QFileDialog>
#include <ActiveQt/QAxBase>
#include <ActiveQt/QAxObject>
#include <QMessageBox>

namespace Ui {
class make_document;
}

class make_document : public QWidget
{
    Q_OBJECT

public:
    explicit make_document(QWidget *parent = 0);
    ~make_document();

    QMap<int, int> map_oper;
    QMap<int, int> map_nakl;
    QMap<int, int> map_firm;
    QMap<int, int> map_org;

    QAxObject *excel;
    QAxObject *wbook;
    QAxObject *book;
    QAxObject *sheets;
    QAxObject *currSheet;

private:
    Ui::make_document *ui;

public slots:
    void load_operators();
    void load_nakl();
    void load_firm();
    void load_org();

    void load();
    void filter();

    void save();
};

#endif // MAKE_DOCUMENT_H
