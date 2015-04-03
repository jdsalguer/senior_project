/********************************************************************************
** Form generated from reading UI file 'colorinstruc.ui'
**
** Created: Sat Mar 28 18:33:41 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORINSTRUC_H
#define UI_COLORINSTRUC_H

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

class Ui_colorinstruc
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *cinstrucbakButton;
    QPushButton *cinstrucbegButton;

    void setupUi(QDialog *colorinstruc)
    {
        if (colorinstruc->objectName().isEmpty())
            colorinstruc->setObjectName(QString::fromUtf8("colorinstruc"));
        colorinstruc->resize(400, 300);
        label = new QLabel(colorinstruc);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 130, 251, 16));
        widget = new QWidget(colorinstruc);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 170, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cinstrucbakButton = new QPushButton(widget);
        cinstrucbakButton->setObjectName(QString::fromUtf8("cinstrucbakButton"));

        horizontalLayout->addWidget(cinstrucbakButton);

        cinstrucbegButton = new QPushButton(widget);
        cinstrucbegButton->setObjectName(QString::fromUtf8("cinstrucbegButton"));

        horizontalLayout->addWidget(cinstrucbegButton);


        retranslateUi(colorinstruc);

        QMetaObject::connectSlotsByName(colorinstruc);
    } // setupUi

    void retranslateUi(QDialog *colorinstruc)
    {
        colorinstruc->setWindowTitle(QApplication::translate("colorinstruc", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("colorinstruc", "instructions...", 0, QApplication::UnicodeUTF8));
        cinstrucbakButton->setText(QApplication::translate("colorinstruc", "<- BACK", 0, QApplication::UnicodeUTF8));
        cinstrucbegButton->setText(QApplication::translate("colorinstruc", "BEGIN", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class colorinstruc: public Ui_colorinstruc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORINSTRUC_H
