/********************************************************************************
** Form generated from reading UI file 'acuityinstruc.ui'
**
** Created: Tue Apr 28 13:53:08 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACUITYINSTRUC_H
#define UI_ACUITYINSTRUC_H

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

class Ui_acuityinstruc
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ainstrucbakButton;
    QPushButton *ainstrucbegButton;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *acuityinstruc)
    {
        if (acuityinstruc->objectName().isEmpty())
            acuityinstruc->setObjectName(QString::fromUtf8("acuityinstruc"));
        acuityinstruc->resize(800, 465);
        widget = new QWidget(acuityinstruc);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(140, 380, 521, 61));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ainstrucbakButton = new QPushButton(widget);
        ainstrucbakButton->setObjectName(QString::fromUtf8("ainstrucbakButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ainstrucbakButton->sizePolicy().hasHeightForWidth());
        ainstrucbakButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        ainstrucbakButton->setFont(font);

        horizontalLayout->addWidget(ainstrucbakButton);

        ainstrucbegButton = new QPushButton(widget);
        ainstrucbegButton->setObjectName(QString::fromUtf8("ainstrucbegButton"));
        sizePolicy.setHeightForWidth(ainstrucbegButton->sizePolicy().hasHeightForWidth());
        ainstrucbegButton->setSizePolicy(sizePolicy);
        ainstrucbegButton->setFont(font);

        horizontalLayout->addWidget(ainstrucbegButton);

        textBrowser = new QTextBrowser(acuityinstruc);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 10, 761, 351));

        retranslateUi(acuityinstruc);

        QMetaObject::connectSlotsByName(acuityinstruc);
    } // setupUi

    void retranslateUi(QDialog *acuityinstruc)
    {
        acuityinstruc->setWindowTitle(QApplication::translate("acuityinstruc", "Dialog", 0, QApplication::UnicodeUTF8));
        ainstrucbakButton->setText(QApplication::translate("acuityinstruc", "<- BACK", 0, QApplication::UnicodeUTF8));
        ainstrucbegButton->setText(QApplication::translate("acuityinstruc", "BEGIN", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("acuityinstruc", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">Visual Acuity Instructions</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class acuityinstruc: public Ui_acuityinstruc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACUITYINSTRUC_H
