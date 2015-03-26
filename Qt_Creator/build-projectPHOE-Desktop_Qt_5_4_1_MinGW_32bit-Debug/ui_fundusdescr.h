/********************************************************************************
** Form generated from reading UI file 'fundusdescr.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNDUSDESCR_H
#define UI_FUNDUSDESCR_H

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
            fundusdescr->setObjectName(QStringLiteral("fundusdescr"));
        fundusdescr->resize(400, 300);
        label = new QLabel(fundusdescr);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 120, 251, 41));
        widget = new QWidget(fundusdescr);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(90, 190, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        fundesbackButton = new QPushButton(widget);
        fundesbackButton->setObjectName(QStringLiteral("fundesbackButton"));

        horizontalLayout->addWidget(fundesbackButton);

        fundesconButton = new QPushButton(widget);
        fundesconButton->setObjectName(QStringLiteral("fundesconButton"));

        horizontalLayout->addWidget(fundesconButton);


        retranslateUi(fundusdescr);

        QMetaObject::connectSlotsByName(fundusdescr);
    } // setupUi

    void retranslateUi(QDialog *fundusdescr)
    {
        fundusdescr->setWindowTitle(QApplication::translate("fundusdescr", "Dialog", 0));
        label->setText(QApplication::translate("fundusdescr", "the fundus exam will consist of...", 0));
        fundesbackButton->setText(QApplication::translate("fundusdescr", "<- BACK", 0));
        fundesconButton->setText(QApplication::translate("fundusdescr", "CONTINUE", 0));
    } // retranslateUi

};

namespace Ui {
    class fundusdescr: public Ui_fundusdescr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNDUSDESCR_H
