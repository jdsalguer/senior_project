/********************************************************************************
** Form generated from reading UI file 'ocularexam.ui'
**
** Created: Sat Mar 28 18:33:41 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OCULAREXAM_H
#define UI_OCULAREXAM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ocularexam
{
public:
    QLabel *label;

    void setupUi(QDialog *ocularexam)
    {
        if (ocularexam->objectName().isEmpty())
            ocularexam->setObjectName(QString::fromUtf8("ocularexam"));
        ocularexam->resize(400, 300);
        label = new QLabel(ocularexam);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 140, 51, 16));

        retranslateUi(ocularexam);

        QMetaObject::connectSlotsByName(ocularexam);
    } // setupUi

    void retranslateUi(QDialog *ocularexam)
    {
        ocularexam->setWindowTitle(QApplication::translate("ocularexam", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ocularexam", "exam...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ocularexam: public Ui_ocularexam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OCULAREXAM_H
