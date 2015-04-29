/********************************************************************************
** Form generated from reading UI file 'colorinstruc.ui'
**
** Created: Tue Apr 28 13:53:08 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORINSTRUC_H
#define UI_COLORINSTRUC_H

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

class Ui_colorinstruc
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *cinstrucbakButton;
    QPushButton *cinstrucbegButton;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *colorinstruc)
    {
        if (colorinstruc->objectName().isEmpty())
            colorinstruc->setObjectName(QString::fromUtf8("colorinstruc"));
        colorinstruc->resize(800, 465);
        widget = new QWidget(colorinstruc);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(120, 380, 561, 61));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cinstrucbakButton = new QPushButton(widget);
        cinstrucbakButton->setObjectName(QString::fromUtf8("cinstrucbakButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cinstrucbakButton->sizePolicy().hasHeightForWidth());
        cinstrucbakButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        cinstrucbakButton->setFont(font);

        horizontalLayout->addWidget(cinstrucbakButton);

        cinstrucbegButton = new QPushButton(widget);
        cinstrucbegButton->setObjectName(QString::fromUtf8("cinstrucbegButton"));
        sizePolicy.setHeightForWidth(cinstrucbegButton->sizePolicy().hasHeightForWidth());
        cinstrucbegButton->setSizePolicy(sizePolicy);
        cinstrucbegButton->setFont(font);

        horizontalLayout->addWidget(cinstrucbegButton);

        textBrowser = new QTextBrowser(colorinstruc);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 10, 749, 341));

        retranslateUi(colorinstruc);

        QMetaObject::connectSlotsByName(colorinstruc);
    } // setupUi

    void retranslateUi(QDialog *colorinstruc)
    {
        colorinstruc->setWindowTitle(QApplication::translate("colorinstruc", "Dialog", 0, QApplication::UnicodeUTF8));
        cinstrucbakButton->setText(QApplication::translate("colorinstruc", "<- BACK", 0, QApplication::UnicodeUTF8));
        cinstrucbegButton->setText(QApplication::translate("colorinstruc", "BEGIN", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("colorinstruc", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">Color Blindness Instructions</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class colorinstruc: public Ui_colorinstruc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORINSTRUC_H
