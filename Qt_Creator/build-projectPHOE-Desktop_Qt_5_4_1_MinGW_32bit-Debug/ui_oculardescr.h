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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_oculardescr
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QPushButton *ocudescrbackButton;
    QPushButton *ocudescrconButton;

    void setupUi(QDialog *oculardescr)
    {
        if (oculardescr->objectName().isEmpty())
            oculardescr->setObjectName(QStringLiteral("oculardescr"));
        oculardescr->resize(800, 465);
        widget = new QWidget(oculardescr);
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
        ocudescrbackButton = new QPushButton(widget);
        ocudescrbackButton->setObjectName(QStringLiteral("ocudescrbackButton"));

        horizontalLayout->addWidget(ocudescrbackButton);

        ocudescrconButton = new QPushButton(widget);
        ocudescrconButton->setObjectName(QStringLiteral("ocudescrconButton"));

        horizontalLayout->addWidget(ocudescrconButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(oculardescr);

        QMetaObject::connectSlotsByName(oculardescr);
    } // setupUi

    void retranslateUi(QDialog *oculardescr)
    {
        oculardescr->setWindowTitle(QApplication::translate("oculardescr", "Dialog", 0));
        textBrowser->setHtml(QApplication::translate("oculardescr", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
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
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Ocular Movements</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">The ocular movement\342\200\231s examinat"
                        "ion will test binocular eye movement while the head is fixed. Binocular vision incorporates the use of both eyes simultaneously. Ocular movement will be tested in the directions: upwards, downwards, right and left. The fixation point will first be located at the center of the screen at the start of each ocular movement test. The fixation point will then slowly move either upwards, downwards, right or left. Pictures will be taken of the eyes as they follow this fixation point. For this examination your head will be placed in the chin rest to allow for accurate distances to be constant for the intentions of proper examination. Throughout this examination the facilitator will be instructed to move the device upwards or downwards.</span></p></body></html>", 0));
        ocudescrbackButton->setText(QApplication::translate("oculardescr", "<- BACK", 0));
        ocudescrconButton->setText(QApplication::translate("oculardescr", "CONTINUE", 0));
    } // retranslateUi

};

namespace Ui {
    class oculardescr: public Ui_oculardescr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OCULARDESCR_H
