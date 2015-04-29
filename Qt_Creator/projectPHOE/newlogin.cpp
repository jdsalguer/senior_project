#include "newlogin.h"
#include "ui_newlogin.h"
#include "phoe.h"
#include "newsuccess.h"
#include <QPalette>
#include <QFile>
#include <QTextStream>
#include <QtDebug>
#include "consent.h"
#include <QDir>


newlogin::newlogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newlogin)
{
    ui->setupUi(this);
    this->showFullScreen();
//    ui->newcreButton->setEnabled(false);
    //setting temp infor
    ui->firstNameEdit->setText("patient");
    ui->lastNameEdit->setText("pat");
    ui->address1Edit->setText("123 Street Avenue");
    ui->address2Edit->setText("APT 123");
    ui->cityEdit->setText("City");
    ui->stateEdit->setText("State");
    ui->zipCodeEdit->setText("11111");
    ui->loginIdEdit->setText("Patient");
    ui->loginPassEdit->setText("pass");
    ui->loginPassConfirmEdit->setText("pass");
    ui->dobEdit->setText("January 1, 2015");
    ui->phoneEdit->setText("123-456-7890");
}

newlogin::~newlogin()
{
    delete ui;
}

void newlogin::on_newcanButton_clicked()
{
    //Back to phoe.cpp
    this->hide();
}

void newlogin::on_newbakButton_clicked()
{
    consent Consent;
    Consent.setModal(true);
    this->hide();
    Consent.exec();
}

void newlogin::on_newcreButton_clicked()
{
    QString FirstName = ui->firstNameEdit->text();
    QString LastName = ui->lastNameEdit->text();
    QString Address1 = ui->address1Edit->text();
    QString Address2 = ui->address2Edit->text();
    QString City = ui->cityEdit->text();
    QString State = ui->stateEdit->text();
    QString ZipCode = ui->zipCodeEdit->text();
    QString LoginId = ui->loginIdEdit->text();
    QString LoginPass = ui->loginPassEdit->text();
    QString LoginPassConfirm = ui->loginPassConfirmEdit->text();
    QString DOB = ui->dobEdit->text();
    QString Phone = ui->phoneEdit->text();

    if(LoginPass.compare(LoginPassConfirm)){
        qDebug() << LoginPass + " " + LoginPassConfirm;
        ui->loginPassConfirmEdit->setText("MISMATCH");

    } else{
        if( !FirstName.isEmpty() &&
            !LastName.isEmpty() &&
            !Address1.isEmpty() &&
    //        !Address2.isEmpty() &&
            !City.isEmpty() &&
            !State.isEmpty() &&
            !ZipCode.isEmpty() &&
            !LoginId.isEmpty() &&
            !LoginPass.isEmpty() &&
            !LoginPassConfirm.isEmpty() &&
            !DOB.isEmpty() &&
            !Phone.isEmpty()){

            QString Info = FirstName + " " + LastName + "\n" +
                             DOB + "\n" +
                             Phone + "\n" +
                             Address1 + " " + (Address2.isEmpty() ? "" : Address2) + " \n" +
                             City + " " + State + " " + ZipCode + "\n" +
                             "ID: " + LoginId + " Password: " +LoginPass;

            //works

//            QFile file("accounts/" + LoginId + ".txt");
//            if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
//                 return;

            //test
//            QDir dir("accounts/" + LoginId + "/");
//            if (!dir.exists()){
//              dir.mkdir(".");
//            }
//            QDir dir("");
//            if (!dir.exists()){
//                dir.mkdir("accounts/" + LoginId);
//            }

            QString path = "accounts/" + LoginId;
            QDir dir(path); if(!dir.exists()) { qDebug() << "Creating " << path << "directory"; dir.mkpath(path); } else { qDebug() << path << " already exists"; }

            QString otherpath = "/media/rootfs/" + LoginId+"/Fundus";
            QDir otherdir(otherpath); if(!otherdir.exists()) { qDebug() << "Creating " << otherpath << "directory"; otherdir.mkpath(otherpath); } else { qDebug() << otherpath << " already exists"; }


            QString ompaths = "/media/rootfs/" + LoginId+"/OcularMovements";
            QDir OMDIRS(ompaths); if(!OMDIRS.exists()) { qDebug() << "Creating " << ompaths << "directory"; OMDIRS.mkpath(ompaths); } else { qDebug() << ompaths << " already exists"; }

            ompaths = "/media/rootfs/" + LoginId+"/OcularMovements/Left";
            QDir OMDIRSleft(ompaths); if(!OMDIRSleft.exists()) { qDebug() << "Creating " << ompaths << "directory"; OMDIRSleft.mkpath(ompaths); } else { qDebug() << ompaths << " already exists"; }

            ompaths = "/media/rootfs/" + LoginId+"/OcularMovements/Right";
            QDir OMDIRright(ompaths); if(!OMDIRright.exists()) { qDebug() << "Creating " << ompaths << "directory"; OMDIRright.mkpath(ompaths); } else { qDebug() << ompaths << " already exists"; }

            ompaths = "/media/rootfs/" + LoginId+"/OcularMovements/Up";
            QDir OMDIRup(ompaths); if(!OMDIRup.exists()) { qDebug() << "Creating " << ompaths << "directory"; OMDIRup.mkpath(ompaths); } else { qDebug() << ompaths << " already exists"; }

            ompaths = "/media/rootfs/" + LoginId+"/OcularMovements/Down";
            QDir OMDIRdown(ompaths); if(!OMDIRdown.exists()) { qDebug() << "Creating " << ompaths << "directory"; OMDIRdown.mkpath(ompaths); } else { qDebug() << ompaths << " already exists"; }

            QFile file("accounts/" + LoginId + "/" + LoginId + ".txt");
            if (!file.open(QIODevice::WriteOnly | QIODevice::Text)){
                qDebug() << "cant create patient file";
                 return;
            }

            QString ReportTemplate = "Patient Report\n\n{ColorExamResults}\n";

            QFile reportFile("accounts/" + LoginId + "/" + LoginId + "_Report.txt");
            if (!reportFile.open(QIODevice::WriteOnly | QIODevice::Text)){
                qDebug() << "cant open report file";
                 return;
            }

            QTextStream rout(&reportFile);
            rout<< ReportTemplate;
            reportFile.close();

            QTextStream out(&file);
            out << Info;
            file.close();


            newsuccess Newsuccess;
            Newsuccess.setModal(true);
            this->hide();
            Newsuccess.exec();
        }
    }




}

