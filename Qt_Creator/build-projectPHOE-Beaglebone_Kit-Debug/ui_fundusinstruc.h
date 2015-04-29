/********************************************************************************
** Form generated from reading UI file 'fundusinstruc.ui'
**
** Created: Tue Apr 28 13:53:08 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNDUSINSTRUC_H
#define UI_FUNDUSINSTRUC_H

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

class Ui_fundusinstruc
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *funinsbackButton;
    QPushButton *funinsbegButton;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *fundusinstruc)
    {
        if (fundusinstruc->objectName().isEmpty())
            fundusinstruc->setObjectName(QString::fromUtf8("fundusinstruc"));
        fundusinstruc->resize(800, 465);
        widget = new QWidget(fundusinstruc);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 390, 571, 61));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        funinsbackButton = new QPushButton(widget);
        funinsbackButton->setObjectName(QString::fromUtf8("funinsbackButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(funinsbackButton->sizePolicy().hasHeightForWidth());
        funinsbackButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        funinsbackButton->setFont(font);

        horizontalLayout->addWidget(funinsbackButton);

        funinsbegButton = new QPushButton(widget);
        funinsbegButton->setObjectName(QString::fromUtf8("funinsbegButton"));
        sizePolicy.setHeightForWidth(funinsbegButton->sizePolicy().hasHeightForWidth());
        funinsbegButton->setSizePolicy(sizePolicy);
        funinsbegButton->setFont(font);

        horizontalLayout->addWidget(funinsbegButton);

        textBrowser = new QTextBrowser(fundusinstruc);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 10, 761, 371));

        retranslateUi(fundusinstruc);

        QMetaObject::connectSlotsByName(fundusinstruc);
    } // setupUi

    void retranslateUi(QDialog *fundusinstruc)
    {
        fundusinstruc->setWindowTitle(QApplication::translate("fundusinstruc", "Dialog", 0, QApplication::UnicodeUTF8));
        funinsbackButton->setText(QApplication::translate("fundusinstruc", "<-BACK", 0, QApplication::UnicodeUTF8));
        funinsbegButton->setText(QApplication::translate("fundusinstruc", "BEGIN", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("fundusinstruc", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">Fundus Examination Instructions</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fundusinstruc: public Ui_fundusinstruc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNDUSINSTRUC_H
