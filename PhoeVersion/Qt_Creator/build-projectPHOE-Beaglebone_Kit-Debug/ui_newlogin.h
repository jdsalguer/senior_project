/********************************************************************************
** Form generated from reading UI file 'newlogin.ui'
**
** Created: Sat Apr 4 19:10:06 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWLOGIN_H
#define UI_NEWLOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newlogin
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *newbakButton;
    QPushButton *newcreButton;
    QPushButton *newcanButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_13;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QVBoxLayout *verticalLayout;
    QLineEdit *firstNameEdit;
    QLineEdit *lastNameEdit;
    QLineEdit *address1Edit;
    QLineEdit *address2Edit;
    QLineEdit *cityEdit;
    QLineEdit *stateEdit;
    QLineEdit *zipCodeEdit;
    QLineEdit *phoneEdit;
    QLineEdit *dobEdit;
    QLineEdit *loginIdEdit;
    QLineEdit *loginPassEdit;
    QLineEdit *loginPassConfirmEdit;

    void setupUi(QDialog *newlogin)
    {
        if (newlogin->objectName().isEmpty())
            newlogin->setObjectName(QString::fromUtf8("newlogin"));
        newlogin->resize(800, 465);
        label = new QLabel(newlogin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 511, 21));
        groupBox = new QGroupBox(newlogin);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 30, 761, 411));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 350, 721, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 10, 10, 10);
        newbakButton = new QPushButton(layoutWidget);
        newbakButton->setObjectName(QString::fromUtf8("newbakButton"));
        newbakButton->setMaximumSize(QSize(85, 49));

        horizontalLayout->addWidget(newbakButton);

        newcreButton = new QPushButton(layoutWidget);
        newcreButton->setObjectName(QString::fromUtf8("newcreButton"));
        newcreButton->setEnabled(true);
        newcreButton->setMaximumSize(QSize(85, 49));

        horizontalLayout->addWidget(newcreButton);

        newcanButton = new QPushButton(layoutWidget);
        newcanButton->setObjectName(QString::fromUtf8("newcanButton"));
        newcanButton->setMaximumSize(QSize(85, 49));

        horizontalLayout->addWidget(newcanButton);

        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 30, 721, 291));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_2->addWidget(label_13);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_2->addWidget(label_8);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_2->addWidget(label_9);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_2->addWidget(label_10);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_2->addWidget(label_11);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_2->addWidget(label_12);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        firstNameEdit = new QLineEdit(widget);
        firstNameEdit->setObjectName(QString::fromUtf8("firstNameEdit"));

        verticalLayout->addWidget(firstNameEdit);

        lastNameEdit = new QLineEdit(widget);
        lastNameEdit->setObjectName(QString::fromUtf8("lastNameEdit"));

        verticalLayout->addWidget(lastNameEdit);

        address1Edit = new QLineEdit(widget);
        address1Edit->setObjectName(QString::fromUtf8("address1Edit"));

        verticalLayout->addWidget(address1Edit);

        address2Edit = new QLineEdit(widget);
        address2Edit->setObjectName(QString::fromUtf8("address2Edit"));

        verticalLayout->addWidget(address2Edit);

        cityEdit = new QLineEdit(widget);
        cityEdit->setObjectName(QString::fromUtf8("cityEdit"));

        verticalLayout->addWidget(cityEdit);

        stateEdit = new QLineEdit(widget);
        stateEdit->setObjectName(QString::fromUtf8("stateEdit"));

        verticalLayout->addWidget(stateEdit);

        zipCodeEdit = new QLineEdit(widget);
        zipCodeEdit->setObjectName(QString::fromUtf8("zipCodeEdit"));

        verticalLayout->addWidget(zipCodeEdit);

        phoneEdit = new QLineEdit(widget);
        phoneEdit->setObjectName(QString::fromUtf8("phoneEdit"));

        verticalLayout->addWidget(phoneEdit);

        dobEdit = new QLineEdit(widget);
        dobEdit->setObjectName(QString::fromUtf8("dobEdit"));

        verticalLayout->addWidget(dobEdit);

        loginIdEdit = new QLineEdit(widget);
        loginIdEdit->setObjectName(QString::fromUtf8("loginIdEdit"));

        verticalLayout->addWidget(loginIdEdit);

        loginPassEdit = new QLineEdit(widget);
        loginPassEdit->setObjectName(QString::fromUtf8("loginPassEdit"));

        verticalLayout->addWidget(loginPassEdit);

        loginPassConfirmEdit = new QLineEdit(widget);
        loginPassConfirmEdit->setObjectName(QString::fromUtf8("loginPassConfirmEdit"));

        verticalLayout->addWidget(loginPassConfirmEdit);


        horizontalLayout_2->addLayout(verticalLayout);

        layoutWidget->raise();
        newbakButton->raise();

        retranslateUi(newlogin);

        QMetaObject::connectSlotsByName(newlogin);
    } // setupUi

    void retranslateUi(QDialog *newlogin)
    {
        newlogin->setWindowTitle(QApplication::translate("newlogin", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("newlogin", "Please fill the following information. All fields are required to create a new account.", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("newlogin", "New Account", 0, QApplication::UnicodeUTF8));
        newbakButton->setText(QApplication::translate("newlogin", "<- BACK", 0, QApplication::UnicodeUTF8));
        newcreButton->setText(QApplication::translate("newlogin", "CREATE", 0, QApplication::UnicodeUTF8));
        newcanButton->setText(QApplication::translate("newlogin", "CANCEL", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("newlogin", "                      First Name :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("newlogin", "                     Last Name :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("newlogin", "              Address Line 1 :", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("newlogin", "              Address Line 2 :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("newlogin", "                                City :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("newlogin", "                              State :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("newlogin", "                        Zip Code :", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("newlogin", "                             Phone :", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("newlogin", "                            D.O.B. :", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("newlogin", "                          Login ID :", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("newlogin", "             Login Password :", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("newlogin", "Login Password Confirm :", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class newlogin: public Ui_newlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWLOGIN_H
