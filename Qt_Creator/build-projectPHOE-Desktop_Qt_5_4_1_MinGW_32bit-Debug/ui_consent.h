/********************************************************************************
** Form generated from reading UI file 'consent.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSENT_H
#define UI_CONSENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_consent
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *agreecheckBox;
    QCheckBox *disagreecheckBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *consentbackButton;
    QPushButton *consentcontButton;

    void setupUi(QDialog *consent)
    {
        if (consent->objectName().isEmpty())
            consent->setObjectName(QStringLiteral("consent"));
        consent->resize(800, 465);
        widget = new QWidget(consent);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 781, 451));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        agreecheckBox = new QCheckBox(widget);
        agreecheckBox->setObjectName(QStringLiteral("agreecheckBox"));

        horizontalLayout_2->addWidget(agreecheckBox);

        disagreecheckBox = new QCheckBox(widget);
        disagreecheckBox->setObjectName(QStringLiteral("disagreecheckBox"));

        horizontalLayout_2->addWidget(disagreecheckBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        consentbackButton = new QPushButton(widget);
        consentbackButton->setObjectName(QStringLiteral("consentbackButton"));

        horizontalLayout->addWidget(consentbackButton);

        consentcontButton = new QPushButton(widget);
        consentcontButton->setObjectName(QStringLiteral("consentcontButton"));

        horizontalLayout->addWidget(consentcontButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(consent);

        QMetaObject::connectSlotsByName(consent);
    } // setupUi

    void retranslateUi(QDialog *consent)
    {
        consent->setWindowTitle(QApplication::translate("consent", "Dialog", 0));
        textBrowser->setHtml(QApplication::translate("consent", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Consent Form for Portable Oculus Examinations Device (P.H.O.E.) </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">     You are being invited to participate in a research study. Please take a few moments to read th"
                        "e explanations that follow to help you decide whether to participate or not.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Description of Study </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">     This research study is being carried out for the purpose of completing our senior design project. We are conducting this study in order to obtain various results regarding the human eyes. We would like to include"
                        " you in this study because we need volunteers like yourself to provide distinction to our data gathering. If you decide to take part in this study, we will present you with a device that will administer different examinations that will help in determining the status of your</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">ocular health. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">     The process will include interfacing with a touch screen that will both receive your input and display individual instructions for each of the examinations. There will be four examinations that will be administered. You will have the option to opt out of any of the examinations. The exams are as follows: Visual Acuity, Color Perception, Visual Fields, and Ocular Movements. You can expect "
                        "to spend at least five minutes for each test, however timing may vary based on your input. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Risks and Discomforts</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">     One of the examinations will require the room lighting to be turned off for a brief period of time before being turned back on. This will not cause any damage to the eyes. The screen brightness lev"
                        "els will also be adjusted for each examination (dimmer when closer to the device and brighter as the distance from you to the device increases) to allow for visual comfort.   </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Possible Benefits </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">     By agreeing to participate in this study you may have your data stored for a period of up to six years to allow ABET"
                        " to view the project as a whole.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Confidentiality of Records </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">     Any and all examination results will be encrypted and stored on the device. This information will only be accessed and viewed by the researchers of the device, the advisor of the project and ABET evaluators.</span></p>\n"
"<p style=\"-qt-paragraph-ty"
                        "pe:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Contact Information for Researchers, Mentors, and IRB Chair</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">     You are encouraged to ask any questions you may have about the study now. If you have any questions later or if you have any concerns about this study and your participation in it, please feel free to contact Aleesha Feole (feolea@sunyit.edu), Juan Salguero (salguej@sunyit.edu), and Lesther R"
                        "eynoso (reynosl@sunyit.edu). You may also contact William Thisleton (thistlet@sunyit.edu), Jennifer Klimek-Yingling (klimekj@sunyit.edu) and Timothy Busch (buscht1@sunyit.edu). </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Statement that Research is Voluntary </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">     Your participation in this study is entirely voluntary. If you choose not to participate you wi"
                        "ll experience no adverse treatment. Throughout the examination you will have the option to opt out of any examination(s) you wish not to take. Also, you are free to withdraw from the study at any time, for any reason.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Statement of Consent</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">     I have read the above information, and have received answers to any ques"
                        "tions I have asked. I freely consent to take part in the study.</span></p></body></html>", 0));
        agreecheckBox->setText(QApplication::translate("consent", "I AGREE", 0));
        disagreecheckBox->setText(QApplication::translate("consent", "I DISAGREE", 0));
        consentbackButton->setText(QApplication::translate("consent", "<- BACK", 0));
        consentcontButton->setText(QApplication::translate("consent", "CONTINUE", 0));
    } // retranslateUi

};

namespace Ui {
    class consent: public Ui_consent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSENT_H
