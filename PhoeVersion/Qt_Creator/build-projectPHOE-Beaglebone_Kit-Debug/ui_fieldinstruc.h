/********************************************************************************
** Form generated from reading UI file 'fieldinstruc.ui'
**
** Created: Sat Mar 28 18:33:41 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIELDINSTRUC_H
#define UI_FIELDINSTRUC_H

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
            fieldinstruc->setObjectName(QString::fromUtf8("fieldinstruc"));
        fieldinstruc->resize(400, 300);
        label = new QLabel(fieldinstruc);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 110, 311, 16));
        widget = new QWidget(fieldinstruc);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 190, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        fieldinstrucbakButton = new QPushButton(widget);
        fieldinstrucbakButton->setObjectName(QString::fromUtf8("fieldinstrucbakButton"));

        horizontalLayout->addWidget(fieldinstrucbakButton);

        fieldinstrucbegButton = new QPushButton(widget);
        fieldinstrucbegButton->setObjectName(QString::fromUtf8("fieldinstrucbegButton"));

        horizontalLayout->addWidget(fieldinstrucbegButton);


        retranslateUi(fieldinstruc);

        QMetaObject::connectSlotsByName(fieldinstruc);
    } // setupUi

    void retranslateUi(QDialog *fieldinstruc)
    {
        fieldinstruc->setWindowTitle(QApplication::translate("fieldinstruc", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("fieldinstruc", "Instructions...", 0, QApplication::UnicodeUTF8));
        fieldinstrucbakButton->setText(QApplication::translate("fieldinstruc", "<- BACK", 0, QApplication::UnicodeUTF8));
        fieldinstrucbegButton->setText(QApplication::translate("fieldinstruc", "BEGIN", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fieldinstruc: public Ui_fieldinstruc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIELDINSTRUC_H
