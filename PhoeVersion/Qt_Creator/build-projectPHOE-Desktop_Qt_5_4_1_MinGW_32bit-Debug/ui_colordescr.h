/********************************************************************************
** Form generated from reading UI file 'colordescr.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORDESCR_H
#define UI_COLORDESCR_H

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

class Ui_colordescr
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *cdescrbakButton;
    QPushButton *cdescrcontButton;

    void setupUi(QDialog *colordescr)
    {
        if (colordescr->objectName().isEmpty())
            colordescr->setObjectName(QStringLiteral("colordescr"));
        colordescr->resize(400, 300);
        label = new QLabel(colordescr);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 120, 241, 16));
        widget = new QWidget(colordescr);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 170, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cdescrbakButton = new QPushButton(widget);
        cdescrbakButton->setObjectName(QStringLiteral("cdescrbakButton"));

        horizontalLayout->addWidget(cdescrbakButton);

        cdescrcontButton = new QPushButton(widget);
        cdescrcontButton->setObjectName(QStringLiteral("cdescrcontButton"));

        horizontalLayout->addWidget(cdescrcontButton);


        retranslateUi(colordescr);

        QMetaObject::connectSlotsByName(colordescr);
    } // setupUi

    void retranslateUi(QDialog *colordescr)
    {
        colordescr->setWindowTitle(QApplication::translate("colordescr", "Dialog", 0));
        label->setText(QApplication::translate("colordescr", "The color blindness exam will consist of ...", 0));
        cdescrbakButton->setText(QApplication::translate("colordescr", "<- BACK", 0));
        cdescrcontButton->setText(QApplication::translate("colordescr", "CONTINUE", 0));
    } // retranslateUi

};

namespace Ui {
    class colordescr: public Ui_colordescr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORDESCR_H
