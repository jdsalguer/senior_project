/********************************************************************************
** Form generated from reading UI file 'fielddescr.ui'
**
** Created: Tue Apr 28 13:53:08 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIELDDESCR_H
#define UI_FIELDDESCR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fielddescr
{
public:
    QTextBrowser *textBrowser;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *fielddescrbakButton;
    QPushButton *fielddescrcontButton;

    void setupUi(QDialog *fielddescr)
    {
        if (fielddescr->objectName().isEmpty())
            fielddescr->setObjectName(QString::fromUtf8("fielddescr"));
        fielddescr->resize(800, 465);
        textBrowser = new QTextBrowser(fielddescr);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 10, 771, 341));
        widget = new QWidget(fielddescr);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 380, 621, 71));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        fielddescrbakButton = new QPushButton(widget);
        fielddescrbakButton->setObjectName(QString::fromUtf8("fielddescrbakButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fielddescrbakButton->sizePolicy().hasHeightForWidth());
        fielddescrbakButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        fielddescrbakButton->setFont(font);

        horizontalLayout->addWidget(fielddescrbakButton);

        fielddescrcontButton = new QPushButton(widget);
        fielddescrcontButton->setObjectName(QString::fromUtf8("fielddescrcontButton"));
        sizePolicy.setHeightForWidth(fielddescrcontButton->sizePolicy().hasHeightForWidth());
        fielddescrcontButton->setSizePolicy(sizePolicy);
        fielddescrcontButton->setFont(font);

        horizontalLayout->addWidget(fielddescrcontButton);


        retranslateUi(fielddescr);

        QMetaObject::connectSlotsByName(fielddescr);
    } // setupUi

    void retranslateUi(QDialog *fielddescr)
    {
        fielddescr->setWindowTitle(QApplication::translate("fielddescr", "Dialog", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("fielddescr", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:150%;\"><span style=\" font-size:16pt; text-decoration: underline;\">Visual Field</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:150%;\"><span style=\" font-size:16pt;\">This examination is broken down into two parts. The first part tests peripheral vision, while the second part tests response to light. For the first part of the examination you will place their head in the chin rest. Your head will be placed in the chin rest to allow for accurate distance"
                        "s to be constant for the intentions of proper examination. You will be instructed to look at a fixation point. While looking at that fixation point, a dot will slowly encroach on the screen. You will touch the screen when you first notice the dot encroaching in your peripheral vision. This will be done for a dot encroaching from the right, the left, the top of the screen and the bottom of the screen. These results will then be used to generate a peripheral vision map. At times throughout this examination the facilitator will be instructed to move the chin rest to different angles, and move the device up or down. To test the second part of the visual fields examination, environmental lighting will be used. You will be asked to look at a fixation point. The facilitator will then turn the lights off for a few seconds before turning the lights back on again. This will allow for natural eye dilation. The camera will take pictures during this process to record your ocular response to light.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        fielddescrbakButton->setText(QApplication::translate("fielddescr", "<- BACK", 0, QApplication::UnicodeUTF8));
        fielddescrcontButton->setText(QApplication::translate("fielddescr", "CONTINUE", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fielddescr: public Ui_fielddescr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIELDDESCR_H
