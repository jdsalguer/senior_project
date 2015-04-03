/********************************************************************************
** Form generated from reading UI file 'loginsuccess.ui'
**
** Created: Sat Mar 28 18:33:41 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSUCCESS_H
#define UI_LOGINSUCCESS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginsuccess
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *loginsucButton;

    void setupUi(QDialog *loginsuccess)
    {
        if (loginsuccess->objectName().isEmpty())
            loginsuccess->setObjectName(QString::fromUtf8("loginsuccess"));
        loginsuccess->resize(400, 300);
        label = new QLabel(loginsuccess);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 110, 281, 41));
        widget = new QWidget(loginsuccess);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 200, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        loginsucButton = new QPushButton(widget);
        loginsucButton->setObjectName(QString::fromUtf8("loginsucButton"));

        horizontalLayout->addWidget(loginsucButton);


        retranslateUi(loginsuccess);

        QMetaObject::connectSlotsByName(loginsuccess);
    } // setupUi

    void retranslateUi(QDialog *loginsuccess)
    {
        loginsuccess->setWindowTitle(QApplication::translate("loginsuccess", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("loginsuccess", "You have successfully logged in! Click 'OK' to continue...", 0, QApplication::UnicodeUTF8));
        loginsucButton->setText(QApplication::translate("loginsuccess", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class loginsuccess: public Ui_loginsuccess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSUCCESS_H
