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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_make_document
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_to;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEdit_file;
    QToolButton *toolButton_file;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QComboBox *comboBox_list;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QSpinBox *spinBox_frow;
    QSlider *horizontalSlider_frow;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_9;
    QSpinBox *spinBox_sn;
    QSlider *horizontalSlider_sn;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_11;
    QSpinBox *spinBox_active;
    QSlider *horizontalSlider_active;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_10;
    QSpinBox *spinBox_num;
    QSlider *horizontalSlider_num;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBox_active;
    QPushButton *pushButton_make;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_report;
    QGridLayout *gridLayout_4;
    QLabel *label_report;
    QProgressBar *progressBar;

    void setupUi(QWidget *make_document)
    {
        if (make_document->objectName().isEmpty())
            make_document->setObjectName(QStringLiteral("make_document"));
        make_document->resize(874, 689);
        QFont font;
        font.setPointSize(10);
        make_document->setFont(font);
        gridLayout_3 = new QGridLayout(make_document);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_to = new QGroupBox(make_document);
        groupBox_to->setObjectName(QStringLiteral("groupBox_to"));
        groupBox_to->setAlignment(Qt::AlignCenter);
        gridLayout_2 = new QGridLayout(groupBox_to);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lineEdit_file = new QLineEdit(groupBox_to);
        lineEdit_file->setObjectName(QStringLiteral("lineEdit_file"));

        horizontalLayout_6->addWidget(lineEdit_file);

        toolButton_file = new QToolButton(groupBox_to);
        toolButton_file->setObjectName(QStringLiteral("toolButton_file"));
        toolButton_file->setMinimumSize(QSize(30, 30));
        toolButton_file->setMaximumSize(QSize(30, 30));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        toolButton_file->setFont(font1);

        horizontalLayout_6->addWidget(toolButton_file);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(groupBox_to);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(140, 0));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_5);

        comboBox_list = new QComboBox(groupBox_to);
        comboBox_list->setObjectName(QStringLiteral("comboBox_list"));
        comboBox_list->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_2->addWidget(comboBox_list);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_6 = new QLabel(groupBox_to);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(140, 0));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_6);

        spinBox_frow = new QSpinBox(groupBox_to);
        spinBox_frow->setObjectName(QStringLiteral("spinBox_frow"));
        spinBox_frow->setMinimum(1);

        horizontalLayout_8->addWidget(spinBox_frow);

        horizontalSlider_frow = new QSlider(groupBox_to);
        horizontalSlider_frow->setObjectName(QStringLiteral("horizontalSlider_frow"));
        horizontalSlider_frow->setMinimum(1);
        horizontalSlider_frow->setMaximum(20);
        horizontalSlider_frow->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(horizontalSlider_frow);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_9 = new QLabel(groupBox_to);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(140, 0));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(label_9);

        spinBox_sn = new QSpinBox(groupBox_to);
        spinBox_sn->setObjectName(QStringLiteral("spinBox_sn"));
        spinBox_sn->setAlignment(Qt::AlignCenter);
        spinBox_sn->setMinimum(1);
        spinBox_sn->setMaximum(20);

        horizontalLayout_12->addWidget(spinBox_sn);

        horizontalSlider_sn = new QSlider(groupBox_to);
        horizontalSlider_sn->setObjectName(QStringLiteral("horizontalSlider_sn"));
        horizontalSlider_sn->setMinimum(1);
        horizontalSlider_sn->setMaximum(20);
        horizontalSlider_sn->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(horizontalSlider_sn);


        verticalLayout->addLayout(horizontalLayout_12);


        horizontalLayout_3->addLayout(verticalLayout);

        groupBox_2 = new QGroupBox(groupBox_to);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(140, 0));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_14->addWidget(label_11);

        spinBox_active = new QSpinBox(groupBox_2);
        spinBox_active->setObjectName(QStringLiteral("spinBox_active"));
        spinBox_active->setAlignment(Qt::AlignCenter);
        spinBox_active->setMinimum(1);
        spinBox_active->setMaximum(20);

        horizontalLayout_14->addWidget(spinBox_active);

        horizontalSlider_active = new QSlider(groupBox_2);
        horizontalSlider_active->setObjectName(QStringLiteral("horizontalSlider_active"));
        horizontalSlider_active->setMinimum(1);
        horizontalSlider_active->setMaximum(20);
        horizontalSlider_active->setOrientation(Qt::Horizontal);

        horizontalLayout_14->addWidget(horizontalSlider_active);


        gridLayout->addLayout(horizontalLayout_14, 1, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(140, 0));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_13->addWidget(label_10);

        spinBox_num = new QSpinBox(groupBox_2);
        spinBox_num->setObjectName(QStringLiteral("spinBox_num"));
        spinBox_num->setAlignment(Qt::AlignCenter);
        spinBox_num->setMinimum(1);
        spinBox_num->setMaximum(20);

        horizontalLayout_13->addWidget(spinBox_num);

        horizontalSlider_num = new QSlider(groupBox_2);
        horizontalSlider_num->setObjectName(QStringLiteral("horizontalSlider_num"));
        horizontalSlider_num->setMinimum(1);
        horizontalSlider_num->setMaximum(20);
        horizontalSlider_num->setOrientation(Qt::Horizontal);

        horizontalLayout_13->addWidget(horizontalSlider_num);


        gridLayout->addLayout(horizontalLayout_13, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox_2);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_to);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBox_active = new QCheckBox(make_document);
        checkBox_active->setObjectName(QStringLiteral("checkBox_active"));

        horizontalLayout->addWidget(checkBox_active);

        pushButton_make = new QPushButton(make_document);
        pushButton_make->setObjectName(QStringLiteral("pushButton_make"));
        pushButton_make->setMinimumSize(QSize(130, 35));
        pushButton_make->setMaximumSize(QSize(130, 35));
        pushButton_make->setFont(font1);

        horizontalLayout->addWidget(pushButton_make);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        groupBox_report = new QGroupBox(make_document);
        groupBox_report->setObjectName(QStringLiteral("groupBox_report"));
        gridLayout_4 = new QGridLayout(groupBox_report);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_report = new QLabel(groupBox_report);
        label_report->setObjectName(QStringLiteral("label_report"));
        label_report->setScaledContents(true);
        label_report->setAlignment(Qt::AlignCenter);
        label_report->setWordWrap(true);

        gridLayout_4->addWidget(label_report, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_report);

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
        groupBox_to->setTitle(QString());
        lineEdit_file->setText(QString());
        lineEdit_file->setPlaceholderText(QApplication::translate("make_document", "\320\224\320\276\320\272\321\203\320\274\320\265\320\275\321\202 \320\264\320\273\321\217 \320\277\321\200\320\276\320\262\320\265\321\200\320\272\320\270", 0));
        toolButton_file->setText(QApplication::translate("make_document", "...", 0));
        label_5->setText(QApplication::translate("make_document", "\320\233\320\270\321\201\321\202:", 0));
        label_6->setText(QApplication::translate("make_document", "\320\237\320\265\321\200\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260:", 0));
        label_9->setText(QApplication::translate("make_document", "SN:", 0));
        groupBox_2->setTitle(QApplication::translate("make_document", "\320\240\320\260\320\267\320\274\320\265\321\201\321\202\320\270\321\202\321\214", 0));
        label_11->setText(QApplication::translate("make_document", "\320\220\320\272\321\202\320\270\320\262\320\260\321\206\320\270\321\217:", 0));
        label_10->setText(QApplication::translate("make_document", "\320\235\320\276\320\274\320\265\321\200\320\260:", 0));
        checkBox_active->setText(QApplication::translate("make_document", "\320\277\320\276\320\264\320\263\320\276\321\202\320\276\320\262\320\270\321\202\321\214 \321\204\320\260\320\271\320\273 \320\277\321\200\320\276\320\262\320\265\321\200\320\272\320\270 \320\260\320\272\321\202\320\270\320\262\320\260\321\206\320\270\320\270", 0));
        pushButton_make->setText(QApplication::translate("make_document", "\320\236\320\261\321\200\320\260\320\261\320\276\321\202\320\260\321\202\321\214", 0));
        groupBox_report->setTitle(QApplication::translate("make_document", "\320\236\321\202\321\207\320\265\321\202", 0));
        label_report->setText(QApplication::translate("make_document", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class make_document: public Ui_make_document {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKE_DOCUMENT_H
