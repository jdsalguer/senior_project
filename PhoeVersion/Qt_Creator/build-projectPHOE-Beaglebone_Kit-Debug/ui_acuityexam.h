/********************************************************************************
** Form generated from reading UI file 'acuityexam.ui'
**
** Created: Sat Mar 28 18:33:41 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACUITYEXAM_H
#define UI_ACUITYEXAM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_acuityexam
{
public:
    QLabel *label;

    void setupUi(QDialog *acuityexam)
    {
        if (acuityexam->objectName().isEmpty())
            acuityexam->setObjectName(QString::fromUtf8("acuityexam"));
        acuityexam->resize(400, 300);
        label = new QLabel(acuityexam);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 140, 47, 13));

        retranslateUi(acuityexam);

        QMetaObject::connectSlotsByName(acuityexam);
    } // setupUi

    void retranslateUi(QDialog *acuityexam)
    {
        acuityexam->setWindowTitle(QApplication::translate("acuityexam", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("acuityexam", "Exam...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class acuityexam: public Ui_acuityexam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACUITYEXAM_H
