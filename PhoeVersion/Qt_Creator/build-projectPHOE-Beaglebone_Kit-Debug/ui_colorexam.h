/********************************************************************************
** Form generated from reading UI file 'colorexam.ui'
**
** Created: Sat Mar 28 18:33:41 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLOREXAM_H
#define UI_COLOREXAM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_colorexam
{
public:
    QLabel *label;

    void setupUi(QDialog *colorexam)
    {
        if (colorexam->objectName().isEmpty())
            colorexam->setObjectName(QString::fromUtf8("colorexam"));
        colorexam->resize(400, 300);
        label = new QLabel(colorexam);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 130, 171, 16));

        retranslateUi(colorexam);

        QMetaObject::connectSlotsByName(colorexam);
    } // setupUi

    void retranslateUi(QDialog *colorexam)
    {
        colorexam->setWindowTitle(QApplication::translate("colorexam", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("colorexam", "exam...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class colorexam: public Ui_colorexam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLOREXAM_H
