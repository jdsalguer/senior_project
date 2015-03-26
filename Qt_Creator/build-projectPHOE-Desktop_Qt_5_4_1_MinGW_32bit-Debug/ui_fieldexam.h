/********************************************************************************
** Form generated from reading UI file 'fieldexam.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIELDEXAM_H
#define UI_FIELDEXAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_fieldexam
{
public:
    QLabel *label;

    void setupUi(QDialog *fieldexam)
    {
        if (fieldexam->objectName().isEmpty())
            fieldexam->setObjectName(QStringLiteral("fieldexam"));
        fieldexam->resize(400, 300);
        label = new QLabel(fieldexam);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 130, 47, 13));

        retranslateUi(fieldexam);

        QMetaObject::connectSlotsByName(fieldexam);
    } // setupUi

    void retranslateUi(QDialog *fieldexam)
    {
        fieldexam->setWindowTitle(QApplication::translate("fieldexam", "Dialog", 0));
        label->setText(QApplication::translate("fieldexam", "exam...", 0));
    } // retranslateUi

};

namespace Ui {
    class fieldexam: public Ui_fieldexam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIELDEXAM_H
