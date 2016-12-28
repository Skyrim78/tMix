/********************************************************************************
** Form generated from reading UI file 'make_document.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKE_DOCUMENT_H
#define UI_MAKE_DOCUMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_make_document
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_filter;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_f_oper;
    QComboBox *comboBox_f_oper;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_f_firm;
    QComboBox *comboBox_f_firm;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBox_f_org;
    QComboBox *comboBox_f_org;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_f_active;
    QRadioButton *radioButton_fa_yes;
    QSpacerItem *horizontalSpacer_8;
    QRadioButton *radioButton_fa_no;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QDateEdit *dateEdit_from;
    QLabel *label;
    QDateEdit *dateEdit_to;
    QSpacerItem *horizontalSpacer_7;
    QGroupBox *groupBox_nakl;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget_nakl;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_filter;
    QTableWidget *tableWidget_filter;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_save;
    QProgressBar *progressBar;

    void setupUi(QWidget *make_document)
    {
        if (make_document->objectName().isEmpty())
            make_document->setObjectName(QStringLiteral("make_document"));
        make_document->resize(1112, 768);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(make_document->sizePolicy().hasHeightForWidth());
        make_document->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(9);
        make_document->setFont(font);
        gridLayout_3 = new QGridLayout(make_document);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_filter = new QGroupBox(make_document);
        groupBox_filter->setObjectName(QStringLiteral("groupBox_filter"));
        sizePolicy.setHeightForWidth(groupBox_filter->sizePolicy().hasHeightForWidth());
        groupBox_filter->setSizePolicy(sizePolicy);
        groupBox_filter->setMaximumSize(QSize(16777215, 300));
        gridLayout_2 = new QGridLayout(groupBox_filter);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        checkBox_f_oper = new QCheckBox(groupBox_filter);
        checkBox_f_oper->setObjectName(QStringLiteral("checkBox_f_oper"));

        horizontalLayout->addWidget(checkBox_f_oper);

        comboBox_f_oper = new QComboBox(groupBox_filter);
        comboBox_f_oper->setObjectName(QStringLiteral("comboBox_f_oper"));
        comboBox_f_oper->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(comboBox_f_oper);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        checkBox_f_firm = new QCheckBox(groupBox_filter);
        checkBox_f_firm->setObjectName(QStringLiteral("checkBox_f_firm"));

        horizontalLayout_3->addWidget(checkBox_f_firm);

        comboBox_f_firm = new QComboBox(groupBox_filter);
        comboBox_f_firm->setObjectName(QStringLiteral("comboBox_f_firm"));
        comboBox_f_firm->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_3->addWidget(comboBox_f_firm);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        checkBox_f_org = new QCheckBox(groupBox_filter);
        checkBox_f_org->setObjectName(QStringLiteral("checkBox_f_org"));

        horizontalLayout_5->addWidget(checkBox_f_org);

        comboBox_f_org = new QComboBox(groupBox_filter);
        comboBox_f_org->setObjectName(QStringLiteral("comboBox_f_org"));
        comboBox_f_org->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_5->addWidget(comboBox_f_org);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        checkBox_f_active = new QCheckBox(groupBox_filter);
        checkBox_f_active->setObjectName(QStringLiteral("checkBox_f_active"));

        horizontalLayout_4->addWidget(checkBox_f_active);

        radioButton_fa_yes = new QRadioButton(groupBox_filter);
        radioButton_fa_yes->setObjectName(QStringLiteral("radioButton_fa_yes"));
        radioButton_fa_yes->setChecked(true);

        horizontalLayout_4->addWidget(radioButton_fa_yes);

        horizontalSpacer_8 = new QSpacerItem(50, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        radioButton_fa_no = new QRadioButton(groupBox_filter);
        radioButton_fa_no->setObjectName(QStringLiteral("radioButton_fa_no"));

        horizontalLayout_4->addWidget(radioButton_fa_no);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(140, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        dateEdit_from = new QDateEdit(groupBox_filter);
        dateEdit_from->setObjectName(QStringLiteral("dateEdit_from"));
        dateEdit_from->setMinimumSize(QSize(120, 0));
        dateEdit_from->setAlignment(Qt::AlignCenter);
        dateEdit_from->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateEdit_from->setCalendarPopup(true);

        horizontalLayout_2->addWidget(dateEdit_from);

        label = new QLabel(groupBox_filter);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        dateEdit_to = new QDateEdit(groupBox_filter);
        dateEdit_to->setObjectName(QStringLiteral("dateEdit_to"));
        dateEdit_to->setMinimumSize(QSize(120, 0));
        dateEdit_to->setAlignment(Qt::AlignCenter);
        dateEdit_to->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateEdit_to->setCalendarPopup(true);

        horizontalLayout_2->addWidget(dateEdit_to);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_7->addLayout(verticalLayout);

        groupBox_nakl = new QGroupBox(groupBox_filter);
        groupBox_nakl->setObjectName(QStringLiteral("groupBox_nakl"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_nakl->sizePolicy().hasHeightForWidth());
        groupBox_nakl->setSizePolicy(sizePolicy1);
        groupBox_nakl->setMinimumSize(QSize(600, 0));
        groupBox_nakl->setCheckable(true);
        groupBox_nakl->setChecked(false);
        gridLayout = new QGridLayout(groupBox_nakl);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget_nakl = new QTableWidget(groupBox_nakl);
        if (tableWidget_nakl->columnCount() < 2)
            tableWidget_nakl->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_nakl->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_nakl->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget_nakl->setObjectName(QStringLiteral("tableWidget_nakl"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableWidget_nakl->sizePolicy().hasHeightForWidth());
        tableWidget_nakl->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setWeight(50);
        tableWidget_nakl->setFont(font1);
        tableWidget_nakl->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_nakl->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_nakl->horizontalHeader()->setStretchLastSection(true);
        tableWidget_nakl->verticalHeader()->setDefaultSectionSize(27);

        gridLayout->addWidget(tableWidget_nakl, 0, 0, 1, 1);


        horizontalLayout_7->addWidget(groupBox_nakl);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        pushButton_filter = new QPushButton(groupBox_filter);
        pushButton_filter->setObjectName(QStringLiteral("pushButton_filter"));

        horizontalLayout_8->addWidget(pushButton_filter);


        verticalLayout_2->addLayout(horizontalLayout_8);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_filter);

        tableWidget_filter = new QTableWidget(make_document);
        if (tableWidget_filter->columnCount() < 9)
            tableWidget_filter->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_filter->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_filter->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_filter->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_filter->setHorizontalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_filter->setHorizontalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_filter->setHorizontalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_filter->setHorizontalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_filter->setHorizontalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_filter->setHorizontalHeaderItem(8, __qtablewidgetitem10);
        tableWidget_filter->setObjectName(QStringLiteral("tableWidget_filter"));
        QFont font2;
        font2.setPointSize(8);
        tableWidget_filter->setFont(font2);
        tableWidget_filter->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_filter->setSelectionMode(QAbstractItemView::MultiSelection);
        tableWidget_filter->horizontalHeader()->setStretchLastSection(true);
        tableWidget_filter->verticalHeader()->setDefaultSectionSize(27);

        verticalLayout_3->addWidget(tableWidget_filter);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        pushButton_save = new QPushButton(make_document);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));

        horizontalLayout_6->addWidget(pushButton_save);


        verticalLayout_3->addLayout(horizontalLayout_6);

        progressBar = new QProgressBar(make_document);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(progressBar);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(make_document);

        QMetaObject::connectSlotsByName(make_document);
    } // setupUi

    void retranslateUi(QWidget *make_document)
    {
        make_document->setWindowTitle(QApplication::translate("make_document", "Form", 0));
        groupBox_filter->setTitle(QApplication::translate("make_document", "\320\244\320\270\320\273\321\214\321\202\321\200", 0));
        checkBox_f_oper->setText(QApplication::translate("make_document", "\320\236\320\277\320\265\321\200\320\260\321\202\320\276\321\200", 0));
        checkBox_f_firm->setText(QApplication::translate("make_document", "\320\232\320\276\320\275\321\202\321\200\320\260\320\263\320\265\320\275\321\202", 0));
        checkBox_f_org->setText(QApplication::translate("make_document", "\320\236\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\321\217", 0));
        checkBox_f_active->setText(QApplication::translate("make_document", "\320\220\320\272\321\202\320\270\320\262\320\275\320\276\321\201\321\202\321\214", 0));
        radioButton_fa_yes->setText(QApplication::translate("make_document", "\320\220\320\272\321\202\320\270\320\262\320\270\321\200\320\276\320\262\320\260\320\275\321\213", 0));
        radioButton_fa_no->setText(QApplication::translate("make_document", "\320\235\320\265 \320\260\320\272\321\202\320\270\320\262\320\270\321\200\320\276\320\262\320\260\320\275\321\213", 0));
        label->setText(QApplication::translate("make_document", "-", 0));
        groupBox_nakl->setTitle(QApplication::translate("make_document", "\320\235\320\260\320\272\320\273\320\260\320\264\320\275\321\213\320\265", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_nakl->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("make_document", "id", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_nakl->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("make_document", "\320\235\320\260\320\272\320\273\320\260\320\264\320\275\320\260\321\217", 0));
        pushButton_filter->setText(QApplication::translate("make_document", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_filter->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("make_document", "\320\232\320\276\320\275\321\202\321\200\320\260\320\263\320\265\320\275\321\202", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_filter->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("make_document", "\320\235\320\276\320\274\320\265\320\275\320\272\320\273\320\260\321\202\321\203\321\200\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_filter->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("make_document", "\320\241\320\265\321\200\320\270\321\217", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_filter->horizontalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("make_document", "\320\224\320\260\321\202\320\260 \320\276\321\202\320\263\321\200\321\203\320\267\320\272\320\270", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_filter->horizontalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("make_document", "\320\235\320\276\320\274\320\265\321\200 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_filter->horizontalHeaderItem(5);
        ___qtablewidgetitem7->setText(QApplication::translate("make_document", "\320\236\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\321\217", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_filter->horizontalHeaderItem(6);
        ___qtablewidgetitem8->setText(QApplication::translate("make_document", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_filter->horizontalHeaderItem(7);
        ___qtablewidgetitem9->setText(QApplication::translate("make_document", "\320\235\320\276\320\274\320\265\321\200", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_filter->horizontalHeaderItem(8);
        ___qtablewidgetitem10->setText(QApplication::translate("make_document", "\320\224\320\260\321\202\320\260 \320\260\320\272\321\202\320\270\320\262\320\260\321\206\320\270\320\270", 0));
        pushButton_save->setText(QApplication::translate("make_document", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class make_document: public Ui_make_document {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKE_DOCUMENT_H
