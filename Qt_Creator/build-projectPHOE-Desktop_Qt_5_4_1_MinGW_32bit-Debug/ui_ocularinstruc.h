/********************************************************************************
** Form generated from reading UI file 'ocularinstruc.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OCULARINSTRUC_H
#define UI_OCULARINSTRUC_H

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

class Ui_ocularinstruc
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ocuinstbackButton;
    QPushButton *ocuinstbegButton;

    void setupUi(QDialog *ocularinstruc)
    {
        if (ocularinstruc->objectName().isEmpty())
            ocularinstruc->setObjectName(QStringLiteral("ocularinstruc"));
        ocularinstruc->resize(800, 465);
        label = new QLabel(ocularinstruc);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 120, 171, 16));
        layoutWidget = new QWidget(ocularinstruc);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 170, 158, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ocuinstbackButton = new QPushButton(layoutWidget);
        ocuinstbackButton->setObjectName(QStringLiteral("ocuinstbackButton"));

        horizontalLayout->addWidget(ocuinstbackButton);

        ocuinstbegButton = new QPushButton(layoutWidget);
        ocuinstbegButton->setObjectName(QStringLiteral("ocuinstbegButton"));

        horizontalLayout->addWidget(ocuinstbegButton);


        retranslateUi(ocularinstruc);

        QMetaObject::connectSlotsByName(ocularinstruc);
    } // setupUi

    void retranslateUi(QDialog *ocularinstruc)
    {
        ocularinstruc->setWindowTitle(QApplication::translate("ocularinstruc", "Dialog", 0));
        label->setText(QApplication::translate("ocularinstruc", "instructions...", 0));
        ocuinstbackButton->setText(QApplication::translate("ocularinstruc", "<- BACK", 0));
        ocuinstbegButton->setText(QApplication::translate("ocularinstruc", "BEGIN", 0));
    } // retranslateUi

};

namespace Ui {
    class ocularinstruc: public Ui_ocularinstruc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OCULARINSTRUC_H
