/********************************************************************************
** Form generated from reading UI file 'fieldinstruc.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIELDINSTRUC_H
#define UI_FIELDINSTRUC_H

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

class Ui_fieldinstruc
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *fieldinstrucbakButton;
    QPushButton *fieldinstrucbegButton;

    void setupUi(QDialog *fieldinstruc)
    {
        if (fieldinstruc->objectName().isEmpty())
            fieldinstruc->setObjectName(QStringLiteral("fieldinstruc"));
        fieldinstruc->resize(400, 300);
        label = new QLabel(fieldinstruc);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 110, 311, 16));
        widget = new QWidget(fieldinstruc);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(100, 190, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        fieldinstrucbakButton = new QPushButton(widget);
        fieldinstrucbakButton->setObjectName(QStringLiteral("fieldinstrucbakButton"));

        horizontalLayout->addWidget(fieldinstrucbakButton);

        fieldinstrucbegButton = new QPushButton(widget);
        fieldinstrucbegButton->setObjectName(QStringLiteral("fieldinstrucbegButton"));

        horizontalLayout->addWidget(fieldinstrucbegButton);


        retranslateUi(fieldinstruc);

        QMetaObject::connectSlotsByName(fieldinstruc);
    } // setupUi

    void retranslateUi(QDialog *fieldinstruc)
    {
        fieldinstruc->setWindowTitle(QApplication::translate("fieldinstruc", "Dialog", 0));
        label->setText(QApplication::translate("fieldinstruc", "Instructions...", 0));
        fieldinstrucbakButton->setText(QApplication::translate("fieldinstruc", "<- BACK", 0));
        fieldinstrucbegButton->setText(QApplication::translate("fieldinstruc", "BEGIN", 0));
    } // retranslateUi

};

namespace Ui {
    class fieldinstruc: public Ui_fieldinstruc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIELDINSTRUC_H
