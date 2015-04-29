/********************************************************************************
** Form generated from reading UI file 'oculardescr.ui'
**
** Created: Tue Apr 28 13:53:08 2015
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
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_oculardescr
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ocudescrbackButton;
    QPushButton *ocudescrconButton;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *oculardescr)
    {
        if (oculardescr->objectName().isEmpty())
            oculardescr->setObjectName(QString::fromUtf8("oculardescr"));
        oculardescr->resize(800, 465);
        widget = new QWidget(oculardescr);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(70, 370, 631, 71));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ocudescrbackButton = new QPushButton(widget);
        ocudescrbackButton->setObjectName(QString::fromUtf8("ocudescrbackButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ocudescrbackButton->sizePolicy().hasHeightForWidth());
        ocudescrbackButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        ocudescrbackButton->setFont(font);

        horizontalLayout->addWidget(ocudescrbackButton);

        ocudescrconButton = new QPushButton(widget);
        ocudescrconButton->setObjectName(QString::fromUtf8("ocudescrconButton"));
        sizePolicy.setHeightForWidth(ocudescrconButton->sizePolicy().hasHeightForWidth());
        ocudescrconButton->setSizePolicy(sizePolicy);
        ocudescrconButton->setFont(font);

        horizontalLayout->addWidget(ocudescrconButton);

        textBrowser = new QTextBrowser(oculardescr);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 30, 761, 301));

        retranslateUi(oculardescr);

        QMetaObject::connectSlotsByName(oculardescr);
    } // setupUi

    void retranslateUi(QDialog *oculardescr)
    {
        oculardescr->setWindowTitle(QApplication::translate("oculardescr", "Dialog", 0, QApplication::UnicodeUTF8));
        ocudescrbackButton->setText(QApplication::translate("oculardescr", "<- BACK", 0, QApplication::UnicodeUTF8));
        ocudescrconButton->setText(QApplication::translate("oculardescr", "CONTINUE", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("oculardescr", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:150%;\"><span style=\" font-size:16pt; text-decoration: underline;\">Ocular Movements</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:150%;\"><span style=\" font-size:16pt;\">The ocular movement\342\200\231s examination will test binocular eye movement while the head is fixed. Binocular vision incorporates the use of both eyes simultaneously. Ocular movement will be tested in the directions: upwards, downwards, right and left. The fixation point will first"
                        " be located at the center of the screen at the start of each ocular movement test. The fixation point will then slowly move either upwards, downwards, right or left. Pictures will be taken of the eyes as they follow this fixation point. For this examination your head will be placed in the chin rest to allow for accurate distances to be constant for the intentions of proper examination. Throughout this examination the facilitator will be instructed to move the device upwards or downwards.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class oculardescr: public Ui_oculardescr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OCULARDESCR_H
