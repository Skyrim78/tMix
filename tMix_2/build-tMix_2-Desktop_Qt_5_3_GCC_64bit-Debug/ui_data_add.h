/********************************************************************************
** Form generated from reading UI file 'data_add.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATA_ADD_H
#define UI_DATA_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_data_add
{
public:
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_file;
    QToolButton *toolButton_file;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_list;
    QLabel *label_4;
    QSpinBox *spinBox_frow;
    QLabel *label_2;
    QSpinBox *spinBox_num;
    QLabel *label_3;
    QSpinBox *spinBox_serial;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_read_file;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_view;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget_data;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QComboBox *comboBox_operator;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_load;
    QGroupBox *groupBox_report;
    QGridLayout *gridLayout_3;
    QLabel *label_report;
    QSpacerItem *verticalSpacer;
    QProgressBar *progressBar;

    void setupUi(QWidget *data_add)
    {
        if (data_add->objectName().isEmpty())
            data_add->setObjectName(QStringLiteral("data_add"));
        data_add->resize(744, 552);
        QFont font;
        font.setPointSize(10);
        data_add->setFont(font);
        gridLayout_4 = new QGridLayout(data_add);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(data_add);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit_file = new QLineEdit(groupBox);
        lineEdit_file->setObjectName(QStringLiteral("lineEdit_file"));

        horizontalLayout_2->addWidget(lineEdit_file);

        toolButton_file = new QToolButton(groupBox);
        toolButton_file->setObjectName(QStringLiteral("toolButton_file"));
        toolButton_file->setMinimumSize(QSize(30, 30));
        toolButton_file->setMaximumSize(QSize(30, 30));

        horizontalLayout_2->addWidget(toolButton_file);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox_list = new QComboBox(groupBox);
        comboBox_list->setObjectName(QStringLiteral("comboBox_list"));

        horizontalLayout->addWidget(comboBox_list);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        spinBox_frow = new QSpinBox(groupBox);
        spinBox_frow->setObjectName(QStringLiteral("spinBox_frow"));

        horizontalLayout->addWidget(spinBox_frow);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        spinBox_num = new QSpinBox(groupBox);
        spinBox_num->setObjectName(QStringLiteral("spinBox_num"));

        horizontalLayout->addWidget(spinBox_num);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        spinBox_serial = new QSpinBox(groupBox);
        spinBox_serial->setObjectName(QStringLiteral("spinBox_serial"));

        horizontalLayout->addWidget(spinBox_serial);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_read_file = new QPushButton(groupBox);
        pushButton_read_file->setObjectName(QStringLiteral("pushButton_read_file"));
        pushButton_read_file->setMinimumSize(QSize(120, 30));
        pushButton_read_file->setMaximumSize(QSize(120, 30));

        horizontalLayout->addWidget(pushButton_read_file);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        groupBox_view = new QGroupBox(data_add);
        groupBox_view->setObjectName(QStringLiteral("groupBox_view"));
        groupBox_view->setMinimumSize(QSize(270, 0));
        groupBox_view->setMaximumSize(QSize(270, 16777215));
        gridLayout = new QGridLayout(groupBox_view);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget_data = new QTableWidget(groupBox_view);
        if (tableWidget_data->columnCount() < 2)
            tableWidget_data->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_data->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_data->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget_data->rowCount() < 1)
            tableWidget_data->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_data->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_data->setItem(0, 0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_data->setItem(0, 1, __qtablewidgetitem4);
        tableWidget_data->setObjectName(QStringLiteral("tableWidget_data"));
        tableWidget_data->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_data->setAlternatingRowColors(true);
        tableWidget_data->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget_data->setShowGrid(false);
        tableWidget_data->setWordWrap(false);
        tableWidget_data->verticalHeader()->setDefaultSectionSize(25);
        tableWidget_data->verticalHeader()->setMinimumSectionSize(25);

        gridLayout->addWidget(tableWidget_data, 0, 0, 1, 1);


        horizontalLayout_4->addWidget(groupBox_view);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(data_add);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        comboBox_operator = new QComboBox(data_add);
        comboBox_operator->setObjectName(QStringLiteral("comboBox_operator"));

        horizontalLayout_3->addWidget(comboBox_operator);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_load = new QPushButton(data_add);
        pushButton_load->setObjectName(QStringLiteral("pushButton_load"));
        pushButton_load->setMinimumSize(QSize(120, 30));
        pushButton_load->setMaximumSize(QSize(120, 30));

        horizontalLayout_3->addWidget(pushButton_load);


        verticalLayout_2->addLayout(horizontalLayout_3);

        groupBox_report = new QGroupBox(data_add);
        groupBox_report->setObjectName(QStringLiteral("groupBox_report"));
        gridLayout_3 = new QGridLayout(groupBox_report);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_report = new QLabel(groupBox_report);
        label_report->setObjectName(QStringLiteral("label_report"));

        gridLayout_3->addWidget(label_report, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_report);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        progressBar = new QProgressBar(data_add);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        verticalLayout_3->addWidget(progressBar);


        gridLayout_4->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(data_add);

        QMetaObject::connectSlotsByName(data_add);
    } // setupUi

    void retranslateUi(QWidget *data_add)
    {
        data_add->setWindowTitle(QApplication::translate("data_add", "Form", 0));
        groupBox->setTitle(QApplication::translate("data_add", "file", 0));
        lineEdit_file->setPlaceholderText(QApplication::translate("data_add", "File...", 0));
        toolButton_file->setText(QApplication::translate("data_add", "...", 0));
        label->setText(QApplication::translate("data_add", "List:", 0));
        label_4->setText(QApplication::translate("data_add", "first row:", 0));
        label_2->setText(QApplication::translate("data_add", "num", 0));
        label_3->setText(QApplication::translate("data_add", "serial", 0));
        pushButton_read_file->setText(QApplication::translate("data_add", "ok", 0));
        groupBox_view->setTitle(QApplication::translate("data_add", "view", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_data->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("data_add", "num", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_data->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("data_add", "serial", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_data->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("data_add", "1", 0));

        const bool __sortingEnabled = tableWidget_data->isSortingEnabled();
        tableWidget_data->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_data->item(0, 0);
        ___qtablewidgetitem3->setText(QApplication::translate("data_add", "0662058931", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_data->item(0, 1);
        ___qtablewidgetitem4->setText(QApplication::translate("data_add", "0123456789123", 0));
        tableWidget_data->setSortingEnabled(__sortingEnabled);

        label_5->setText(QApplication::translate("data_add", "Operator:", 0));
        pushButton_load->setText(QApplication::translate("data_add", "load", 0));
        groupBox_report->setTitle(QApplication::translate("data_add", "report", 0));
        label_report->setText(QApplication::translate("data_add", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class data_add: public Ui_data_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATA_ADD_H
