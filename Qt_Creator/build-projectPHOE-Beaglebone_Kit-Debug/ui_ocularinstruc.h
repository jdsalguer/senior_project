/********************************************************************************
** Form generated from reading UI file 'ocularinstruc.ui'
**
** Created: Tue Apr 28 13:53:08 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OCULARINSTRUC_H
#define UI_OCULARINSTRUC_H

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

class Ui_ocularinstruc
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ocuinstbackButton;
    QPushButton *ocuinstbegButton;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *ocularinstruc)
    {
        if (ocularinstruc->objectName().isEmpty())
            ocularinstruc->setObjectName(QString::fromUtf8("ocularinstruc"));
        ocularinstruc->resize(800, 480);
        widget = new QWidget(ocularinstruc);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(130, 400, 541, 61));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ocuinstbackButton = new QPushButton(widget);
        ocuinstbackButton->setObjectName(QString::fromUtf8("ocuinstbackButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ocuinstbackButton->sizePolicy().hasHeightForWidth());
        ocuinstbackButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        ocuinstbackButton->setFont(font);

        horizontalLayout->addWidget(ocuinstbackButton);

        ocuinstbegButton = new QPushButton(widget);
        ocuinstbegButton->setObjectName(QString::fromUtf8("ocuinstbegButton"));
        sizePolicy.setHeightForWidth(ocuinstbegButton->sizePolicy().hasHeightForWidth());
        ocuinstbegButton->setSizePolicy(sizePolicy);
        ocuinstbegButton->setFont(font);

        horizontalLayout->addWidget(ocuinstbegButton);

        textBrowser = new QTextBrowser(ocularinstruc);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 10, 749, 381));

        retranslateUi(ocularinstruc);

        QMetaObject::connectSlotsByName(ocularinstruc);
    } // setupUi

    void retranslateUi(QDialog *ocularinstruc)
    {
        ocularinstruc->setWindowTitle(QApplication::translate("ocularinstruc", "Dialog", 0, QApplication::UnicodeUTF8));
        ocuinstbackButton->setText(QApplication::translate("ocularinstruc", "<- BACK", 0, QApplication::UnicodeUTF8));
        ocuinstbegButton->setText(QApplication::translate("ocularinstruc", "BEGIN", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("ocularinstruc", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">The Instructions for the Ocular Movements Examination. </span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ocularinstruc: public Ui_ocularinstruc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OCULARINSTRUC_H
