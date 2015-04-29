/********************************************************************************
** Form generated from reading UI file 'fieldexam.ui'
**
** Created: Tue Apr 28 13:53:08 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIELDEXAM_H
#define UI_FIELDEXAM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_fieldexam
{
public:
    QLabel *label;

    void setupUi(QDialog *fieldexam)
    {
        if (fieldexam->objectName().isEmpty())
            fieldexam->setObjectName(QString::fromUtf8("fieldexam"));
        fieldexam->resize(800, 465);
        label = new QLabel(fieldexam);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 130, 47, 13));

        retranslateUi(fieldexam);

        QMetaObject::connectSlotsByName(fieldexam);
    } // setupUi

    void retranslateUi(QDialog *fieldexam)
    {
        fieldexam->setWindowTitle(QApplication::translate("fieldexam", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("fieldexam", "exam...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fieldexam: public Ui_fieldexam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIELDEXAM_H