void newlogin::on_loginPassConfirmEdit_editingFinished()
{
//    if( !FirstName.isEmpty() &&
//        !LastName.isEmpty() &&
//        !Address1.isEmpty() &&
//        !Address2.isEmpty() &&
//        !City.isEmpty() &&
//        !State.isEmpty() &&
//        !ZipCode.isEmpty() &&
//        !LoginId.isEmpty() &&
//        !LoginPass.isEmpty() &&
//        !LoginPassConfirm.isEmpty() &&
//        !DOB.isEmpty() &&
//        !Phone.isEmpty()){
//        ui->newcreButton->setEnabled(true);
//    }
}

void newlogin::on_loginPassEdit_editingFinished()
{
//    if( !FirstName.isEmpty() &&
//        !LastName.isEmpty() &&
//        !Address1.isEmpty() &&
////        !Address2.isEmpty() &&
//        !City.isEmpty() &&
//        !State.isEmpty() &&
//        !ZipCode.isEmpty() &&
//        !LoginId.isEmpty() &&
//        !LoginPass.isEmpty() &&
//        !LoginPassConfirm.isEmpty() &&
//        !DOB.isEmpty() &&
//        !Phone.isEmpty()){
//        ui->newcreButton->setEnabled(true);
//    }
}

void newlogin::on_loginIdEdit_editingFinished()
{
//    if( !FirstName.isEmpty() &&
//        !LastName.isEmpty() &&
//        !Address1.isEmpty() &&
////        !Address2.isEmpty() &&
//        !City.isEmpty() &&
//        !State.isEmpty() &&
//        !ZipCode.isEmpty() &&
//        !LoginId.isEmpty() &&
//        !LoginPass.isEmpty() &&
//        !LoginPassConfirm.isEmpty() &&
//        !DOB.isEmpty() &&
//        !Phone.isEmpty()){
//        ui->newcreButton->setEnabled(true);
//    }
}

void newlogin::on_dobEdit_editingFinished()
{
//    if( !FirstName.isEmpty() &&
//        !LastName.isEmpty() &&
//        !Address1.isEmpty() &&
////        !Address2.isEmpty() &&
//        !City.isEmpty() &&
//        !State.isEmpty() &&
//        !ZipCode.isEmpty() &&
//        !LoginId.isEmpty() &&
//        !LoginPass.isEmpty() &&
//        !LoginPassConfirm.isEmpty() &&
//        !DOB.isEmpty() &&
//        !Phone.isEmpty()){
//        ui->newcreButton->setEnabled(true);
//    }
}

