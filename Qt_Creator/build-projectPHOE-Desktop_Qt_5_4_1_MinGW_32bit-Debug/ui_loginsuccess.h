/********************************************************************************
** Form generated from reading UI file 'loginsuccess.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSUCCESS_H
#define UI_LOGINSUCCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginsuccess
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *loginsucButton;

    void setupUi(QDialog *loginsuccess)
    {
        if (loginsuccess->objectName().isEmpty())
            loginsuccess->setObjectName(QStringLiteral("loginsuccess"));
        loginsuccess->resize(800, 465);
        label = new QLabel(loginsuccess);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 110, 281, 41));
        layoutWidget = new QWidget(loginsuccess);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 200, 158, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        loginsucButton = new QPushButton(layoutWidget);
        loginsucButton->setObjectName(QStringLiteral("loginsucButton"));

        horizontalLayout->addWidget(loginsucButton);


        retranslateUi(loginsuccess);

        QMetaObject::connectSlotsByName(loginsuccess);
    } // setupUi

    void retranslateUi(QDialog *loginsuccess)
    {
        loginsuccess->setWindowTitle(QApplication::translate("loginsuccess", "Dialog", 0));
        label->setText(QApplication::translate("loginsuccess", "You have successfully logged in! Click 'OK' to continue...", 0));
        loginsucButton->setText(QApplication::translate("loginsuccess", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class loginsuccess: public Ui_loginsuccess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSUCCESS_H
