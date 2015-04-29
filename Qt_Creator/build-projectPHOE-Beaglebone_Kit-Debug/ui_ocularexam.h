/********************************************************************************
** Form generated from reading UI file 'ocularexam.ui'
**
** Created: Tue Apr 28 23:34:49 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OCULAREXAM_H
#define UI_OCULAREXAM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ocularexam
{
public:
    QLabel *fixationPoint;
    QLabel *instructionLabel;
    QPushButton *continueButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *cointainerLayout;

    void setupUi(QDialog *ocularexam)
    {
        if (ocularexam->objectName().isEmpty())
            ocularexam->setObjectName(QString::fromUtf8("ocularexam"));
        ocularexam->resize(800, 465);
        fixationPoint = new QLabel(ocularexam);
        fixationPoint->setObjectName(QString::fromUtf8("fixationPoint"));
        fixationPoint->setGeometry(QRect(385, 210, 30, 30));
        instructionLabel = new QLabel(ocularexam);
        instructionLabel->setObjectName(QString::fromUtf8("instructionLabel"));
        instructionLabel->setGeometry(QRect(10, 300, 781, 61));
        QFont font;
        font.setPointSize(22);
        instructionLabel->setFont(font);
        continueButton = new QPushButton(ocularexam);
        continueButton->setObjectName(QString::fromUtf8("continueButton"));
        continueButton->setGeometry(QRect(220, 380, 321, 61));
        continueButton->setFont(font);
        verticalLayoutWidget = new QWidget(ocularexam);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, -1, 801, 471));
        cointainerLayout = new QVBoxLayout(verticalLayoutWidget);
        cointainerLayout->setObjectName(QString::fromUtf8("cointainerLayout"));
        cointainerLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget->raise();
        fixationPoint->raise();
        instructionLabel->raise();
        continueButton->raise();

        retranslateUi(ocularexam);

        QMetaObject::connectSlotsByName(ocularexam);
    } // setupUi

    void retranslateUi(QDialog *ocularexam)
    {
        ocularexam->setWindowTitle(QApplication::translate("ocularexam", "Dialog", 0, QApplication::UnicodeUTF8));
        fixationPoint->setText(QString());
        instructionLabel->setText(QApplication::translate("ocularexam", "Press Continue when the chin rest correctly configured.", 0, QApplication::UnicodeUTF8));
        continueButton->setText(QApplication::translate("ocularexam", "Continue", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ocularexam: public Ui_ocularexam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OCULAREXAM_H
