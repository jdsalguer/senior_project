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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *cinstrucbakButton;
    QPushButton *cinstrucbegButton;

    void setupUi(QDialog *colorinstruc)
    {
        if (colorinstruc->objectName().isEmpty())
            colorinstruc->setObjectName(QStringLiteral("colorinstruc"));
        colorinstruc->resize(800, 465);
        label = new QLabel(colorinstruc);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 130, 251, 16));
        layoutWidget = new QWidget(colorinstruc);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 170, 158, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cinstrucbakButton = new QPushButton(layoutWidget);
        cinstrucbakButton->setObjectName(QStringLiteral("cinstrucbakButton"));

        horizontalLayout->addWidget(cinstrucbakButton);

        cinstrucbegButton = new QPushButton(layoutWidget);
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
