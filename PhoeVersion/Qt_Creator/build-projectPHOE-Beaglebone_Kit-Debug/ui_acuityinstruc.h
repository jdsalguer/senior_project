/********************************************************************************
** Form generated from reading UI file 'acuityinstruc.ui'
**
** Created: Sat Mar 28 18:33:41 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACUITYINSTRUC_H
#define UI_ACUITYINSTRUC_H

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
            acuityinstruc->setObjectName(QString::fromUtf8("acuityinstruc"));
        acuityinstruc->resize(400, 300);
        label = new QLabel(acuityinstruc);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 110, 91, 16));
        widget = new QWidget(acuityinstruc);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 170, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ainstrucbakButton = new QPushButton(widget);
        ainstrucbakButton->setObjectName(QString::fromUtf8("ainstrucbakButton"));

        horizontalLayout->addWidget(ainstrucbakButton);

        ainstrucbegButton = new QPushButton(widget);
        ainstrucbegButton->setObjectName(QString::fromUtf8("ainstrucbegButton"));

        horizontalLayout->addWidget(ainstrucbegButton);


        retranslateUi(acuityinstruc);

        QMetaObject::connectSlotsByName(acuityinstruc);
    } // setupUi

    void retranslateUi(QDialog *acuityinstruc)
    {
        acuityinstruc->setWindowTitle(QApplication::translate("acuityinstruc", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("acuityinstruc", "instructions...", 0, QApplication::UnicodeUTF8));
        ainstrucbakButton->setText(QApplication::translate("acuityinstruc", "<- BACK", 0, QApplication::UnicodeUTF8));
        ainstrucbegButton->setText(QApplication::translate("acuityinstruc", "BEGIN", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class acuityinstruc: public Ui_acuityinstruc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACUITYINSTRUC_H
