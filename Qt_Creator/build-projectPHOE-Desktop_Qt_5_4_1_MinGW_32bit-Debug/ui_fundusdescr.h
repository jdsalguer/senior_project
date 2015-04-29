/********************************************************************************
** Form generated from reading UI file 'fundusdescr.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNDUSDESCR_H
#define UI_FUNDUSDESCR_H

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

class Ui_fundusdescr
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QPushButton *fundesbackButton;
    QPushButton *fundesconButton;

    void setupUi(QDialog *fundusdescr)
    {
        if (fundusdescr->objectName().isEmpty())
            fundusdescr->setObjectName(QStringLiteral("fundusdescr"));
        fundusdescr->resize(800, 465);
        widget = new QWidget(fundusdescr);
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
        fundesbackButton = new QPushButton(widget);
        fundesbackButton->setObjectName(QStringLiteral("fundesbackButton"));

        horizontalLayout->addWidget(fundesbackButton);

        fundesconButton = new QPushButton(widget);
        fundesconButton->setObjectName(QStringLiteral("fundesconButton"));

        horizontalLayout->addWidget(fundesconButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(fundusdescr);

        QMetaObject::connectSlotsByName(fundusdescr);
    } // setupUi

    void retranslateUi(QDialog *fundusdescr)
    {
        fundusdescr->setWindowTitle(QApplication::translate("fundusdescr", "Dialog", 0));
        textBrowser->setHtml(QApplication::translate("fundusdescr", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-"
                        "indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Fundus</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">The facilitator will be asked to set up the lens stand in the proper location, add the attachment, and move the device to the location at the end of the attachment. You will be instructed to place your head in the chin rest to allow for more accurate results. You will be looking through the lens with the device on the other side of the lens. In order to naturally dilate the eye, environmental lighting will be turned off. A light will shine through the lens into your eye. This will allow for the camera to view the fundus. The camera will take pictures of this process to get a picture of your fundus.</span></p></body></html>", 0));
        fundesbackButton->setText(QApplication::translate("fundusdescr", "<- BACK", 0));
        fundesconButton->setText(QApplication::translate("fundusdescr", "CONTINUE", 0));
    } // retranslateUi

};

namespace Ui {
    class fundusdescr: public Ui_fundusdescr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNDUSDESCR_H
