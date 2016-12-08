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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tMix
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_from;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpinBox *spinBox_from_sn;
    QSlider *horizontalSlider_from_sn;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QSpinBox *spinBox_from_num;
    QSlider *horizontalSlider_from_num;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox_from_list;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_from;
    QToolButton *toolButton_from_file;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpinBox *spinBox_from_frow;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_to;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_9;
    QSpinBox *spinBox_to_sn;
    QSlider *horizontalSlider_to_sn;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_10;
    QSpinBox *spinBox_to_tag;
    QSlider *horizontalSlider_to_tag;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QComboBox *comboBox_to_list;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEdit_to;
    QToolButton *toolButton_to_file;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QSpinBox *spinBox_to_frow;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_status;
    QProgressBar *progressBar;
    QPushButton *pushButton_make;
    QToolButton *toolButton_close;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *tMix)
    {
        if (tMix->objectName().isEmpty())
            tMix->setObjectName(QStringLiteral("tMix"));
        tMix->resize(688, 693);
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(11);
        tMix->setFont(font);
        centralWidget = new QWidget(tMix);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_from = new QGroupBox(centralWidget);
        groupBox_from->setObjectName(QStringLiteral("groupBox_from"));
        groupBox_from->setAlignment(Qt::AlignCenter);
        gridLayout = new QGridLayout(groupBox_from);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(groupBox_from);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(140, 0));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_3);

        spinBox_from_sn = new QSpinBox(groupBox);
        spinBox_from_sn->setObjectName(QStringLiteral("spinBox_from_sn"));
        spinBox_from_sn->setAlignment(Qt::AlignCenter);
        spinBox_from_sn->setMinimum(1);
        spinBox_from_sn->setMaximum(20);

        horizontalLayout_4->addWidget(spinBox_from_sn);

        horizontalSlider_from_sn = new QSlider(groupBox);
        horizontalSlider_from_sn->setObjectName(QStringLiteral("horizontalSlider_from_sn"));
        horizontalSlider_from_sn->setMinimum(1);
        horizontalSlider_from_sn->setMaximum(20);
        horizontalSlider_from_sn->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider_from_sn);


        gridLayout_4->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(140, 0));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_4);

        spinBox_from_num = new QSpinBox(groupBox);
        spinBox_from_num->setObjectName(QStringLiteral("spinBox_from_num"));
        spinBox_from_num->setAlignment(Qt::AlignCenter);
        spinBox_from_num->setMinimum(1);
        spinBox_from_num->setMaximum(20);

        horizontalLayout_5->addWidget(spinBox_from_num);

        horizontalSlider_from_num = new QSlider(groupBox);
        horizontalSlider_from_num->setObjectName(QStringLiteral("horizontalSlider_from_num"));
        horizontalSlider_from_num->setMinimum(1);
        horizontalSlider_from_num->setMaximum(20);
        horizontalSlider_from_num->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_from_num);


        gridLayout_4->addLayout(horizontalLayout_5, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(groupBox_from);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(140, 0));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        comboBox_from_list = new QComboBox(groupBox_from);
        comboBox_from_list->setObjectName(QStringLiteral("comboBox_from_list"));
        comboBox_from_list->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_2->addWidget(comboBox_from_list);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit_from = new QLineEdit(groupBox_from);
        lineEdit_from->setObjectName(QStringLiteral("lineEdit_from"));

        horizontalLayout->addWidget(lineEdit_from);

        toolButton_from_file = new QToolButton(groupBox_from);
        toolButton_from_file->setObjectName(QStringLiteral("toolButton_from_file"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        toolButton_from_file->setFont(font1);

        horizontalLayout->addWidget(toolButton_from_file);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(groupBox_from);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(140, 0));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_2);

        spinBox_from_frow = new QSpinBox(groupBox_from);
        spinBox_from_frow->setObjectName(QStringLiteral("spinBox_from_frow"));
        spinBox_from_frow->setMinimum(1);

        horizontalLayout_3->addWidget(spinBox_from_frow);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox_from);

        groupBox_to = new QGroupBox(centralWidget);
        groupBox_to->setObjectName(QStringLiteral("groupBox_to"));
        groupBox_to->setAlignment(Qt::AlignCenter);
        gridLayout_2 = new QGridLayout(groupBox_to);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox_2 = new QGroupBox(groupBox_to);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(140, 0));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(label_9);

        spinBox_to_sn = new QSpinBox(groupBox_2);
        spinBox_to_sn->setObjectName(QStringLiteral("spinBox_to_sn"));
        spinBox_to_sn->setAlignment(Qt::AlignCenter);
        spinBox_to_sn->setMinimum(1);
        spinBox_to_sn->setMaximum(20);

        horizontalLayout_12->addWidget(spinBox_to_sn);

        horizontalSlider_to_sn = new QSlider(groupBox_2);
        horizontalSlider_to_sn->setObjectName(QStringLiteral("horizontalSlider_to_sn"));
        horizontalSlider_to_sn->setMinimum(1);
        horizontalSlider_to_sn->setMaximum(20);
        horizontalSlider_to_sn->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(horizontalSlider_to_sn);


        gridLayout_5->addLayout(horizontalLayout_12, 0, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(140, 0));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_13->addWidget(label_10);

        spinBox_to_tag = new QSpinBox(groupBox_2);
        spinBox_to_tag->setObjectName(QStringLiteral("spinBox_to_tag"));
        spinBox_to_tag->setAlignment(Qt::AlignCenter);
        spinBox_to_tag->setMinimum(1);
        spinBox_to_tag->setMaximum(20);

        horizontalLayout_13->addWidget(spinBox_to_tag);

        horizontalSlider_to_tag = new QSlider(groupBox_2);
        horizontalSlider_to_tag->setObjectName(QStringLiteral("horizontalSlider_to_tag"));
        horizontalSlider_to_tag->setMinimum(1);
        horizontalSlider_to_tag->setMaximum(20);
        horizontalSlider_to_tag->setOrientation(Qt::Horizontal);

        horizontalLayout_13->addWidget(horizontalSlider_to_tag);


        gridLayout_5->addLayout(horizontalLayout_13, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 3, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_5 = new QLabel(groupBox_to);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(140, 0));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_5);

        comboBox_to_list = new QComboBox(groupBox_to);
        comboBox_to_list->setObjectName(QStringLiteral("comboBox_to_list"));
        comboBox_to_list->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_7->addWidget(comboBox_to_list);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        gridLayout_2->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lineEdit_to = new QLineEdit(groupBox_to);
        lineEdit_to->setObjectName(QStringLiteral("lineEdit_to"));

        horizontalLayout_6->addWidget(lineEdit_to);

        toolButton_to_file = new QToolButton(groupBox_to);
        toolButton_to_file->setObjectName(QStringLiteral("toolButton_to_file"));
        toolButton_to_file->setFont(font1);

        horizontalLayout_6->addWidget(toolButton_to_file);


        gridLayout_2->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_6 = new QLabel(groupBox_to);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(140, 0));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_6);

        spinBox_to_frow = new QSpinBox(groupBox_to);
        spinBox_to_frow->setObjectName(QStringLiteral("spinBox_to_frow"));
        spinBox_to_frow->setMinimum(1);

        horizontalLayout_8->addWidget(spinBox_to_frow);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);


        gridLayout_2->addLayout(horizontalLayout_8, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox_to);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_status = new QLabel(centralWidget);
        label_status->setObjectName(QStringLiteral("label_status"));

        horizontalLayout_11->addWidget(label_status);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);
        progressBar->setInvertedAppearance(false);

        horizontalLayout_11->addWidget(progressBar);

        pushButton_make = new QPushButton(centralWidget);
        pushButton_make->setObjectName(QStringLiteral("pushButton_make"));
        pushButton_make->setMinimumSize(QSize(130, 0));
        pushButton_make->setMaximumSize(QSize(130, 16777215));
        pushButton_make->setFont(font1);

        horizontalLayout_11->addWidget(pushButton_make);

        toolButton_close = new QToolButton(centralWidget);
        toolButton_close->setObjectName(QStringLiteral("toolButton_close"));
        toolButton_close->setMinimumSize(QSize(34, 34));
        toolButton_close->setFont(font1);

        horizontalLayout_11->addWidget(toolButton_close);


        verticalLayout->addLayout(horizontalLayout_11);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        tMix->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(tMix);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        tMix->setStatusBar(statusBar);

        retranslateUi(tMix);

        QMetaObject::connectSlotsByName(tMix);
    } // setupUi

    void retranslateUi(QMainWindow *tMix)
    {
        tMix->setWindowTitle(QApplication::translate("tMix", "tMix", 0));
        groupBox_from->setTitle(QApplication::translate("tMix", "\320\230\320\267", 0));
        groupBox->setTitle(QApplication::translate("tMix", "\320\232\320\276\320\273\320\276\320\275\320\272\320\270", 0));
        label_3->setText(QApplication::translate("tMix", "SN:", 0));
        label_4->setText(QApplication::translate("tMix", "\320\235\320\276\320\274\320\265\321\200:", 0));
        label->setText(QApplication::translate("tMix", "\320\233\320\270\321\201\321\202:", 0));
        lineEdit_from->setPlaceholderText(QApplication::translate("tMix", "\320\220\320\264\321\200\320\265\321\201 \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \321\204\320\260\320\271\320\273\320\260", 0));
        toolButton_from_file->setText(QApplication::translate("tMix", "...", 0));
        label_2->setText(QApplication::translate("tMix", "\320\237\320\265\321\200\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260:", 0));
        groupBox_to->setTitle(QApplication::translate("tMix", "\320\222", 0));
        groupBox_2->setTitle(QApplication::translate("tMix", "\320\232\320\276\320\273\320\276\320\275\320\272\320\270", 0));
        label_9->setText(QApplication::translate("tMix", "SN:", 0));
        label_10->setText(QApplication::translate("tMix", "\320\240\320\260\320\267\320\274\320\265\321\201\321\202\320\270\321\202\321\214:", 0));
        label_5->setText(QApplication::translate("tMix", "\320\233\320\270\321\201\321\202:", 0));
        lineEdit_to->setText(QString());
        lineEdit_to->setPlaceholderText(QApplication::translate("tMix", "\320\220\320\264\321\200\320\265\321\201 \321\206\320\265\320\273\320\265\320\262\320\276\320\263\320\276 \321\204\320\260\320\271\320\273\320\260", 0));
        toolButton_to_file->setText(QApplication::translate("tMix", "...", 0));
        label_6->setText(QApplication::translate("tMix", "\320\237\320\265\321\200\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260:", 0));
        label_status->setText(QString());
        progressBar->setFormat(QApplication::translate("tMix", "%p%", 0));
        pushButton_make->setText(QApplication::translate("tMix", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214", 0));
        toolButton_close->setText(QApplication::translate("tMix", "x", 0));
    } // retranslateUi

};

namespace Ui {
    class tMix: public Ui_tMix {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TMIX_H
