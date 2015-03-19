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
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_loginsuccess
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *loginsuccess)
    {
        if (loginsuccess->objectName().isEmpty())
            loginsuccess->setObjectName(QStringLiteral("loginsuccess"));
        loginsuccess->resize(400, 300);
        buttonBox = new QDialogButtonBox(loginsuccess);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(loginsuccess);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 110, 281, 41));

        retranslateUi(loginsuccess);
        QObject::connect(buttonBox, SIGNAL(accepted()), loginsuccess, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), loginsuccess, SLOT(reject()));

        QMetaObject::connectSlotsByName(loginsuccess);
    } // setupUi

    void retranslateUi(QDialog *loginsuccess)
    {
        loginsuccess->setWindowTitle(QApplication::translate("loginsuccess", "Dialog", 0));
        label->setText(QApplication::translate("loginsuccess", "You have successfully logged in! Click 'OK' to continue...", 0));
    } // retranslateUi

};

namespace Ui {
    class loginsuccess: public Ui_loginsuccess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSUCCESS_H
