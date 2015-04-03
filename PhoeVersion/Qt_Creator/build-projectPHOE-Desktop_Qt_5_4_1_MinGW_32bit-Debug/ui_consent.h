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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_consent
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *consentbackButton;
    QPushButton *consentcontButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *agreecheckBox;
    QCheckBox *disagreecheckBox;

    void setupUi(QDialog *consent)
    {
        if (consent->objectName().isEmpty())
            consent->setObjectName(QStringLiteral("consent"));
        consent->resize(400, 300);
        label = new QLabel(consent);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 90, 241, 71));
        widget = new QWidget(consent);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(120, 240, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        consentbackButton = new QPushButton(widget);
        consentbackButton->setObjectName(QStringLiteral("consentbackButton"));

        horizontalLayout->addWidget(consentbackButton);

        consentcontButton = new QPushButton(widget);
        consentcontButton->setObjectName(QStringLiteral("consentcontButton"));

        horizontalLayout->addWidget(consentcontButton);

        widget1 = new QWidget(consent);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(130, 210, 151, 19));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        agreecheckBox = new QCheckBox(widget1);
        agreecheckBox->setObjectName(QStringLiteral("agreecheckBox"));

        horizontalLayout_2->addWidget(agreecheckBox);

        disagreecheckBox = new QCheckBox(widget1);
        disagreecheckBox->setObjectName(QStringLiteral("disagreecheckBox"));

        horizontalLayout_2->addWidget(disagreecheckBox);


        retranslateUi(consent);

        QMetaObject::connectSlotsByName(consent);
    } // setupUi

    void retranslateUi(QDialog *consent)
    {
        consent->setWindowTitle(QApplication::translate("consent", "Dialog", 0));
        label->setText(QApplication::translate("consent", "consent form blahblah blah...", 0));
        consentbackButton->setText(QApplication::translate("consent", "<- BACK", 0));
        consentcontButton->setText(QApplication::translate("consent", "CONTINUE", 0));
        agreecheckBox->setText(QApplication::translate("consent", "I AGREE", 0));
        disagreecheckBox->setText(QApplication::translate("consent", "I DISAGREE", 0));
    } // retranslateUi

};

namespace Ui {
    class consent: public Ui_consent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSENT_H
