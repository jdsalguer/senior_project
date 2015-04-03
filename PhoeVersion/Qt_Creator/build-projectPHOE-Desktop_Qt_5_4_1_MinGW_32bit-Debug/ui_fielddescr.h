/********************************************************************************
** Form generated from reading UI file 'fielddescr.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIELDDESCR_H
#define UI_FIELDDESCR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

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
            fielddescr->setObjectName(QStringLiteral("fielddescr"));
        fielddescr->resize(400, 300);
        label = new QLabel(fielddescr);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 120, 211, 16));
        widget = new QWidget(fielddescr);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(90, 180, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        fielddescrbakButton = new QPushButton(widget);
        fielddescrbakButton->setObjectName(QStringLiteral("fielddescrbakButton"));

        horizontalLayout->addWidget(fielddescrbakButton);

        fielddescrcontButton = new QPushButton(widget);
        fielddescrcontButton->setObjectName(QStringLiteral("fielddescrcontButton"));

        horizontalLayout->addWidget(fielddescrcontButton);


        retranslateUi(fielddescr);

        QMetaObject::connectSlotsByName(fielddescr);
    } // setupUi

    void retranslateUi(QDialog *fielddescr)
    {
        fielddescr->setWindowTitle(QApplication::translate("fielddescr", "Dialog", 0));
        label->setText(QApplication::translate("fielddescr", "The visual field exam will consist of...", 0));
        fielddescrbakButton->setText(QApplication::translate("fielddescr", "<- BACK", 0));
        fielddescrcontButton->setText(QApplication::translate("fielddescr", "CONTINUE", 0));
    } // retranslateUi

};

namespace Ui {
    class fielddescr: public Ui_fielddescr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIELDDESCR_H
