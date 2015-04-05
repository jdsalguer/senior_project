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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_acuitydescr
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QPushButton *adescrbakButton;
    QPushButton *adescrcontButton;

    void setupUi(QDialog *acuitydescr)
    {
        if (acuitydescr->objectName().isEmpty())
            acuitydescr->setObjectName(QStringLiteral("acuitydescr"));
        acuitydescr->resize(800, 465);
        widget = new QWidget(acuitydescr);
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
        adescrbakButton = new QPushButton(widget);
        adescrbakButton->setObjectName(QStringLiteral("adescrbakButton"));

        horizontalLayout->addWidget(adescrbakButton);

        adescrcontButton = new QPushButton(widget);
        adescrcontButton->setObjectName(QStringLiteral("adescrcontButton"));

        horizontalLayout->addWidget(adescrcontButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(acuitydescr);

        QMetaObject::connectSlotsByName(acuitydescr);
    } // setupUi

    void retranslateUi(QDialog *acuitydescr)
    {
        acuitydescr->setWindowTitle(QApplication::translate("acuitydescr", "Dialog", 0));
        textBrowser->setHtml(QApplication::translate("acuitydescr", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-"
                        "indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Visual Acuity</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p s"
                        "tyle=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">The visual acuity examination will incorporate the use of a Snellen chart. This is the chart with the letters on it ranging from large letters on the top, to smallest letters on the bottom decreasing in size as they go down the chart. You will be instructed to get six feet away from the device. The distance sensor will notify you when you are six feet away. You will then be asked to cover one eye at a time. With one eye covered, you will read the Snellen chart. The voice output function will allow you to hear the commands that you may not be able to see in the command window. You will go through the Snellen chart, typing in your response to each line. These responses will then be compared to the correct responses.</span></p></body></html>", 0));
        adescrbakButton->setText(QApplication::translate("acuitydescr", "<- BACK", 0));
        adescrcontButton->setText(QApplication::translate("acuitydescr", "CONTINUE", 0));
    } // retranslateUi

};

namespace Ui {
    class acuitydescr: public Ui_acuitydescr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACUITYDESCR_H
