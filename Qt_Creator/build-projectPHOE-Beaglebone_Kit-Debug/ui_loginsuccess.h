/********************************************************************************
** Form generated from reading UI file 'loginsuccess.ui'
**
** Created: Tue Apr 28 13:53:08 2015
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
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_loginsuccess
{
public:
    QLabel *label;
    QPushButton *loginsucButton;

    void setupUi(QDialog *loginsuccess)
    {
        if (loginsuccess->objectName().isEmpty())
            loginsuccess->setObjectName(QString::fromUtf8("loginsuccess"));
        loginsuccess->resize(800, 465);
        label = new QLabel(loginsuccess);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 90, 561, 111));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        loginsucButton = new QPushButton(loginsuccess);
        loginsucButton->setObjectName(QString::fromUtf8("loginsucButton"));
        loginsucButton->setGeometry(QRect(290, 210, 211, 101));
        loginsucButton->setFont(font);

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
