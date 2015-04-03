/********************************************************************************
** Form generated from reading UI file 'oculardescr.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OCULARDESCR_H
#define UI_OCULARDESCR_H

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
            oculardescr->setObjectName(QStringLiteral("oculardescr"));
        oculardescr->resize(400, 300);
        label = new QLabel(oculardescr);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 130, 251, 16));
        widget = new QWidget(oculardescr);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 190, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ocudescrbackButton = new QPushButton(widget);
        ocudescrbackButton->setObjectName(QStringLiteral("ocudescrbackButton"));

        horizontalLayout->addWidget(ocudescrbackButton);

        ocudescrconButton = new QPushButton(widget);
        ocudescrconButton->setObjectName(QStringLiteral("ocudescrconButton"));

        horizontalLayout->addWidget(ocudescrconButton);


        retranslateUi(oculardescr);

        QMetaObject::connectSlotsByName(oculardescr);
    } // setupUi

    void retranslateUi(QDialog *oculardescr)
    {
        oculardescr->setWindowTitle(QApplication::translate("oculardescr", "Dialog", 0));
        label->setText(QApplication::translate("oculardescr", "Theocular exam will consist of...", 0));
        ocudescrbackButton->setText(QApplication::translate("oculardescr", "<- BACK", 0));
        ocudescrconButton->setText(QApplication::translate("oculardescr", "CONTINUE", 0));
    } // retranslateUi

};

namespace Ui {
    class oculardescr: public Ui_oculardescr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OCULARDESCR_H
