/********************************************************************************
** Form generated from reading UI file 'consent.ui'
**
** Created: Fri Apr 3 11:53:52 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSENT_H
#define UI_CONSENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_consent
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *consentbackButton;
    QPushButton *consentcontButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *agreecheckBox;
    QCheckBox *disagreecheckBox;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *consent)
    {
        if (consent->objectName().isEmpty())
            consent->setObjectName(QString::fromUtf8("consent"));
        consent->resize(400, 300);
        layoutWidget = new QWidget(consent);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 240, 186, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        consentbackButton = new QPushButton(layoutWidget);
        consentbackButton->setObjectName(QString::fromUtf8("consentbackButton"));

        horizontalLayout->addWidget(consentbackButton);

        consentcontButton = new QPushButton(layoutWidget);
        consentcontButton->setObjectName(QString::fromUtf8("consentcontButton"));

        horizontalLayout->addWidget(consentcontButton);

        layoutWidget1 = new QWidget(consent);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(130, 210, 201, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        agreecheckBox = new QCheckBox(layoutWidget1);
        agreecheckBox->setObjectName(QString::fromUtf8("agreecheckBox"));

        horizontalLayout_2->addWidget(agreecheckBox);

        disagreecheckBox = new QCheckBox(layoutWidget1);
        disagreecheckBox->setObjectName(QString::fromUtf8("disagreecheckBox"));

        horizontalLayout_2->addWidget(disagreecheckBox);

        textBrowser = new QTextBrowser(consent);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(40, 20, 321, 171));

        retranslateUi(consent);

        QMetaObject::connectSlotsByName(consent);
    } // setupUi

    void retranslateUi(QDialog *consent)
    {
        consent->setWindowTitle(QApplication::translate("consent", "Dialog", 0, QApplication::UnicodeUTF8));
        consentbackButton->setText(QApplication::translate("consent", "<- BACK", 0, QApplication::UnicodeUTF8));
        consentcontButton->setText(QApplication::translate("consent", "CONTINUE", 0, QApplication::UnicodeUTF8));
        agreecheckBox->setText(QApplication::translate("consent", "I AGREE", 0, QApplication::UnicodeUTF8));
        disagreecheckBox->setText(QApplication::translate("consent", "I DISAGREE", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("consent", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This is a sample consent form. </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br />This line will continue to repeat to simulate scrolling effect. This line will continue to repeat to simulate scrolling effect. This line will continue to repeat to simulate scrolling effect. This line will continue to repeat to simulate scrolling effect. This line will continue to repeat to simulate scrolling effect. This line will continue to repeat to simulate scrolling effect. This line will cont"
                        "inue to repeat to simulate scrolling effect. This line will continue to repeat to simulate scrolling effect. This line will continue to repeat to simulate scrolling effect. This line will continue to repeat to simulate scrolling effect. This line will continue to repeat to simulate scrolling effect. This line will continue to repeat to simulate scrolling effect. This line will continue to repeat to simulate scrolling effect. This line will continue to repeat to simulate scrolling effect. This line will continue to repeat to simulate scrolling effect. This line will continue to repeat to simulate scrolling effect. This line will continue to repeat to simulate scrolling effect. This line will continue to repeat to simulate scrolling effect. This line will continue to repeat to simulate scrolling effect. This line will continue to repeat to simulate scrolling effect. This line will continue to repeat to simulate scrolling effect. This line will continue to repeat to simulate scrolling effect. This line will conti"
                        "nue to repeat to simulate scrolling effect. This line will continue to repeat to simulate scrolling effect.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Thank you for reading.</p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class consent: public Ui_consent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSENT_H