void newlogin::on_phoneEdit_editingFinished()
{
//    if( !FirstName.isEmpty() &&
//        !LastName.isEmpty() &&
//        !Address1.isEmpty() &&
////        !Address2.isEmpty() &&
//        !City.isEmpty() &&
//        !State.isEmpty() &&
//        !ZipCode.isEmpty() &&
//        !LoginId.isEmpty() &&
//        !LoginPass.isEmpty() &&
//        !LoginPassConfirm.isEmpty() &&
//        !DOB.isEmpty() &&
//        !Phone.isEmpty()){
//        ui->newcreButton->setEnabled(true);
//    }
}

void newlogin::on_zipCodeEdit_editingFinished()
{
//    if( !FirstName.isEmpty() &&
//        !LastName.isEmpty() &&
//        !Address1.isEmpty() &&
////        !Address2.isEmpty() &&
//        !City.isEmpty() &&
//        !State.isEmpty() &&
//        !ZipCode.isEmpty() &&
//        !LoginId.isEmpty() &&
//        !LoginPass.isEmpty() &&
//        !LoginPassConfirm.isEmpty() &&
//        !DOB.isEmpty() &&
//        !Phone.isEmpty()){
//        ui->newcreButton->setEnabled(true);
//    }
}

void newlogin::on_stateEdit_editingFinished()
{
//    if( !FirstName.isEmpty() &&
//        !LastName.isEmpty() &&
//        !Address1.isEmpty() &&
////        !Address2.isEmpty() &&
//        !City.isEmpty() &&
//        !State.isEmpty() &&
//        !ZipCode.isEmpty() &&
//        !LoginId.isEmpty() &&
//        !LoginPass.isEmpty() &&
//        !LoginPassConfirm.isEmpty() &&
//        !DOB.isEmpty() &&
//        !Phone.isEmpty()){
//        ui->newcreButton->setEnabled(true);
//    }
}

void newlogin::on_cityEdit_editingFinished()
{
//    if( !FirstName.isEmpty() &&
//        !LastName.isEmpty() &&
//        !Address1.isEmpty() &&
////        !Address2.isEmpty() &&
//        !City.isEmpty() &&
//        !State.isEmpty() &&
//        !ZipCode.isEmpty() &&
//        !LoginId.isEmpty() &&
//        !LoginPass.isEmpty() &&
//        !LoginPassConfirm.isEmpty() &&
//        !DOB.isEmpty() &&
//        !Phone.isEmpty()){
//        ui->newcreButton->setEnabled(true);
//    }
}

void newlogin::on_address2Edit_editingFinished()
{

}

void newlogin::on_address1Edit_editingFinished()
{
//    if( !FirstName.isEmpty() &&
//        !LastName.isEmpty() &&
//        !Address1.isEmpty() &&
////        !Address2.isEmpty() &&
//        !City.isEmpty() &&
//        !State.isEmpty() &&
//        !ZipCode.isEmpty() &&
//        !LoginId.isEmpty() &&
//        !LoginPass.isEmpty() &&
//        !LoginPassConfirm.isEmpty() &&
//        !DOB.isEmpty() &&
//        !Phone.isEmpty()){
//        ui->newcreButton->setEnabled(true);
//    }
}

void newlogin::on_lastNameEdit_editingFinished()
{
//    if( !FirstName.isEmpty() &&
//        !LastName.isEmpty() &&
//        !Address1.isEmpty() &&
////        !Address2.isEmpty() &&
//        !City.isEmpty() &&
//        !State.isEmpty() &&
//        !ZipCode.isEmpty() &&
//        !LoginId.isEmpty() &&
//        !LoginPass.isEmpty() &&
//        !LoginPassConfirm.isEmpty() &&
//        !DOB.isEmpty() &&
//        !Phone.isEmpty()){
//        ui->newcreButton->setEnabled(true);
//    }
}

void newlogin::on_firstNameEdit_editingFinished()
{
//    if( !FirstName.isEmpty() &&
//        !LastName.isEmpty() &&
//        !Address1.isEmpty() &&
////        !Address2.isEmpty() &&
//        !City.isEmpty() &&
//        !State.isEmpty() &&
//        !ZipCode.isEmpty() &&
//        !LoginId.isEmpty() &&
//        !LoginPass.isEmpty() &&
//        !LoginPassConfirm.isEmpty() &&
//        !DOB.isEmpty() &&
//        !Phone.isEmpty()){
//        ui->newcreButton->setEnabled(true);
//    }
}
