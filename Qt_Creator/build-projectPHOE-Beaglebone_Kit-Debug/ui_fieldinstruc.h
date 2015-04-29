/********************************************************************************
** Form generated from reading UI file 'fieldinstruc.ui'
**
** Created: Tue Apr 28 13:53:08 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIELDINSTRUC_H
#define UI_FIELDINSTRUC_H

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

class Ui_fieldinstruc
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *fieldinstrucbakButton;
    QPushButton *fieldinstrucbegButton;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *fieldinstruc)
    {
        if (fieldinstruc->objectName().isEmpty())
            fieldinstruc->setObjectName(QString::fromUtf8("fieldinstruc"));
        fieldinstruc->resize(800, 465);
        widget = new QWidget(fieldinstruc);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 380, 681, 71));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        fieldinstrucbakButton = new QPushButton(widget);
        fieldinstrucbakButton->setObjectName(QString::fromUtf8("fieldinstrucbakButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fieldinstrucbakButton->sizePolicy().hasHeightForWidth());
        fieldinstrucbakButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        fieldinstrucbakButton->setFont(font);

        horizontalLayout->addWidget(fieldinstrucbakButton);

        fieldinstrucbegButton = new QPushButton(widget);
        fieldinstrucbegButton->setObjectName(QString::fromUtf8("fieldinstrucbegButton"));
        sizePolicy.setHeightForWidth(fieldinstrucbegButton->sizePolicy().hasHeightForWidth());
        fieldinstrucbegButton->setSizePolicy(sizePolicy);
        fieldinstrucbegButton->setFont(font);

        horizontalLayout->addWidget(fieldinstrucbegButton);

        textBrowser = new QTextBrowser(fieldinstruc);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 10, 761, 351));

        retranslateUi(fieldinstruc);

        QMetaObject::connectSlotsByName(fieldinstruc);
    } // setupUi

    void retranslateUi(QDialog *fieldinstruc)
    {
        fieldinstruc->setWindowTitle(QApplication::translate("fieldinstruc", "Dialog", 0, QApplication::UnicodeUTF8));
        fieldinstrucbakButton->setText(QApplication::translate("fieldinstruc", "<- BACK", 0, QApplication::UnicodeUTF8));
        fieldinstrucbegButton->setText(QApplication::translate("fieldinstruc", "BEGIN", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("fieldinstruc", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">Visual Fields Instructions</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fieldinstruc: public Ui_fieldinstruc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIELDINSTRUC_H
