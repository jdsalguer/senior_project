/********************************************************************************
** Form generated from reading UI file 'ocularinstruc.ui'
**
** Created: Sat Mar 28 18:33:41 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OCULARINSTRUC_H
#define UI_OCULARINSTRUC_H

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

class Ui_ocularinstruc
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ocuinstbackButton;
    QPushButton *ocuinstbegButton;

    void setupUi(QDialog *ocularinstruc)
    {
        if (ocularinstruc->objectName().isEmpty())
            ocularinstruc->setObjectName(QString::fromUtf8("ocularinstruc"));
        ocularinstruc->resize(400, 300);
        label = new QLabel(ocularinstruc);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 120, 171, 16));
        widget = new QWidget(ocularinstruc);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 170, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ocuinstbackButton = new QPushButton(widget);
        ocuinstbackButton->setObjectName(QString::fromUtf8("ocuinstbackButton"));

        horizontalLayout->addWidget(ocuinstbackButton);

        ocuinstbegButton = new QPushButton(widget);
        ocuinstbegButton->setObjectName(QString::fromUtf8("ocuinstbegButton"));

        horizontalLayout->addWidget(ocuinstbegButton);


        retranslateUi(ocularinstruc);

        QMetaObject::connectSlotsByName(ocularinstruc);
    } // setupUi

    void retranslateUi(QDialog *ocularinstruc)
    {
        ocularinstruc->setWindowTitle(QApplication::translate("ocularinstruc", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ocularinstruc", "instructions...", 0, QApplication::UnicodeUTF8));
        ocuinstbackButton->setText(QApplication::translate("ocularinstruc", "<- BACK", 0, QApplication::UnicodeUTF8));
        ocuinstbegButton->setText(QApplication::translate("ocularinstruc", "BEGIN", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ocularinstruc: public Ui_ocularinstruc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OCULARINSTRUC_H
