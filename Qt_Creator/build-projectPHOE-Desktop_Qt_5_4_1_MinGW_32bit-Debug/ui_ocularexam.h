/********************************************************************************
** Form generated from reading UI file 'ocularexam.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OCULAREXAM_H
#define UI_OCULAREXAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ocularexam
{
public:
    QLabel *label;

    void setupUi(QDialog *ocularexam)
    {
        if (ocularexam->objectName().isEmpty())
            ocularexam->setObjectName(QStringLiteral("ocularexam"));
        ocularexam->resize(400, 300);
        label = new QLabel(ocularexam);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 140, 51, 16));

        retranslateUi(ocularexam);

        QMetaObject::connectSlotsByName(ocularexam);
    } // setupUi

    void retranslateUi(QDialog *ocularexam)
    {
        ocularexam->setWindowTitle(QApplication::translate("ocularexam", "Dialog", 0));
        label->setText(QApplication::translate("ocularexam", "exam...", 0));
    } // retranslateUi

};

namespace Ui {
    class ocularexam: public Ui_ocularexam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OCULAREXAM_H
