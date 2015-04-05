/********************************************************************************
** Form generated from reading UI file 'loginerror.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINERROR_H
#define UI_LOGINERROR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_loginerror
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *errorokButton;

    void setupUi(QDialog *loginerror)
    {
        if (loginerror->objectName().isEmpty())
            loginerror->setObjectName(QStringLiteral("loginerror"));
        loginerror->resize(800, 465);
        label = new QLabel(loginerror);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 100, 271, 41));
        label_2 = new QLabel(loginerror);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 140, 311, 31));
        label_3 = new QLabel(loginerror);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 180, 131, 16));
        errorokButton = new QPushButton(loginerror);
        errorokButton->setObjectName(QStringLiteral("errorokButton"));
        errorokButton->setGeometry(QRect(150, 220, 75, 23));

        retranslateUi(loginerror);

        QMetaObject::connectSlotsByName(loginerror);
    } // setupUi

    void retranslateUi(QDialog *loginerror)
    {
        loginerror->setWindowTitle(QApplication::translate("loginerror", "Dialog", 0));
        label->setText(QApplication::translate("loginerror", "Your ID and/or Password is incorrect. Please try again.", 0));
        label_2->setText(QApplication::translate("loginerror", "If you don't have an account, please press 'NEW' in the menu.", 0));
        label_3->setText(QApplication::translate("loginerror", "Press 'OK' to continue...", 0));
        errorokButton->setText(QApplication::translate("loginerror", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class loginerror: public Ui_loginerror {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINERROR_H
