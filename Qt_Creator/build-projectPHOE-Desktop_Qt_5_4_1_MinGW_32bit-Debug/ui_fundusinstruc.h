/********************************************************************************
** Form generated from reading UI file 'fundusinstruc.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNDUSINSTRUC_H
#define UI_FUNDUSINSTRUC_H

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
            fundusinstruc->setObjectName(QStringLiteral("fundusinstruc"));
        fundusinstruc->resize(400, 300);
        label = new QLabel(fundusinstruc);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 120, 181, 16));
        widget = new QWidget(fundusinstruc);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(130, 190, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        funinsbackButton = new QPushButton(widget);
        funinsbackButton->setObjectName(QStringLiteral("funinsbackButton"));

        horizontalLayout->addWidget(funinsbackButton);

        funinsbegButton = new QPushButton(widget);
        funinsbegButton->setObjectName(QStringLiteral("funinsbegButton"));

        horizontalLayout->addWidget(funinsbegButton);


        retranslateUi(fundusinstruc);

        QMetaObject::connectSlotsByName(fundusinstruc);
    } // setupUi

    void retranslateUi(QDialog *fundusinstruc)
    {
        fundusinstruc->setWindowTitle(QApplication::translate("fundusinstruc", "Dialog", 0));
        label->setText(QApplication::translate("fundusinstruc", "instructions....", 0));
        funinsbackButton->setText(QApplication::translate("fundusinstruc", "<-BACK", 0));
        funinsbegButton->setText(QApplication::translate("fundusinstruc", "BEGIN", 0));
    } // retranslateUi

};

namespace Ui {
    class fundusinstruc: public Ui_fundusinstruc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNDUSINSTRUC_H
