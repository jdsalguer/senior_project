/********************************************************************************
** Form generated from reading UI file 'colordescr.ui'
**
** Created: Sat Mar 28 18:33:41 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORDESCR_H
#define UI_COLORDESCR_H

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
            colordescr->setObjectName(QString::fromUtf8("colordescr"));
        colordescr->resize(400, 300);
        label = new QLabel(colordescr);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 120, 241, 16));
        widget = new QWidget(colordescr);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 170, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cdescrbakButton = new QPushButton(widget);
        cdescrbakButton->setObjectName(QString::fromUtf8("cdescrbakButton"));

        horizontalLayout->addWidget(cdescrbakButton);

        cdescrcontButton = new QPushButton(widget);
        cdescrcontButton->setObjectName(QString::fromUtf8("cdescrcontButton"));

        horizontalLayout->addWidget(cdescrcontButton);


        retranslateUi(colordescr);

        QMetaObject::connectSlotsByName(colordescr);
    } // setupUi

    void retranslateUi(QDialog *colordescr)
    {
        colordescr->setWindowTitle(QApplication::translate("colordescr", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("colordescr", "The color blindness exam will consist of ...", 0, QApplication::UnicodeUTF8));
        cdescrbakButton->setText(QApplication::translate("colordescr", "<- BACK", 0, QApplication::UnicodeUTF8));
        cdescrcontButton->setText(QApplication::translate("colordescr", "CONTINUE", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class colordescr: public Ui_colordescr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORDESCR_H
