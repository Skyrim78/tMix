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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tMix
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_oper;
    QPushButton *pushButton_load;
    QPushButton *pushButton_B_2;
    QPushButton *pushButton_B_3;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_main;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *tMix)
    {
        if (tMix->objectName().isEmpty())
            tMix->setObjectName(QStringLiteral("tMix"));
        tMix->resize(834, 631);
        centralWidget = new QWidget(tMix);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_oper = new QPushButton(centralWidget);
        pushButton_oper->setObjectName(QStringLiteral("pushButton_oper"));
        pushButton_oper->setMinimumSize(QSize(150, 40));
        pushButton_oper->setMaximumSize(QSize(150, 40));

        verticalLayout->addWidget(pushButton_oper);

        pushButton_load = new QPushButton(centralWidget);
        pushButton_load->setObjectName(QStringLiteral("pushButton_load"));
        pushButton_load->setMinimumSize(QSize(150, 40));
        pushButton_load->setMaximumSize(QSize(150, 40));

        verticalLayout->addWidget(pushButton_load);

        pushButton_B_2 = new QPushButton(centralWidget);
        pushButton_B_2->setObjectName(QStringLiteral("pushButton_B_2"));
        pushButton_B_2->setMinimumSize(QSize(150, 40));
        pushButton_B_2->setMaximumSize(QSize(150, 40));

        verticalLayout->addWidget(pushButton_B_2);

        pushButton_B_3 = new QPushButton(centralWidget);
        pushButton_B_3->setObjectName(QStringLiteral("pushButton_B_3"));
        pushButton_B_3->setMinimumSize(QSize(150, 40));
        pushButton_B_3->setMaximumSize(QSize(150, 40));

        verticalLayout->addWidget(pushButton_B_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_main = new QPushButton(centralWidget);
        pushButton_main->setObjectName(QStringLiteral("pushButton_main"));
        pushButton_main->setMinimumSize(QSize(150, 40));
        pushButton_main->setMaximumSize(QSize(150, 40));

        verticalLayout->addWidget(pushButton_main);


        horizontalLayout->addLayout(verticalLayout);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 654, 551));
        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        tMix->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(tMix);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 834, 19));
        tMix->setMenuBar(menuBar);
        mainToolBar = new QToolBar(tMix);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        tMix->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(tMix);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        tMix->setStatusBar(statusBar);

        retranslateUi(tMix);

        QMetaObject::connectSlotsByName(tMix);
    } // setupUi

    void retranslateUi(QMainWindow *tMix)
    {
        tMix->setWindowTitle(QApplication::translate("tMix", "tMix", 0));
        pushButton_oper->setText(QApplication::translate("tMix", "\320\236\320\277\320\265\321\200\320\260\321\202\320\276\321\200\321\213", 0));
        pushButton_load->setText(QApplication::translate("tMix", "\320\227\320\260\320\263\321\200\321\203\320\267\320\272\320\260 \320\264\320\260\320\275\320\275\321\213\321\205", 0));
        pushButton_B_2->setText(QApplication::translate("tMix", "\320\237\320\276\320\270\321\201\320\272 \320\275\320\276\320\274\320\265\321\200\320\276\320\262", 0));
        pushButton_B_3->setText(QApplication::translate("tMix", "\320\236\320\261\321\200\320\260\320\261\320\276\321\202\320\272\320\260 \320\275\320\260\320\272\320\273\320\260\320\264\320\275\321\213\321\205", 0));
        pushButton_main->setText(QApplication::translate("tMix", "Main", 0));
    } // retranslateUi

};

namespace Ui {
    class tMix: public Ui_tMix {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TMIX_H
