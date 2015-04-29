/********************************************************************************
** Form generated from reading UI file 'fielddescr.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIELDDESCR_H
#define UI_FIELDDESCR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fielddescr
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QPushButton *fielddescrbakButton;
    QPushButton *fielddescrcontButton;

    void setupUi(QDialog *fielddescr)
    {
        if (fielddescr->objectName().isEmpty())
            fielddescr->setObjectName(QStringLiteral("fielddescr"));
        fielddescr->resize(800, 465);
        widget = new QWidget(fielddescr);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 781, 451));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        fielddescrbakButton = new QPushButton(widget);
        fielddescrbakButton->setObjectName(QStringLiteral("fielddescrbakButton"));

        horizontalLayout->addWidget(fielddescrbakButton);

        fielddescrcontButton = new QPushButton(widget);
        fielddescrcontButton->setObjectName(QStringLiteral("fielddescrcontButton"));

        horizontalLayout->addWidget(fielddescrcontButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(fielddescr);

        QMetaObject::connectSlotsByName(fielddescr);
    } // setupUi

    void retranslateUi(QDialog *fielddescr)
    {
        fielddescr->setWindowTitle(QApplication::translate("fielddescr", "Dialog", 0));
        textBrowser->setHtml(QApplication::translate("fielddescr", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-"
                        "indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Visual Field</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">This examination is broken down into two parts. The first part tests peripheral vision, while the second part tests response to light. For the first part of the examination you will place their head in the chin rest. Your head will be placed in the chin rest to allow for accurate distances to be constant for the intentions of proper examination. You will be instructed to look at a fixation point. While looking at that fixation po"
                        "int, a dot will slowly encroach on the screen. You will touch the screen when you first notice the dot encroaching in your peripheral vision. This will be done for a dot encroaching from the right, the left, the top of the screen and the bottom of the screen. These results will then be used to generate a peripheral vision map. At times throughout this examination the facilitator will be instructed to move the chin rest to different angles, and move the device up or down. To test the second part of the visual fields examination,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">environmental lighting will be used. You will be asked to look at a fixation point. The facilitator will then turn the lights off for a few seconds before turning the lights back on again. This will allow for natural eye dilation. The camera will take pictures during this process to record your ocular response to light.<"
                        "/span></p></body></html>", 0));
        fielddescrbakButton->setText(QApplication::translate("fielddescr", "<- BACK", 0));
        fielddescrcontButton->setText(QApplication::translate("fielddescr", "CONTINUE", 0));
    } // retranslateUi

};

namespace Ui {
    class fielddescr: public Ui_fielddescr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIELDDESCR_H
