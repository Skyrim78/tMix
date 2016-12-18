/********************************************************************************
** Form generated from reading UI file 'operators.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERATORS_H
#define UI_OPERATORS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_operatorsM
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QToolButton *toolButton_add;
    QToolButton *toolButton_delN;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_operator;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_del;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_prev;
    QPushButton *pushButton_next;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_save;
    QToolButton *toolButton_close;
    QTableWidget *tableWidget_oper;
    QGroupBox *groupBox_messa;
    QGridLayout *gridLayout_3;
    QLabel *label_messa;

    void setupUi(QWidget *operatorsM)
    {
        if (operatorsM->objectName().isEmpty())
            operatorsM->setObjectName(QStringLiteral("operatorsM"));
        operatorsM->resize(687, 522);
        QFont font;
        font.setPointSize(10);
        operatorsM->setFont(font);
        gridLayout_2 = new QGridLayout(operatorsM);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        toolButton_add = new QToolButton(operatorsM);
        toolButton_add->setObjectName(QStringLiteral("toolButton_add"));
        toolButton_add->setMinimumSize(QSize(35, 35));
        toolButton_add->setMaximumSize(QSize(35, 35));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        toolButton_add->setFont(font1);
        toolButton_add->setAutoRaise(true);

        verticalLayout->addWidget(toolButton_add);

        toolButton_delN = new QToolButton(operatorsM);
        toolButton_delN->setObjectName(QStringLiteral("toolButton_delN"));
        toolButton_delN->setMinimumSize(QSize(35, 35));
        toolButton_delN->setMaximumSize(QSize(35, 35));
        toolButton_delN->setFont(font1);
        toolButton_delN->setAutoRaise(true);

        verticalLayout->addWidget(toolButton_delN);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_operator = new QGroupBox(operatorsM);
        groupBox_operator->setObjectName(QStringLiteral("groupBox_operator"));
        gridLayout = new QGridLayout(groupBox_operator);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit_name = new QLineEdit(groupBox_operator);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        verticalLayout_2->addWidget(lineEdit_name);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_del = new QPushButton(groupBox_operator);
        pushButton_del->setObjectName(QStringLiteral("pushButton_del"));
        pushButton_del->setMinimumSize(QSize(130, 35));
        pushButton_del->setMaximumSize(QSize(130, 35));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_del->setFont(font2);

        horizontalLayout->addWidget(pushButton_del);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_prev = new QPushButton(groupBox_operator);
        pushButton_prev->setObjectName(QStringLiteral("pushButton_prev"));
        pushButton_prev->setMinimumSize(QSize(75, 35));
        pushButton_prev->setMaximumSize(QSize(75, 35));
        pushButton_prev->setFont(font2);

        horizontalLayout->addWidget(pushButton_prev);

        pushButton_next = new QPushButton(groupBox_operator);
        pushButton_next->setObjectName(QStringLiteral("pushButton_next"));
        pushButton_next->setMinimumSize(QSize(75, 35));
        pushButton_next->setMaximumSize(QSize(75, 35));
        pushButton_next->setFont(font2);

        horizontalLayout->addWidget(pushButton_next);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_save = new QPushButton(groupBox_operator);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setMinimumSize(QSize(130, 35));
        pushButton_save->setMaximumSize(QSize(130, 35));
        pushButton_save->setFont(font2);

        horizontalLayout->addWidget(pushButton_save);

        toolButton_close = new QToolButton(groupBox_operator);
        toolButton_close->setObjectName(QStringLiteral("toolButton_close"));
        toolButton_close->setMinimumSize(QSize(35, 35));
        toolButton_close->setMaximumSize(QSize(35, 35));
        toolButton_close->setFont(font1);
        toolButton_close->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_close);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_operator);

        tableWidget_oper = new QTableWidget(operatorsM);
        if (tableWidget_oper->columnCount() < 3)
            tableWidget_oper->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_oper->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_oper->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_oper->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_oper->setObjectName(QStringLiteral("tableWidget_oper"));
        tableWidget_oper->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_oper->setAlternatingRowColors(true);
        tableWidget_oper->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_oper->setShowGrid(false);
        tableWidget_oper->horizontalHeader()->setStretchLastSection(true);
        tableWidget_oper->verticalHeader()->setMinimumSectionSize(25);

        verticalLayout_3->addWidget(tableWidget_oper);

        groupBox_messa = new QGroupBox(operatorsM);
        groupBox_messa->setObjectName(QStringLiteral("groupBox_messa"));
        gridLayout_3 = new QGridLayout(groupBox_messa);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_messa = new QLabel(groupBox_messa);
        label_messa->setObjectName(QStringLiteral("label_messa"));
        label_messa->setScaledContents(true);
        label_messa->setAlignment(Qt::AlignCenter);
        label_messa->setWordWrap(true);

        gridLayout_3->addWidget(label_messa, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_messa);


        horizontalLayout_2->addLayout(verticalLayout_3);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        retranslateUi(operatorsM);

        QMetaObject::connectSlotsByName(operatorsM);
    } // setupUi

    void retranslateUi(QWidget *operatorsM)
    {
        operatorsM->setWindowTitle(QApplication::translate("operatorsM", "Form", 0));
        toolButton_add->setText(QApplication::translate("operatorsM", "+", 0));
        toolButton_delN->setText(QApplication::translate("operatorsM", "-", 0));
        groupBox_operator->setTitle(QApplication::translate("operatorsM", "\320\236\320\277\320\265\321\200\320\260\321\202\320\276\321\200", 0));
        lineEdit_name->setPlaceholderText(QApplication::translate("operatorsM", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", 0));
        pushButton_del->setText(QApplication::translate("operatorsM", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        pushButton_prev->setText(QApplication::translate("operatorsM", "<", 0));
        pushButton_next->setText(QApplication::translate("operatorsM", ">", 0));
        pushButton_save->setText(QApplication::translate("operatorsM", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        toolButton_close->setText(QApplication::translate("operatorsM", "x", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_oper->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("operatorsM", "id", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_oper->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("operatorsM", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_oper->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("operatorsM", "\320\232\320\276\320\273-\320\262\320\276 \320\275\320\276\320\274\320\265\321\200\320\276\320\262", 0));
        groupBox_messa->setTitle(QString());
        label_messa->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class operatorsM: public Ui_operatorsM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERATORS_H
