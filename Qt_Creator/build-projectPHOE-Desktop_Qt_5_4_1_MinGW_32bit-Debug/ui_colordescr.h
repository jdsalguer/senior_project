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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_colordescr
{
public:
    QTextBrowser *textBrowser;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *cdescrbakButton;
    QPushButton *cdescrcontButton;

    void setupUi(QDialog *colordescr)
    {
        if (colordescr->objectName().isEmpty())
            colordescr->setObjectName(QStringLiteral("colordescr"));
        colordescr->resize(800, 465);
        textBrowser = new QTextBrowser(colordescr);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 10, 761, 341));
        widget = new QWidget(colordescr);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(100, 380, 581, 61));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cdescrbakButton = new QPushButton(widget);
        cdescrbakButton->setObjectName(QStringLiteral("cdescrbakButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cdescrbakButton->sizePolicy().hasHeightForWidth());
        cdescrbakButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        cdescrbakButton->setFont(font);

        horizontalLayout->addWidget(cdescrbakButton);

        cdescrcontButton = new QPushButton(widget);
        cdescrcontButton->setObjectName(QStringLiteral("cdescrcontButton"));
        sizePolicy.setHeightForWidth(cdescrcontButton->sizePolicy().hasHeightForWidth());
        cdescrcontButton->setSizePolicy(sizePolicy);
        cdescrcontButton->setFont(font);

        horizontalLayout->addWidget(cdescrcontButton);


        retranslateUi(colordescr);

        QMetaObject::connectSlotsByName(colordescr);
    } // setupUi

    void retranslateUi(QDialog *colordescr)
    {
        colordescr->setWindowTitle(QApplication::translate("colordescr", "Dialog", 0));
        textBrowser->setHtml(QApplication::translate("colordescr", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:150%;\"><span style=\" font-size:16pt; text-decoration: underline;\">Color Blindness</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:150%;\"><span style=\" font-size:16pt;\">The color blindness examination will test your color perception. You will be shown an image that contains a splash of different colors. Within the image there will be a letter or number that, through color perception, will stand out. You will be asked to select from a list to determine"
                        " what you view in the picture. The responses provided by you will be compared to the correct responses. </span></p></body></html>", 0));
        cdescrbakButton->setText(QApplication::translate("colordescr", "<- BACK", 0));
        cdescrcontButton->setText(QApplication::translate("colordescr", "CONTINUE", 0));
    } // retranslateUi

};

namespace Ui {
    class colordescr: public Ui_colordescr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORDESCR_H
