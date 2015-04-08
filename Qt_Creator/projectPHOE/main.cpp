#include "phoe.h"
#include "tester.h"
#include <QApplication>
#include <QTranslator>
#include <QLibraryInfo>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    //phoe w;
    //w.show();
    QTranslator     qtTranslator;
    QString         lang = "virtualBoard_" + QLocale::system().name().mid(0, 2);
    Tester          w;

    //QGuiApplication::setApplicationName("widgetKeyboard");
    if (qtTranslator.load(lang))
        app.installTranslator(&qtTranslator);
    else
        qDebug("Failed to load a translation for QT in your local language");
    w.show();

   // return a.exec();
    return app.exec();
}
