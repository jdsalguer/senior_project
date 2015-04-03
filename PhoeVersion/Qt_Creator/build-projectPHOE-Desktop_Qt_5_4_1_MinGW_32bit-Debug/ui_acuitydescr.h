/********************************************************************************
** Form generated from reading UI file 'acuitydescr.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACUITYDESCR_H
#define UI_ACUITYDESCR_H

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
            acuitydescr->setObjectName(QStringLiteral("acuitydescr"));
        acuitydescr->resize(400, 300);
        label = new QLabel(acuitydescr);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 80, 331, 81));
        widget = new QWidget(acuitydescr);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(100, 170, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        adescrbakButton = new QPushButton(widget);
        adescrbakButton->setObjectName(QStringLiteral("adescrbakButton"));

        horizontalLayout->addWidget(adescrbakButton);

        adescrcontButton = new QPushButton(widget);
        adescrcontButton->setObjectName(QStringLiteral("adescrcontButton"));

        horizontalLayout->addWidget(adescrcontButton);


        retranslateUi(acuitydescr);

        QMetaObject::connectSlotsByName(acuitydescr);
    } // setupUi

    void retranslateUi(QDialog *acuitydescr)
    {
        acuitydescr->setWindowTitle(QApplication::translate("acuitydescr", "Dialog", 0));
        label->setText(QApplication::translate("acuitydescr", "The acuity fields exam will consist \n"
" of...gggggggggggggg", 0));
        adescrbakButton->setText(QApplication::translate("acuitydescr", "<- BACK", 0));
        adescrcontButton->setText(QApplication::translate("acuitydescr", "CONTINUE", 0));
    } // retranslateUi

};

namespace Ui {
    class acuitydescr: public Ui_acuitydescr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACUITYDESCR_H
