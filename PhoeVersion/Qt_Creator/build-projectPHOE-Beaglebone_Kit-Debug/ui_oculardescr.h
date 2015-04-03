/********************************************************************************
** Form generated from reading UI file 'oculardescr.ui'
**
** Created: Sat Mar 28 18:33:41 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OCULARDESCR_H
#define UI_OCULARDESCR_H

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

class Ui_oculardescr
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ocudescrbackButton;
    QPushButton *ocudescrconButton;

    void setupUi(QDialog *oculardescr)
    {
        if (oculardescr->objectName().isEmpty())
            oculardescr->setObjectName(QString::fromUtf8("oculardescr"));
        oculardescr->resize(400, 300);
        label = new QLabel(oculardescr);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 130, 251, 16));
        widget = new QWidget(oculardescr);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 190, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ocudescrbackButton = new QPushButton(widget);
        ocudescrbackButton->setObjectName(QString::fromUtf8("ocudescrbackButton"));

        horizontalLayout->addWidget(ocudescrbackButton);

        ocudescrconButton = new QPushButton(widget);
        ocudescrconButton->setObjectName(QString::fromUtf8("ocudescrconButton"));

        horizontalLayout->addWidget(ocudescrconButton);


        retranslateUi(oculardescr);

        QMetaObject::connectSlotsByName(oculardescr);
    } // setupUi

    void retranslateUi(QDialog *oculardescr)
    {
        oculardescr->setWindowTitle(QApplication::translate("oculardescr", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("oculardescr", "Theocular exam will consist of...", 0, QApplication::UnicodeUTF8));
        ocudescrbackButton->setText(QApplication::translate("oculardescr", "<- BACK", 0, QApplication::UnicodeUTF8));
        ocudescrconButton->setText(QApplication::translate("oculardescr", "CONTINUE", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class oculardescr: public Ui_oculardescr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OCULARDESCR_H
