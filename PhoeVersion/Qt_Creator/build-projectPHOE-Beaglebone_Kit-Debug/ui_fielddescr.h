/********************************************************************************
** Form generated from reading UI file 'fielddescr.ui'
**
** Created: Sat Mar 28 18:33:41 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIELDDESCR_H
#define UI_FIELDDESCR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fielddescr
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *fielddescrbakButton;
    QPushButton *fielddescrcontButton;

    void setupUi(QDialog *fielddescr)
    {
        if (fielddescr->objectName().isEmpty())
            fielddescr->setObjectName(QString::fromUtf8("fielddescr"));
        fielddescr->resize(400, 300);
        label = new QLabel(fielddescr);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 120, 211, 16));
        widget = new QWidget(fielddescr);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 180, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        fielddescrbakButton = new QPushButton(widget);
        fielddescrbakButton->setObjectName(QString::fromUtf8("fielddescrbakButton"));

        horizontalLayout->addWidget(fielddescrbakButton);

        fielddescrcontButton = new QPushButton(widget);
        fielddescrcontButton->setObjectName(QString::fromUtf8("fielddescrcontButton"));

        horizontalLayout->addWidget(fielddescrcontButton);


        retranslateUi(fielddescr);

        QMetaObject::connectSlotsByName(fielddescr);
    } // setupUi

    void retranslateUi(QDialog *fielddescr)
    {
        fielddescr->setWindowTitle(QApplication::translate("fielddescr", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("fielddescr", "The visual field exam will consist of...", 0, QApplication::UnicodeUTF8));
        fielddescrbakButton->setText(QApplication::translate("fielddescr", "<- BACK", 0, QApplication::UnicodeUTF8));
        fielddescrcontButton->setText(QApplication::translate("fielddescr", "CONTINUE", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fielddescr: public Ui_fielddescr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIELDDESCR_H
