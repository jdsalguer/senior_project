/********************************************************************************
** Form generated from reading UI file 'fundusdescr.ui'
**
** Created: Tue Apr 28 13:53:08 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNDUSDESCR_H
#define UI_FUNDUSDESCR_H

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

class Ui_fundusdescr
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *fundesbackButton;
    QPushButton *fundesconButton;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *fundusdescr)
    {
        if (fundusdescr->objectName().isEmpty())
            fundusdescr->setObjectName(QString::fromUtf8("fundusdescr"));
        fundusdescr->resize(800, 465);
        widget = new QWidget(fundusdescr);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 380, 571, 71));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        fundesbackButton = new QPushButton(widget);
        fundesbackButton->setObjectName(QString::fromUtf8("fundesbackButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fundesbackButton->sizePolicy().hasHeightForWidth());
        fundesbackButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        fundesbackButton->setFont(font);

        horizontalLayout->addWidget(fundesbackButton);

        fundesconButton = new QPushButton(widget);
        fundesconButton->setObjectName(QString::fromUtf8("fundesconButton"));
        sizePolicy.setHeightForWidth(fundesconButton->sizePolicy().hasHeightForWidth());
        fundesconButton->setSizePolicy(sizePolicy);
        fundesconButton->setFont(font);

        horizontalLayout->addWidget(fundesconButton);

        textBrowser = new QTextBrowser(fundusdescr);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 10, 761, 351));
        textBrowser->raise();
        fundesbackButton->raise();

        retranslateUi(fundusdescr);

        QMetaObject::connectSlotsByName(fundusdescr);
    } // setupUi

    void retranslateUi(QDialog *fundusdescr)
    {
        fundusdescr->setWindowTitle(QApplication::translate("fundusdescr", "Dialog", 0, QApplication::UnicodeUTF8));
        fundesbackButton->setText(QApplication::translate("fundusdescr", "<- BACK", 0, QApplication::UnicodeUTF8));
        fundesconButton->setText(QApplication::translate("fundusdescr", "CONTINUE", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("fundusdescr", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:150%;\"><span style=\" font-size:16pt; text-decoration: underline;\">Fundus</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:150%;\"><span style=\" font-size:16pt;\">The facilitator will be asked to set up the lens stand in the proper location, add the attachment, and move the device to the location at the end of the attachment. You will be instructed to place your head in the chin rest to allow for more accurate results. You will be looking through the len"
                        "s with the device on the other side of the lens. In order to naturally dilate the eye, environmental lighting will be turned off. A light will shine through the lens into your eye. This will allow for the camera to view the fundus. The camera will take pictures of this process to get a picture of your fundus.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fundusdescr: public Ui_fundusdescr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNDUSDESCR_H
