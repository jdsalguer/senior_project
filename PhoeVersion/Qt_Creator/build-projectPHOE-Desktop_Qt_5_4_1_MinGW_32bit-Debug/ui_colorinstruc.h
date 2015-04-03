/********************************************************************************
** Form generated from reading UI file 'colorinstruc.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORINSTRUC_H
#define UI_COLORINSTRUC_H

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
            colorinstruc->setObjectName(QStringLiteral("colorinstruc"));
        colorinstruc->resize(400, 300);
        label = new QLabel(colorinstruc);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 130, 251, 16));
        widget = new QWidget(colorinstruc);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 170, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cinstrucbakButton = new QPushButton(widget);
        cinstrucbakButton->setObjectName(QStringLiteral("cinstrucbakButton"));

        horizontalLayout->addWidget(cinstrucbakButton);

        cinstrucbegButton = new QPushButton(widget);
        cinstrucbegButton->setObjectName(QStringLiteral("cinstrucbegButton"));

        horizontalLayout->addWidget(cinstrucbegButton);


        retranslateUi(colorinstruc);

        QMetaObject::connectSlotsByName(colorinstruc);
    } // setupUi

    void retranslateUi(QDialog *colorinstruc)
    {
        colorinstruc->setWindowTitle(QApplication::translate("colorinstruc", "Dialog", 0));
        label->setText(QApplication::translate("colorinstruc", "instructions...", 0));
        cinstrucbakButton->setText(QApplication::translate("colorinstruc", "<- BACK", 0));
        cinstrucbegButton->setText(QApplication::translate("colorinstruc", "BEGIN", 0));
    } // retranslateUi

};

namespace Ui {
    class colorinstruc: public Ui_colorinstruc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORINSTRUC_H
