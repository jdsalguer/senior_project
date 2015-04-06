/********************************************************************************
** Form generated from reading UI file 'loginerror.ui'
**
** Created: Sat Apr 4 21:41:34 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINERROR_H
#define UI_LOGINERROR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginerror
{
public:
    QPushButton *errorokButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *loginerror)
    {
        if (loginerror->objectName().isEmpty())
            loginerror->setObjectName(QString::fromUtf8("loginerror"));
        loginerror->resize(800, 465);
        errorokButton = new QPushButton(loginerror);
        errorokButton->setObjectName(QString::fromUtf8("errorokButton"));
        errorokButton->setGeometry(QRect(310, 260, 161, 71));
        QFont font;
        font.setPointSize(16);
        errorokButton->setFont(font);
        widget = new QWidget(loginerror);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 30, 641, 201));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);


        retranslateUi(loginerror);

        QMetaObject::connectSlotsByName(loginerror);
    } // setupUi

    void retranslateUi(QDialog *loginerror)
    {
        loginerror->setWindowTitle(QApplication::translate("loginerror", "Dialog", 0, QApplication::UnicodeUTF8));
        errorokButton->setText(QApplication::translate("loginerror", "OK", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("loginerror", "Your ID and/or Password is incorrect. Please try again.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("loginerror", "If you don't have an account, please press 'NEW' in the menu.", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("loginerror", "Press 'OK' to continue...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class loginerror: public Ui_loginerror {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINERROR_H
