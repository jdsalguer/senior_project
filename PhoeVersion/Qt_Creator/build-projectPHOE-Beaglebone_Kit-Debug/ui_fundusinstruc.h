/********************************************************************************
** Form generated from reading UI file 'fundusinstruc.ui'
**
** Created: Sat Mar 28 18:33:41 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNDUSINSTRUC_H
#define UI_FUNDUSINSTRUC_H

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

class Ui_fundusinstruc
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *funinsbackButton;
    QPushButton *funinsbegButton;

    void setupUi(QDialog *fundusinstruc)
    {
        if (fundusinstruc->objectName().isEmpty())
            fundusinstruc->setObjectName(QString::fromUtf8("fundusinstruc"));
        fundusinstruc->resize(400, 300);
        label = new QLabel(fundusinstruc);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 120, 181, 16));
        widget = new QWidget(fundusinstruc);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(130, 190, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        funinsbackButton = new QPushButton(widget);
        funinsbackButton->setObjectName(QString::fromUtf8("funinsbackButton"));

        horizontalLayout->addWidget(funinsbackButton);

        funinsbegButton = new QPushButton(widget);
        funinsbegButton->setObjectName(QString::fromUtf8("funinsbegButton"));

        horizontalLayout->addWidget(funinsbegButton);


        retranslateUi(fundusinstruc);

        QMetaObject::connectSlotsByName(fundusinstruc);
    } // setupUi

    void retranslateUi(QDialog *fundusinstruc)
    {
        fundusinstruc->setWindowTitle(QApplication::translate("fundusinstruc", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("fundusinstruc", "instructions....", 0, QApplication::UnicodeUTF8));
        funinsbackButton->setText(QApplication::translate("fundusinstruc", "<-BACK", 0, QApplication::UnicodeUTF8));
        funinsbegButton->setText(QApplication::translate("fundusinstruc", "BEGIN", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fundusinstruc: public Ui_fundusinstruc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNDUSINSTRUC_H
