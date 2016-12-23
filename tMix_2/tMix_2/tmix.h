#ifndef TMIX_H
#define TMIX_H

#include <QMainWindow>
#include <QSettings>
#include <QtSql/QtSql>
#include "forma.h"
#include "data_add.h"
#include "operators.h"
#include "make_document.h"
#include "stat.h"

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
    make_document *md;
    statA *st;

    QSqlDatabase db;

private:
    Ui::tMix *ui;

public slots:
    void change_tab(int x);


};

#endif // TMIX_H

#ifndef TABBAR_H
#define TABBAR_H
#include <QTabBar>
#include <QStylePainter>
#include <QStyleOptionTabV3>
#include <QPainter>
#include <QIcon>
#include <QString>

class TabBar : public QTabBar
{
public:

    explicit TabBar(QWidget* parent=0) : QTabBar(parent)
    {
        setIconSize(QSize(24, 24));
    }

protected:
    QSize tabSizeHint(int) const
    {
        return QSize(200, 60);
    }
    void paintEvent(QPaintEvent *)
    {
        QStylePainter p(this);
        for (int index = 0; index < count(); index++)
        {
            QStyleOptionTabV3 tab;
            initStyleOption(&tab, index);
            QIcon tempIcon = tab.icon;
            QString tempText = tab.text;
            tab.icon = QIcon();
            tab.text = QString();
            p.drawControl(QStyle::CE_TabBarTab, tab);
            QPainter painter;
            painter.begin(this);
            QRect tabrect = tabRect(index);
            tabrect.adjust(0, 8, 0, -8);
            painter.drawText(tabrect, Qt::AlignVCenter | Qt::AlignHCenter, tempText);
            tempIcon.paint(&painter, 0, tabrect.top(), tab.iconSize.width(), tab.iconSize.height(), Qt::AlignTop | Qt::AlignHCenter);
            painter.end();
        }
    }
};

class TabWidget : public QTabWidget
{
public:
    explicit TabWidget(QWidget *parent = 0) : QTabWidget(parent)
    {
        setTabBar(new TabBar());
    }
};

#endif //TABBAR_H
