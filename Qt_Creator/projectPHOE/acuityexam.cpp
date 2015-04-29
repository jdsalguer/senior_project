#include "acuityexam.h"
#include "ui_acuityexam.h"
#include <QPixmap>
#include <QDebug>
#include <QFile>
#include <examcomplete.h>

QString acuityResults;
int rowNumber;
QString limitRatio;
QString letters[] = {"C.png", "L.png", "E.png", "F.png", "D.png", "O.png", "P.png", "T.png", "Z.png"};
QString tumbling[] = {"down.png", "left.png", "right.png", "up.png"};
QString ratios[] = {"20/200", "20/100", "20/70", "20/50", "20/40", "20/30", "20/25", "20/20", "20/15", "20/12", "20/10"};
int pixelSize[] = {140, 70, 49, 35, 28, 21, 17, 14, 10, 8, 7};
bool useTumbling;
bool bothEyesTested;

acuityexam::acuityexam(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::acuityexam)
{
    ui->setupUi(this);
    this->showFullScreen();

    limitRatio.clear();
    rowNumber = 1;
    useTumbling = false;
    bothEyesTested = false;
    drawLetters();
    acuityResults.append("Left Eye\n");

}

acuityexam::~acuityexam()
{
    delete ui;
}

void acuityexam::on_yesButton_clicked()
{
    if(!limitRatio.isEmpty()){ // check if this row was previously marked unread but can now be read
        limitRatio.clear(); //if so clear the limit
    }//if it is empty proceed as normal
//        qDebug()<<QString::number(rowNumber) + " all good";
    if(rowNumber < 11){
        acuityResults.append("Row "+ QString::number(rowNumber) + " " + ratios[rowNumber - 1] + "\tYes\n");
        rowNumber++;
        drawLetters();
    }else{
//        qDebug()<<QString::number(rowNumber) + " results";
        recordResults();
        this->hide();
    }
//    qDebug()<<acuityResults;
//    qDebug()<<rowNumber;


}
void acuityexam::on_noButton_clicked()
{   qDebug() << "rowNumber " << rowNumber;
    if (rowNumber == 1 && !useTumbling){    //if no on the first image dont record anything and use tumbling and redraw letters.
        useTumbling = true;
        acuityResults.append("Tumbling\n");
        drawLetters();
    }else{ //other wise record no response go to previous row, record this row as limit ratio
        if(rowNumber < 11){
            //first to check if this has previously been marked as a no
            if(limitRatio.compare(ratios[rowNumber - 1]) == 0 && !bothEyesTested){//one eye has been tested
                qDebug() << "both eyes: " << bothEyesTested;
                rowNumber = 1;
                drawLetters();
                acuityResults.append("\nRight Eye\n");
                bothEyesTested = true;
                ui->eyeDirection->setText("Cover Your Left Eye");
            }else if(limitRatio.compare(ratios[rowNumber - 1]) == 0 && bothEyesTested){
                //test complete
                recordResults();
                examComplete examcomplete;
                examcomplete.setModal(true);
                examcomplete.exec();
                this->hide();
            }else{ //has not been previously marked as unreadeable
                acuityResults.append("Row "+ QString::number(rowNumber) + " " + ratios[rowNumber - 1] + "\tNo\n");
                rowNumber--;
                limitRatio = ratios[rowNumber - 1];
                drawLetters();
            }
        }else{
            if(bothEyesTested){
                qDebug() << "both eyes: " << bothEyesTested;
                recordResults();
                examComplete examcomplete;
                examcomplete.setModal(true);
                examcomplete.exec();
                this->hide();
            }else{
                rowNumber = 1;
                drawLetters();
                acuityResults.append("\nRight Eye\n");
                bothEyesTested = true;
                ui->eyeDirection->setText("Cover Your Left Eye");
            }

        }
    }
//    qDebug()<<acuityResults;
}

void acuityexam::drawLetters()
{
        ui->acuityLabel->setText(ratios[rowNumber-1]);

        QLayoutItem *child;
        while ((child = ui->snellenHolder->takeAt(0)) != 0) {
            delete child->widget();
        }

        for(int i = 0; i < rowNumber; i++)
        {
            QLabel *label = new QLabel("Letter");
            int w = pixelSize[rowNumber -1];
            int h = w;
//            qDebug()<< rowNumber;
            if(useTumbling){
                int r = rand() % 4;
                QPixmap file("snellenletters/"+tumbling[r]);
                label->setPixmap(file.scaled(w, h, Qt::KeepAspectRatio));
//                qDebug()<< tumbling[r];
            }else{
                int r = rand() % 9;
                QPixmap file("snellenletters/"+letters[r]);
                label->setPixmap(file.scaled(w, h, Qt::KeepAspectRatio));
//                qDebug()<< "snellenletters/"+letters[r] + " " + w;
//                qDebug()<< r;
            }
    //        label->setAlignment(Qt::AlignHCenter);
            ui->snellenHolder->insertWidget(i, label, 0, Qt::AlignHCenter);
    //        hlayout->insertWidget(i, label);
        }
}

void acuityexam::recordResults()
{
    QFile currentUser("currentPatient.txt");
    if (!currentUser.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug() << "i failed at loading the current patient";
        return;
    }
    QString user = currentUser.readAll();
    currentUser.close();
    qDebug() << user;

    QFile report("accounts/"+user+"/"+user+"_AcuityReport.txt");
    if (!report.open(QIODevice::WriteOnly | QIODevice::Text)){
        qDebug() << "i failed at creating the acuity report";
        return;
    }

    QTextStream out(&report);
    out << acuityResults;
    report.close();

}
