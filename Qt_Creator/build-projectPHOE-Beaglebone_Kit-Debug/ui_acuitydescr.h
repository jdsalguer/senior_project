/********************************************************************************
** Form generated from reading UI file 'acuitydescr.ui'
**
** Created: Tue Apr 28 13:53:08 2015
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
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_acuitydescr
{
public:
    QTextBrowser *textBrowser;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *adescrbakButton;
    QPushButton *adescrcontButton;

    void setupUi(QDialog *acuitydescr)
    {
        if (acuitydescr->objectName().isEmpty())
            acuitydescr->setObjectName(QString::fromUtf8("acuitydescr"));
        acuitydescr->resize(800, 480);
        textBrowser = new QTextBrowser(acuitydescr);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 20, 771, 361));
        widget = new QWidget(acuitydescr);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(120, 410, 541, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        adescrbakButton = new QPushButton(widget);
        adescrbakButton->setObjectName(QString::fromUtf8("adescrbakButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(adescrbakButton->sizePolicy().hasHeightForWidth());
        adescrbakButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(19);
        adescrbakButton->setFont(font);

        horizontalLayout->addWidget(adescrbakButton);

        adescrcontButton = new QPushButton(widget);
        adescrcontButton->setObjectName(QString::fromUtf8("adescrcontButton"));
        sizePolicy.setHeightForWidth(adescrcontButton->sizePolicy().hasHeightForWidth());
        adescrcontButton->setSizePolicy(sizePolicy);
        adescrcontButton->setFont(font);

        horizontalLayout->addWidget(adescrcontButton);


        retranslateUi(acuitydescr);

        QMetaObject::connectSlotsByName(acuitydescr);
    } // setupUi

    void retranslateUi(QDialog *acuitydescr)
    {
        acuitydescr->setWindowTitle(QApplication::translate("acuitydescr", "Dialog", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("acuitydescr", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:150%;\"><span style=\" font-size:16pt; text-decoration: underline;\">Visual Acuity</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:150%;\"><span style=\" font-size:16pt;\">The visual acuity examination will incorporate the use of a Snellen chart. This is the chart with the letters on it ranging from large letters on the top, to smallest letters on the bottom decreasing in size as they go down the chart. You will be instructed to get six feet away from the "
                        "device. The distance sensor will notify you when you are six feet away. You will then be asked to cover one eye at a time. With one eye covered, you will read the Snellen chart. The voice output function will allow you to hear the commands that you may not be able to see in the command window. You will go through the Snellen chart, typing in your response to each line. These responses will then be compared to the correct responses. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        adescrbakButton->setText(QApplication::translate("acuitydescr", "<- BACK", 0, QApplication::UnicodeUTF8));
        adescrcontButton->setText(QApplication::translate("acuitydescr", "CONTINUE", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class acuitydescr: public Ui_acuitydescr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACUITYDESCR_H
