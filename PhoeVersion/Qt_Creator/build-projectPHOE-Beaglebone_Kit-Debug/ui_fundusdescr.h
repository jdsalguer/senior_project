/********************************************************************************
** Form generated from reading UI file 'fundusdescr.ui'
**
** Created: Sat Mar 28 18:33:41 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNDUSDESCR_H
#define UI_FUNDUSDESCR_H

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

class Ui_fundusdescr
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *fundesbackButton;
    QPushButton *fundesconButton;

    void setupUi(QDialog *fundusdescr)
    {
        if (fundusdescr->objectName().isEmpty())
            fundusdescr->setObjectName(QString::fromUtf8("fundusdescr"));
        fundusdescr->resize(400, 300);
        label = new QLabel(fundusdescr);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 120, 251, 41));
        widget = new QWidget(fundusdescr);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 190, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        fundesbackButton = new QPushButton(widget);
        fundesbackButton->setObjectName(QString::fromUtf8("fundesbackButton"));

        horizontalLayout->addWidget(fundesbackButton);

        fundesconButton = new QPushButton(widget);
        fundesconButton->setObjectName(QString::fromUtf8("fundesconButton"));

        horizontalLayout->addWidget(fundesconButton);


        retranslateUi(fundusdescr);

        QMetaObject::connectSlotsByName(fundusdescr);
    } // setupUi

    void retranslateUi(QDialog *fundusdescr)
    {
        fundusdescr->setWindowTitle(QApplication::translate("fundusdescr", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("fundusdescr", "the fundus exam will consist of...", 0, QApplication::UnicodeUTF8));
        fundesbackButton->setText(QApplication::translate("fundusdescr", "<- BACK", 0, QApplication::UnicodeUTF8));
        fundesconButton->setText(QApplication::translate("fundusdescr", "CONTINUE", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fundusdescr: public Ui_fundusdescr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNDUSDESCR_H
