/********************************************************************************
** Form generated from reading UI file 'forma.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMA_H
#define UI_FORMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormA
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_exit;

    void setupUi(QWidget *FormA)
    {
        if (FormA->objectName().isEmpty())
            FormA->setObjectName(QStringLiteral("FormA"));
        FormA->resize(1061, 760);
        gridLayout = new QGridLayout(FormA);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(FormA);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(41);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_exit = new QPushButton(FormA);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_exit->sizePolicy().hasHeightForWidth());
        pushButton_exit->setSizePolicy(sizePolicy1);
        pushButton_exit->setMinimumSize(QSize(130, 35));
        pushButton_exit->setMaximumSize(QSize(130, 35));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_exit->setFont(font1);

        horizontalLayout->addWidget(pushButton_exit);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(FormA);

        QMetaObject::connectSlotsByName(FormA);
    } // setupUi

    void retranslateUi(QWidget *FormA)
    {
        FormA->setWindowTitle(QApplication::translate("FormA", "Form", 0));
        label->setText(QApplication::translate("FormA", "<html><head/><body><p><span style=\" font-size:24pt; color:#195ac2;\">t</span><span style=\" font-weight:600; color:#195ac2;\">M</span><span style=\" color:#195ac2;\">ix</span></p></body></html>", 0));
        pushButton_exit->setText(QApplication::translate("FormA", "\320\222\321\213\321\205\320\276\320\264", 0));
    } // retranslateUi

};

namespace Ui {
    class FormA: public Ui_FormA {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMA_H
