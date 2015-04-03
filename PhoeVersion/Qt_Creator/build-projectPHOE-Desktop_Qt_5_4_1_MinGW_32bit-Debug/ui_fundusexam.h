/********************************************************************************
** Form generated from reading UI file 'fundusexam.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNDUSEXAM_H
#define UI_FUNDUSEXAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_fundusexam
{
public:
    QLabel *label;

    void setupUi(QDialog *fundusexam)
    {
        if (fundusexam->objectName().isEmpty())
            fundusexam->setObjectName(QStringLiteral("fundusexam"));
        fundusexam->resize(400, 300);
        label = new QLabel(fundusexam);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 150, 47, 13));

        retranslateUi(fundusexam);

        QMetaObject::connectSlotsByName(fundusexam);
    } // setupUi

    void retranslateUi(QDialog *fundusexam)
    {
        fundusexam->setWindowTitle(QApplication::translate("fundusexam", "Dialog", 0));
        label->setText(QApplication::translate("fundusexam", "exam...", 0));
    } // retranslateUi

};

namespace Ui {
    class fundusexam: public Ui_fundusexam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNDUSEXAM_H
