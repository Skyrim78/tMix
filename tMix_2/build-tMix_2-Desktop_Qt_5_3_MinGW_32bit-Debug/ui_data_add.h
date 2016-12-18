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
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_data_add
{
public:
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_5;
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
    QSplitter *splitter;
    QGroupBox *groupBox_view;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget_data;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QComboBox *comboBox_operator;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_load;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_9;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_act_file;
    QToolButton *toolButton_act_file;
    QSplitter *splitter_2;
    QGroupBox *groupBox_view_2;
    QGridLayout *gridLayout_7;
    QTableWidget *tableWidget_act_data;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_8;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_act_load;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_15;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_;
    QGridLayout *gridLayout_11;
    QLineEdit *lineEdit_search;
    QTableWidget *tableWidget_search;
    QGroupBox *groupBox_report;
    QGridLayout *gridLayout_3;
    QLabel *label_report;
    QProgressBar *progressBar;

    void setupUi(QWidget *data_add)
    {
        if (data_add->objectName().isEmpty())
            data_add->setObjectName(QStringLiteral("data_add"));
        data_add->resize(1047, 842);
        QFont font;
        font.setPointSize(10);
        data_add->setFont(font);
        gridLayout_6 = new QGridLayout(data_add);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tabWidget = new QTabWidget(data_add);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_5 = new QGridLayout(tab);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(tab);
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
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        toolButton_file->setFont(font1);

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
        spinBox_frow->setMinimum(1);

        horizontalLayout->addWidget(spinBox_frow);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        spinBox_num = new QSpinBox(groupBox);
        spinBox_num->setObjectName(QStringLiteral("spinBox_num"));
        spinBox_num->setMinimum(1);

        horizontalLayout->addWidget(spinBox_num);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        spinBox_serial = new QSpinBox(groupBox);
        spinBox_serial->setObjectName(QStringLiteral("spinBox_serial"));
        spinBox_serial->setMinimum(1);

        horizontalLayout->addWidget(spinBox_serial);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_read_file = new QPushButton(groupBox);
        pushButton_read_file->setObjectName(QStringLiteral("pushButton_read_file"));
        pushButton_read_file->setMinimumSize(QSize(130, 35));
        pushButton_read_file->setMaximumSize(QSize(130, 35));
        pushButton_read_file->setFont(font1);

        horizontalLayout->addWidget(pushButton_read_file);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox);

        splitter = new QSplitter(tab);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(11);
        groupBox_view = new QGroupBox(splitter);
        groupBox_view->setObjectName(QStringLiteral("groupBox_view"));
        groupBox_view->setMinimumSize(QSize(350, 0));
        gridLayout = new QGridLayout(groupBox_view);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget_data = new QTableWidget(groupBox_view);
        if (tableWidget_data->columnCount() < 2)
            tableWidget_data->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_data->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_data->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget_data->setObjectName(QStringLiteral("tableWidget_data"));
        tableWidget_data->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_data->setAlternatingRowColors(true);
        tableWidget_data->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget_data->setShowGrid(false);
        tableWidget_data->setWordWrap(false);
        tableWidget_data->horizontalHeader()->setStretchLastSection(true);
        tableWidget_data->verticalHeader()->setDefaultSectionSize(25);
        tableWidget_data->verticalHeader()->setMinimumSectionSize(25);

        gridLayout->addWidget(tableWidget_data, 0, 0, 1, 1);

        splitter->addWidget(groupBox_view);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        comboBox_operator = new QComboBox(groupBox_2);
        comboBox_operator->setObjectName(QStringLiteral("comboBox_operator"));

        horizontalLayout_3->addWidget(comboBox_operator);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_load = new QPushButton(groupBox_2);
        pushButton_load->setObjectName(QStringLiteral("pushButton_load"));
        pushButton_load->setMinimumSize(QSize(130, 35));
        pushButton_load->setMaximumSize(QSize(130, 35));
        pushButton_load->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_load);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout_4->addLayout(verticalLayout_2, 0, 0, 1, 1);

        splitter->addWidget(groupBox_2);

        verticalLayout_3->addWidget(splitter);


        gridLayout_5->addLayout(verticalLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_10 = new QGridLayout(tab_2);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        lineEdit_act_file = new QLineEdit(tab_2);
        lineEdit_act_file->setObjectName(QStringLiteral("lineEdit_act_file"));

        horizontalLayout_5->addWidget(lineEdit_act_file);

        toolButton_act_file = new QToolButton(tab_2);
        toolButton_act_file->setObjectName(QStringLiteral("toolButton_act_file"));
        toolButton_act_file->setMinimumSize(QSize(30, 30));
        toolButton_act_file->setMaximumSize(QSize(30, 30));
        toolButton_act_file->setFont(font1);

        horizontalLayout_5->addWidget(toolButton_act_file);


        gridLayout_9->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        splitter_2 = new QSplitter(tab_2);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        sizePolicy.setHeightForWidth(splitter_2->sizePolicy().hasHeightForWidth());
        splitter_2->setSizePolicy(sizePolicy);
        splitter_2->setOrientation(Qt::Horizontal);
        splitter_2->setHandleWidth(11);
        groupBox_view_2 = new QGroupBox(splitter_2);
        groupBox_view_2->setObjectName(QStringLiteral("groupBox_view_2"));
        groupBox_view_2->setMinimumSize(QSize(350, 0));
        gridLayout_7 = new QGridLayout(groupBox_view_2);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        tableWidget_act_data = new QTableWidget(groupBox_view_2);
        if (tableWidget_act_data->columnCount() < 2)
            tableWidget_act_data->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_act_data->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_act_data->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        tableWidget_act_data->setObjectName(QStringLiteral("tableWidget_act_data"));
        tableWidget_act_data->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_act_data->setAlternatingRowColors(true);
        tableWidget_act_data->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget_act_data->setShowGrid(false);
        tableWidget_act_data->setWordWrap(false);
        tableWidget_act_data->horizontalHeader()->setStretchLastSection(true);
        tableWidget_act_data->verticalHeader()->setDefaultSectionSize(25);
        tableWidget_act_data->verticalHeader()->setMinimumSectionSize(25);

        gridLayout_7->addWidget(tableWidget_act_data, 0, 0, 1, 1);

        splitter_2->addWidget(groupBox_view_2);
        groupBox_3 = new QGroupBox(splitter_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_8 = new QGridLayout(groupBox_3);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        pushButton_act_load = new QPushButton(groupBox_3);
        pushButton_act_load->setObjectName(QStringLiteral("pushButton_act_load"));
        pushButton_act_load->setMinimumSize(QSize(130, 35));
        pushButton_act_load->setMaximumSize(QSize(130, 35));
        pushButton_act_load->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_act_load);


        verticalLayout_5->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        gridLayout_8->addLayout(verticalLayout_5, 0, 0, 1, 1);

        splitter_2->addWidget(groupBox_3);

        gridLayout_9->addWidget(splitter_2, 1, 0, 1, 1);


        gridLayout_10->addLayout(gridLayout_9, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_15 = new QGridLayout(tab_3);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        groupBox_ = new QGroupBox(tab_3);
        groupBox_->setObjectName(QStringLiteral("groupBox_"));
        groupBox_->setAlignment(Qt::AlignCenter);
        gridLayout_11 = new QGridLayout(groupBox_);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        lineEdit_search = new QLineEdit(groupBox_);
        lineEdit_search->setObjectName(QStringLiteral("lineEdit_search"));
        lineEdit_search->setClearButtonEnabled(true);

        gridLayout_11->addWidget(lineEdit_search, 0, 0, 1, 1);


        verticalLayout_6->addWidget(groupBox_);

        tableWidget_search = new QTableWidget(tab_3);
        if (tableWidget_search->columnCount() < 4)
            tableWidget_search->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_search->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_search->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_search->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_search->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        tableWidget_search->setObjectName(QStringLiteral("tableWidget_search"));
        tableWidget_search->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_search->setAlternatingRowColors(true);
        tableWidget_search->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableWidget_search->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_search->setShowGrid(false);
        tableWidget_search->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_6->addWidget(tableWidget_search);


        gridLayout_15->addLayout(verticalLayout_6, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        verticalLayout_4->addWidget(tabWidget);

        groupBox_report = new QGroupBox(data_add);
        groupBox_report->setObjectName(QStringLiteral("groupBox_report"));
        gridLayout_3 = new QGridLayout(groupBox_report);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_report = new QLabel(groupBox_report);
        label_report->setObjectName(QStringLiteral("label_report"));
        label_report->setScaledContents(true);
        label_report->setAlignment(Qt::AlignCenter);
        label_report->setWordWrap(true);

        gridLayout_3->addWidget(label_report, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_report);

        progressBar = new QProgressBar(data_add);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(progressBar);


        gridLayout_6->addLayout(verticalLayout_4, 0, 0, 1, 1);


        retranslateUi(data_add);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(data_add);
    } // setupUi

    void retranslateUi(QWidget *data_add)
    {
        data_add->setWindowTitle(QApplication::translate("data_add", "Form", 0));
        groupBox->setTitle(QString());
        lineEdit_file->setPlaceholderText(QApplication::translate("data_add", "\320\244\320\260\320\271\320\273 - \321\201\320\277\320\270\321\201\320\276\320\272 \320\275\320\276\320\274\320\265\321\200\320\276\320\262...", 0));
        toolButton_file->setText(QApplication::translate("data_add", "...", 0));
        label->setText(QApplication::translate("data_add", "\320\233\320\270\321\201\321\202:", 0));
        label_4->setText(QApplication::translate("data_add", "\320\237\320\265\321\200\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260:", 0));
        label_2->setText(QApplication::translate("data_add", "\320\235\320\276\320\274\320\265\321\200:", 0));
        label_3->setText(QApplication::translate("data_add", "SN:", 0));
        pushButton_read_file->setText(QApplication::translate("data_add", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", 0));
        groupBox_view->setTitle(QApplication::translate("data_add", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_data->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("data_add", "\320\235\320\276\320\274\320\265\321\200", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_data->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("data_add", "SN", 0));
        groupBox_2->setTitle(QString());
        label_5->setText(QApplication::translate("data_add", "\320\236\320\277\320\265\321\200\320\260\321\202\320\276\321\200:", 0));
        pushButton_load->setText(QApplication::translate("data_add", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("data_add", "\320\222\320\262\320\276\320\264 \320\277\320\265\321\200\320\262\320\270\321\207\320\275\321\213\321\205 \320\264\320\260\320\275\320\275\321\213\321\205", 0));
        lineEdit_act_file->setText(QString());
        lineEdit_act_file->setPlaceholderText(QApplication::translate("data_add", "\320\244\320\260\320\271\320\273 - \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 \320\277\321\200\320\276\320\262\320\265\321\200\320\272\320\270 \320\260\320\262\321\202\320\270\320\262\320\275\320\276\321\201\321\202\320\270...", 0));
        toolButton_act_file->setText(QApplication::translate("data_add", "...", 0));
        groupBox_view_2->setTitle(QApplication::translate("data_add", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_act_data->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("data_add", "\320\235\320\276\320\274\320\265\321\200", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_act_data->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("data_add", "\320\224\320\260\321\202\320\260 \320\260\320\272\321\202\320\270\320\262\320\260\321\206\320\270\320\270", 0));
        groupBox_3->setTitle(QString());
        pushButton_act_load->setText(QApplication::translate("data_add", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("data_add", "\320\236\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\265 \"\320\220\320\272\321\202\320\270\320\262\320\275\320\276\321\201\321\202\320\270\"", 0));
        groupBox_->setTitle(QApplication::translate("data_add", "\320\237\320\276\320\270\321\201\320\272", 0));
        lineEdit_search->setPlaceholderText(QApplication::translate("data_add", "\320\235\320\276\320\274\320\265\321\200 \320\270\320\273\320\270 \321\201\320\265\321\200\320\270\320\271\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_search->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("data_add", "\320\236\320\277\320\265\321\200\320\260\321\202\320\276\321\200", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_search->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("data_add", "\320\235\320\276\320\274\320\265\321\200", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_search->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("data_add", "SN", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_search->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("data_add", "\320\224\320\260\321\202\320\260 \320\260\320\272\321\202\320\270\320\262\320\260\321\206\320\270\320\270", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("data_add", "\320\237\320\276\320\270\321\201\320\272", 0));
        groupBox_report->setTitle(QString());
        label_report->setText(QApplication::translate("data_add", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class data_add: public Ui_data_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATA_ADD_H
