/********************************************************************************
** Form generated from reading UI file 'acuitydescr.ui'
**
** Created: Sat Mar 28 18:33:41 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACUITYDESCR_H
#define UI_ACUITYDESCR_H

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

class Ui_acuitydescr
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *adescrbakButton;
    QPushButton *adescrcontButton;

    void setupUi(QDialog *acuitydescr)
    {
        if (acuitydescr->objectName().isEmpty())
            acuitydescr->setObjectName(QString::fromUtf8("acuitydescr"));
        acuitydescr->resize(400, 300);
        label = new QLabel(acuitydescr);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 80, 331, 81));
        widget = new QWidget(acuitydescr);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 170, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        adescrbakButton = new QPushButton(widget);
        adescrbakButton->setObjectName(QString::fromUtf8("adescrbakButton"));

        horizontalLayout->addWidget(adescrbakButton);

        adescrcontButton = new QPushButton(widget);
        adescrcontButton->setObjectName(QString::fromUtf8("adescrcontButton"));

        horizontalLayout->addWidget(adescrcontButton);


        retranslateUi(acuitydescr);

        QMetaObject::connectSlotsByName(acuitydescr);
    } // setupUi

    void retranslateUi(QDialog *acuitydescr)
    {
        acuitydescr->setWindowTitle(QApplication::translate("acuitydescr", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("acuitydescr", "The acuity fields exam will consist \n"
" of...gggggggggggggg", 0, QApplication::UnicodeUTF8));
        adescrbakButton->setText(QApplication::translate("acuitydescr", "<- BACK", 0, QApplication::UnicodeUTF8));
        adescrcontButton->setText(QApplication::translate("acuitydescr", "CONTINUE", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class acuitydescr: public Ui_acuitydescr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACUITYDESCR_H
