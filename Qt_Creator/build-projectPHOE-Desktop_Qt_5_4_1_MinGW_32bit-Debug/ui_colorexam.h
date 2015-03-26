/********************************************************************************
** Form generated from reading UI file 'colorexam.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLOREXAM_H
#define UI_COLOREXAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_colorexam
{
public:
    QLabel *label;

    void setupUi(QDialog *colorexam)
    {
        if (colorexam->objectName().isEmpty())
            colorexam->setObjectName(QStringLiteral("colorexam"));
        colorexam->resize(400, 300);
        label = new QLabel(colorexam);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 130, 171, 16));

        retranslateUi(colorexam);

        QMetaObject::connectSlotsByName(colorexam);
    } // setupUi

    void retranslateUi(QDialog *colorexam)
    {
        colorexam->setWindowTitle(QApplication::translate("colorexam", "Dialog", 0));
        label->setText(QApplication::translate("colorexam", "exam...", 0));
    } // retranslateUi

};

namespace Ui {
    class colorexam: public Ui_colorexam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLOREXAM_H
