/********************************************************************************
** Form generated from reading UI file 'stat.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAT_H
#define UI_STAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statA
{
public:
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_firm;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget_firm;
    QGroupBox *groupBox_org;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget_org;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_nakl;
    QGridLayout *gridLayout_3;
    QTableWidget *tableWidget_nakl;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_del_nakl;
    QGroupBox *groupBox_active;
    QGridLayout *gridLayout_4;
    QTableWidget *tableWidget_active;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_make_file;

    void setupUi(QWidget *statA)
    {
        if (statA->objectName().isEmpty())
            statA->setObjectName(QStringLiteral("statA"));
        statA->resize(1218, 773);
        gridLayout_5 = new QGridLayout(statA);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        groupBox_firm = new QGroupBox(statA);
        groupBox_firm->setObjectName(QStringLiteral("groupBox_firm"));
        gridLayout = new QGridLayout(groupBox_firm);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget_firm = new QTableWidget(groupBox_firm);
        if (tableWidget_firm->columnCount() < 3)
            tableWidget_firm->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_firm->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_firm->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_firm->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_firm->setObjectName(QStringLiteral("tableWidget_firm"));
        QFont font;
        font.setPointSize(8);
        tableWidget_firm->setFont(font);
        tableWidget_firm->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_firm->setAlternatingRowColors(true);
        tableWidget_firm->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableWidget_firm->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_firm->setShowGrid(false);
        tableWidget_firm->setSortingEnabled(true);
        tableWidget_firm->setWordWrap(false);
        tableWidget_firm->horizontalHeader()->setStretchLastSection(true);
        tableWidget_firm->verticalHeader()->setDefaultSectionSize(25);
        tableWidget_firm->verticalHeader()->setMinimumSectionSize(20);

        gridLayout->addWidget(tableWidget_firm, 0, 0, 1, 1);


        horizontalLayout_4->addWidget(groupBox_firm);

        groupBox_org = new QGroupBox(statA);
        groupBox_org->setObjectName(QStringLiteral("groupBox_org"));
        gridLayout_2 = new QGridLayout(groupBox_org);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableWidget_org = new QTableWidget(groupBox_org);
        if (tableWidget_org->columnCount() < 3)
            tableWidget_org->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_org->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_org->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_org->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tableWidget_org->setObjectName(QStringLiteral("tableWidget_org"));
        tableWidget_org->setFont(font);
        tableWidget_org->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_org->setAlternatingRowColors(true);
        tableWidget_org->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_org->setShowGrid(false);
        tableWidget_org->setSortingEnabled(true);
        tableWidget_org->horizontalHeader()->setStretchLastSection(true);
        tableWidget_org->verticalHeader()->setDefaultSectionSize(25);
        tableWidget_org->verticalHeader()->setMinimumSectionSize(20);

        gridLayout_2->addWidget(tableWidget_org, 0, 1, 1, 1);


        horizontalLayout_4->addWidget(groupBox_org);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupBox_nakl = new QGroupBox(statA);
        groupBox_nakl->setObjectName(QStringLiteral("groupBox_nakl"));
        gridLayout_3 = new QGridLayout(groupBox_nakl);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableWidget_nakl = new QTableWidget(groupBox_nakl);
        if (tableWidget_nakl->columnCount() < 5)
            tableWidget_nakl->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_nakl->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_nakl->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_nakl->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_nakl->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_nakl->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        tableWidget_nakl->setObjectName(QStringLiteral("tableWidget_nakl"));
        tableWidget_nakl->setFont(font);
        tableWidget_nakl->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_nakl->setAlternatingRowColors(true);
        tableWidget_nakl->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_nakl->setShowGrid(false);
        tableWidget_nakl->horizontalHeader()->setStretchLastSection(true);
        tableWidget_nakl->verticalHeader()->setDefaultSectionSize(25);
        tableWidget_nakl->verticalHeader()->setMinimumSectionSize(20);

        gridLayout_3->addWidget(tableWidget_nakl, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_del_nakl = new QPushButton(groupBox_nakl);
        pushButton_del_nakl->setObjectName(QStringLiteral("pushButton_del_nakl"));

        horizontalLayout->addWidget(pushButton_del_nakl);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox_nakl);

        groupBox_active = new QGroupBox(statA);
        groupBox_active->setObjectName(QStringLiteral("groupBox_active"));
        groupBox_active->setMaximumSize(QSize(300, 16777215));
        gridLayout_4 = new QGridLayout(groupBox_active);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tableWidget_active = new QTableWidget(groupBox_active);
        if (tableWidget_active->columnCount() < 3)
            tableWidget_active->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_active->setHorizontalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_active->setHorizontalHeaderItem(1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_active->setHorizontalHeaderItem(2, __qtablewidgetitem13);
        tableWidget_active->setObjectName(QStringLiteral("tableWidget_active"));
        tableWidget_active->setFont(font);
        tableWidget_active->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_active->setAlternatingRowColors(true);
        tableWidget_active->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_active->setShowGrid(false);
        tableWidget_active->setSortingEnabled(true);
        tableWidget_active->horizontalHeader()->setStretchLastSection(true);
        tableWidget_active->verticalHeader()->setDefaultSectionSize(25);
        tableWidget_active->verticalHeader()->setMinimumSectionSize(20);

        gridLayout_4->addWidget(tableWidget_active, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_make_file = new QPushButton(groupBox_active);
        pushButton_make_file->setObjectName(QStringLiteral("pushButton_make_file"));

        horizontalLayout_2->addWidget(pushButton_make_file);


        gridLayout_4->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox_active);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout_5->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(statA);

        QMetaObject::connectSlotsByName(statA);
    } // setupUi

    void retranslateUi(QWidget *statA)
    {
        statA->setWindowTitle(QApplication::translate("statA", "Form", 0));
        groupBox_firm->setTitle(QApplication::translate("statA", "\320\232\320\276\320\275\321\202\321\200\320\260\320\263\320\265\320\275\321\202\321\213", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_firm->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("statA", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_firm->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("statA", "\320\232\320\276\320\273-\320\262\320\276 \320\275\320\276\320\274\320\265\321\200\320\276\320\262", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_firm->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("statA", "\320\220\320\272\321\202\320\270\320\262\320\270\321\200\320\276\320\262\320\260\320\275\321\213", 0));
        groupBox_org->setTitle(QApplication::translate("statA", "\320\236\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\320\270", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_org->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("statA", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_org->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("statA", "\320\232\320\276\320\273-\320\262\320\276 \320\275\320\276\320\274\320\265\321\200\320\276\320\262", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_org->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("statA", "\320\220\320\272\321\202\320\270\320\262\320\270\321\200\320\276\320\262\320\260\320\275\321\213", 0));
        groupBox_nakl->setTitle(QApplication::translate("statA", "\320\235\320\260\320\272\320\273\320\260\320\264\320\275\321\213\320\265", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_nakl->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("statA", "id", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_nakl->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("statA", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_nakl->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("statA", "\320\222\321\201\320\265\320\263\320\276 \320\275\320\276\320\274\320\265\321\200\320\276\320\262", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_nakl->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("statA", "\320\241\320\276\320\262\320\277\320\260\320\264\320\265\320\275\320\270\320\271", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_nakl->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("statA", "\320\220\320\272\321\202\320\270\320\262\320\270\321\200\320\276\320\262\320\260\320\275\321\213", 0));
        pushButton_del_nakl->setText(QApplication::translate("statA", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        groupBox_active->setTitle(QApplication::translate("statA", "\320\235\320\265 \320\260\320\272\321\202\320\270\320\262\320\270\321\200\320\276\320\262\320\260\320\275\321\213", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_active->horizontalHeaderItem(0);
        ___qtablewidgetitem11->setText(QApplication::translate("statA", "id", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_active->horizontalHeaderItem(1);
        ___qtablewidgetitem12->setText(QApplication::translate("statA", "\320\236\320\277\320\265\321\200\320\260\321\202\320\276\321\200", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_active->horizontalHeaderItem(2);
        ___qtablewidgetitem13->setText(QApplication::translate("statA", "\320\232\320\276\320\273-\320\262\320\276 \320\275\320\276\320\274\320\265\321\200\320\276\320\262", 0));
        pushButton_make_file->setText(QApplication::translate("statA", "\320\237\320\276\320\264\320\263\320\276\321\202\320\276\320\262\320\270\321\202\321\214 \321\204\320\260\320\271\320\273\321\213", 0));
    } // retranslateUi

};

namespace Ui {
    class statA: public Ui_statA {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAT_H
