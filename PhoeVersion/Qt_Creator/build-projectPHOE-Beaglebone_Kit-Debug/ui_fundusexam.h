/********************************************************************************
** Form generated from reading UI file 'fundusexam.ui'
**
** Created: Sat Mar 28 18:33:41 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNDUSEXAM_H
#define UI_FUNDUSEXAM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_fundusexam
{
public:
    QLabel *label;

    void setupUi(QDialog *fundusexam)
    {
        if (fundusexam->objectName().isEmpty())
            fundusexam->setObjectName(QString::fromUtf8("fundusexam"));
        fundusexam->resize(400, 300);
        label = new QLabel(fundusexam);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 150, 47, 13));

        retranslateUi(fundusexam);

        QMetaObject::connectSlotsByName(fundusexam);
    } // setupUi

    void retranslateUi(QDialog *fundusexam)
    {
        fundusexam->setWindowTitle(QApplication::translate("fundusexam", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("fundusexam", "exam...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fundusexam: public Ui_fundusexam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNDUSEXAM_H
