/********************************************************************************
** Form generated from reading UI file 'consent.ui'
**
** Created: Tue Apr 28 13:53:08 2015
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
    QTextBrowser *textBrowser;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *agreecheckBox;
    QCheckBox *disagreecheckBox;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *consentbackButton;
    QPushButton *consentcontButton;

    void setupUi(QDialog *consent)
    {
        if (consent->objectName().isEmpty())
            consent->setObjectName(QString::fromUtf8("consent"));
        consent->resize(800, 465);
        textBrowser = new QTextBrowser(consent);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 10, 771, 341));
        widget = new QWidget(consent);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 360, 721, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        agreecheckBox = new QCheckBox(widget);
        agreecheckBox->setObjectName(QString::fromUtf8("agreecheckBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(agreecheckBox->sizePolicy().hasHeightForWidth());
        agreecheckBox->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        agreecheckBox->setFont(font);
        agreecheckBox->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(agreecheckBox);

        disagreecheckBox = new QCheckBox(widget);
        disagreecheckBox->setObjectName(QString::fromUtf8("disagreecheckBox"));
        sizePolicy.setHeightForWidth(disagreecheckBox->sizePolicy().hasHeightForWidth());
        disagreecheckBox->setSizePolicy(sizePolicy);
        disagreecheckBox->setFont(font);
        disagreecheckBox->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(disagreecheckBox);

        widget1 = new QWidget(consent);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(60, 410, 681, 51));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        consentbackButton = new QPushButton(widget1);
        consentbackButton->setObjectName(QString::fromUtf8("consentbackButton"));
        sizePolicy.setHeightForWidth(consentbackButton->sizePolicy().hasHeightForWidth());
        consentbackButton->setSizePolicy(sizePolicy);
        consentbackButton->setFont(font);

        horizontalLayout_2->addWidget(consentbackButton);

        consentcontButton = new QPushButton(widget1);
        consentcontButton->setObjectName(QString::fromUtf8("consentcontButton"));
        sizePolicy.setHeightForWidth(consentcontButton->sizePolicy().hasHeightForWidth());
        consentcontButton->setSizePolicy(sizePolicy);
        consentcontButton->setFont(font);

        horizontalLayout_2->addWidget(consentcontButton);


        retranslateUi(consent);

        QMetaObject::connectSlotsByName(consent);
    } // setupUi

    void retranslateUi(QDialog *consent)
    {
        consent->setWindowTitle(QApplication::translate("consent", "Dialog", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("consent", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-size:16pt; font-weight:600;\">Consent Form for Portable Oculus Examinations Device (P.H.O.E.) </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\">You are being invited to participate in a research study. Please take a few moments to read the explanations that follow to help you decide whether to participate or not.</p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0;"
                        " text-indent:0px; line-height:100%;\"><span style=\" font-size:14pt; font-weight:600;\">Description of Study</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\">This research study is being carried out for the purpose of completing our senior design project. We are conducting this study in order to obtain various results regarding the human eyes. We would like to include you in this study because we need volunteers like yourself to provide distinction to our data gathering. If you decide to take part in this study, we will present you with a device that will administer different examinations that will help in determining the status of your ocular health. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><a name=\"_GoBack\"></a>The process will include interfacing with a touch screen that will both receive your i"
                        "nput and display individual instructions for each of the examinations. There will be four examinations that will be administered. You will have the option to opt out of any of the examinations. The exams are as follows: Visual Acuity, Color Perception, Visual Fields, and Ocular Movements. You can expect to spend at least five minutes for each test, however timing may vary based on your input. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman, serif'; font-size:medium; font-weight:600;\">Risks and Discomforts</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\">One of the examinations will require the room lighting to be turned off for a brief period of time before being turned back on. This will not cause any damage to the eyes. The screen brightness levels will also be adjusted for eac"
                        "h examination (dimmer when closer to the device and brighter as the distance from you to the device increases) to allow for visual comfort. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman, serif'; font-size:medium; font-weight:600;\">Possible Benefits</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\">By agreeing to participate in this study you may have your data stored for a period of up to six years to allow ABET to view the project as a whole.</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman, serif'; font-size:medium; font-weight:600;\">Confidentiality of Records</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:"
                        "0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\">Any and all examination results will be encrypted and stored on the device. This information will only be accessed and viewed by the researchers of the device, the advisor of the project and ABET evaluators.</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman, serif'; font-size:medium; font-weight:600;\">Contact Information for Researchers, Mentors, and IRB Chair</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\">You are encouraged to ask any questions you may have about the study now. If you have any questions later or if you have any concerns about this study and your participation in it, please feel free to contact Aleesha Feole (feolea@sunyit.edu), Juan Salguero (salguej@sunyit.edu), and Lesther Reynoso (reynosl@sunyit.edu"
                        "). You may also contact William Thisleton (thistlet@sunyit.edu), Jennifer Klimek-Yingling (klimekj@sunyit.edu) and Timothy Busch (buscht1@sunyit.edu).</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman, serif'; font-size:medium; font-weight:600;\">Statement that Research is Voluntary </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\">Your participation in this study is entirely voluntary. If you choose not to participate you will experience no adverse treatment. Throughout the examination you will have the option to opt out of any examination(s) you wish not to take. Also, you are free to withdraw from the study at any time, for any reason.</p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\""
                        "><span style=\" font-size:14pt; font-weight:600;\">Statement of Consent</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\">I have read the above information, and have received answers to any questions I have asked. I freely consent to take part in the study. </p></body></html>", 0, QApplication::UnicodeUTF8));
        agreecheckBox->setText(QApplication::translate("consent", "I AGREE", 0, QApplication::UnicodeUTF8));
        disagreecheckBox->setText(QApplication::translate("consent", "I DISAGREE", 0, QApplication::UnicodeUTF8));
        consentbackButton->setText(QApplication::translate("consent", "<- BACK", 0, QApplication::UnicodeUTF8));
        consentcontButton->setText(QApplication::translate("consent", "CONTINUE", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class consent: public Ui_consent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSENT_H
