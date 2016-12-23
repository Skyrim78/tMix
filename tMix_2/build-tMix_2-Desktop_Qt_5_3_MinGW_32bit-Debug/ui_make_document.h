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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_filter;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_f_oper;
    QComboBox *comboBox_f_oper;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_f_nakl;
    QComboBox *comboBox_f_nakl;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_f_firm;
    QComboBox *comboBox_f_firm;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_f_org;
    QComboBox *comboBox_f_org;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBox_f_active;
    QRadioButton *radioButton_fa_yes;
    QRadioButton *radioButton_fa_no;
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
        make_document->resize(1224, 768);
        QFont font;
        font.setPointSize(9);
        make_document->setFont(font);
        gridLayout_2 = new QGridLayout(make_document);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_filter = new QGroupBox(make_document);
        groupBox_filter->setObjectName(QStringLiteral("groupBox_filter"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_filter->sizePolicy().hasHeightForWidth());
        groupBox_filter->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBox_filter);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
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


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        checkBox_f_nakl = new QCheckBox(groupBox_filter);
        checkBox_f_nakl->setObjectName(QStringLiteral("checkBox_f_nakl"));

        horizontalLayout_2->addWidget(checkBox_f_nakl);

        comboBox_f_nakl = new QComboBox(groupBox_filter);
        comboBox_f_nakl->setObjectName(QStringLiteral("comboBox_f_nakl"));
        comboBox_f_nakl->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_2->addWidget(comboBox_f_nakl);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

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


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        checkBox_f_org = new QCheckBox(groupBox_filter);
        checkBox_f_org->setObjectName(QStringLiteral("checkBox_f_org"));

        horizontalLayout_4->addWidget(checkBox_f_org);

        comboBox_f_org = new QComboBox(groupBox_filter);
        comboBox_f_org->setObjectName(QStringLiteral("comboBox_f_org"));
        comboBox_f_org->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_4->addWidget(comboBox_f_org);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        checkBox_f_active = new QCheckBox(groupBox_filter);
        checkBox_f_active->setObjectName(QStringLiteral("checkBox_f_active"));

        horizontalLayout_5->addWidget(checkBox_f_active);

        radioButton_fa_yes = new QRadioButton(groupBox_filter);
        radioButton_fa_yes->setObjectName(QStringLiteral("radioButton_fa_yes"));
        radioButton_fa_yes->setChecked(true);

        horizontalLayout_5->addWidget(radioButton_fa_yes);

        radioButton_fa_no = new QRadioButton(groupBox_filter);
        radioButton_fa_no->setObjectName(QStringLiteral("radioButton_fa_no"));

        horizontalLayout_5->addWidget(radioButton_fa_no);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        pushButton_filter = new QPushButton(groupBox_filter);
        pushButton_filter->setObjectName(QStringLiteral("pushButton_filter"));

        horizontalLayout_5->addWidget(pushButton_filter);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);


        verticalLayout->addWidget(groupBox_filter);

        tableWidget_filter = new QTableWidget(make_document);
        if (tableWidget_filter->columnCount() < 9)
            tableWidget_filter->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_filter->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_filter->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_filter->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_filter->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_filter->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_filter->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_filter->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_filter->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_filter->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tableWidget_filter->setObjectName(QStringLiteral("tableWidget_filter"));
        QFont font1;
        font1.setPointSize(8);
        tableWidget_filter->setFont(font1);
        tableWidget_filter->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_filter->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(tableWidget_filter);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        pushButton_save = new QPushButton(make_document);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));

        horizontalLayout_6->addWidget(pushButton_save);


        verticalLayout->addLayout(horizontalLayout_6);

        progressBar = new QProgressBar(make_document);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(progressBar);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(make_document);

        QMetaObject::connectSlotsByName(make_document);
    } // setupUi

    void retranslateUi(QWidget *make_document)
    {
        make_document->setWindowTitle(QApplication::translate("make_document", "Form", 0));
        groupBox_filter->setTitle(QApplication::translate("make_document", "\320\244\320\270\320\273\321\214\321\202\321\200", 0));
        checkBox_f_oper->setText(QApplication::translate("make_document", "\320\236\320\277\320\265\321\200\320\260\321\202\320\276\321\200", 0));
        checkBox_f_nakl->setText(QApplication::translate("make_document", "\320\235\320\260\320\272\320\273\320\260\320\264\320\275\320\260\321\217", 0));
        checkBox_f_firm->setText(QApplication::translate("make_document", "\320\232\320\276\320\275\321\202\321\200\320\260\320\263\320\265\320\275\321\202", 0));
        checkBox_f_org->setText(QApplication::translate("make_document", "\320\236\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\321\217", 0));
        checkBox_f_active->setText(QApplication::translate("make_document", "\320\220\320\272\321\202\320\270\320\262\320\275\320\276\321\201\321\202\321\214", 0));
        radioButton_fa_yes->setText(QApplication::translate("make_document", "\320\220\320\272\321\202\320\270\320\262\320\270\321\200\320\276\320\262\320\260\320\275\321\213", 0));
        radioButton_fa_no->setText(QApplication::translate("make_document", "\320\235\320\265 \320\260\320\272\321\202\320\270\320\262\320\270\321\200\320\276\320\262\320\260\320\275\321\213", 0));
        pushButton_filter->setText(QApplication::translate("make_document", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_filter->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("make_document", "\320\232\320\276\320\275\321\202\321\200\320\260\320\263\320\265\320\275\321\202", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_filter->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("make_document", "\320\235\320\276\320\274\320\265\320\275\320\272\320\273\320\260\321\202\321\203\321\200\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_filter->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("make_document", "\320\241\320\265\321\200\320\270\321\217", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_filter->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("make_document", "\320\224\320\260\321\202\320\260 \320\276\321\202\320\263\321\200\321\203\320\267\320\272\320\270", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_filter->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("make_document", "\320\235\320\276\320\274\320\265\321\200 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_filter->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("make_document", "\320\236\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\321\217", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_filter->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("make_document", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_filter->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("make_document", "\320\235\320\276\320\274\320\265\321\200", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_filter->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("make_document", "\320\224\320\260\321\202\320\260 \320\260\320\272\321\202\320\270\320\262\320\260\321\206\320\270\320\270", 0));
        pushButton_save->setText(QApplication::translate("make_document", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class make_document: public Ui_make_document {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKE_DOCUMENT_H
