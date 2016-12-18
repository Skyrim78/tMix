/********************************************************************************
** Form generated from reading UI file 'tmix.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TMIX_H
#define UI_TMIX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tMix
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;

    void setupUi(QMainWindow *tMix)
    {
        if (tMix->objectName().isEmpty())
            tMix->setObjectName(QStringLiteral("tMix"));
        tMix->resize(834, 631);
        QFont font;
        font.setPointSize(10);
        tMix->setFont(font);
        centralWidget = new QWidget(tMix);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tMix->setCentralWidget(centralWidget);

        retranslateUi(tMix);

        QMetaObject::connectSlotsByName(tMix);
    } // setupUi

    void retranslateUi(QMainWindow *tMix)
    {
        tMix->setWindowTitle(QApplication::translate("tMix", "tMix", 0));
    } // retranslateUi

};

namespace Ui {
    class tMix: public Ui_tMix {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TMIX_H
