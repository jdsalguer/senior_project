/********************************************************************************
** Form generated from reading UI file 'acuityinstruc.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACUITYINSTRUC_H
#define UI_ACUITYINSTRUC_H

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

class Ui_acuityinstruc
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ainstrucbakButton;
    QPushButton *ainstrucbegButton;

    void setupUi(QDialog *acuityinstruc)
    {
        if (acuityinstruc->objectName().isEmpty())
            acuityinstruc->setObjectName(QStringLiteral("acuityinstruc"));
        acuityinstruc->resize(400, 300);
        label = new QLabel(acuityinstruc);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 110, 91, 16));
        widget = new QWidget(acuityinstruc);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 170, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ainstrucbakButton = new QPushButton(widget);
        ainstrucbakButton->setObjectName(QStringLiteral("ainstrucbakButton"));

        horizontalLayout->addWidget(ainstrucbakButton);

        ainstrucbegButton = new QPushButton(widget);
        ainstrucbegButton->setObjectName(QStringLiteral("ainstrucbegButton"));

        horizontalLayout->addWidget(ainstrucbegButton);


        retranslateUi(acuityinstruc);

        QMetaObject::connectSlotsByName(acuityinstruc);
    } // setupUi

    void retranslateUi(QDialog *acuityinstruc)
    {
        acuityinstruc->setWindowTitle(QApplication::translate("acuityinstruc", "Dialog", 0));
        label->setText(QApplication::translate("acuityinstruc", "instructions...", 0));
        ainstrucbakButton->setText(QApplication::translate("acuityinstruc", "<- BACK", 0));
        ainstrucbegButton->setText(QApplication::translate("acuityinstruc", "BEGIN", 0));
    } // retranslateUi

};

namespace Ui {
    class acuityinstruc: public Ui_acuityinstruc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACUITYINSTRUC_H
