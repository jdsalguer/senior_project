/********************************************************************************
** Form generated from reading UI file 'acuityexam.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACUITYEXAM_H
#define UI_ACUITYEXAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_acuityexam
{
public:
    QLabel *label;

    void setupUi(QDialog *acuityexam)
    {
        if (acuityexam->objectName().isEmpty())
            acuityexam->setObjectName(QStringLiteral("acuityexam"));
        acuityexam->resize(400, 300);
        label = new QLabel(acuityexam);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 140, 47, 13));

        retranslateUi(acuityexam);

        QMetaObject::connectSlotsByName(acuityexam);
    } // setupUi

    void retranslateUi(QDialog *acuityexam)
    {
        acuityexam->setWindowTitle(QApplication::translate("acuityexam", "Dialog", 0));
        label->setText(QApplication::translate("acuityexam", "Exam...", 0));
    } // retranslateUi

};

namespace Ui {
    class acuityexam: public Ui_acuityexam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACUITYEXAM_H
