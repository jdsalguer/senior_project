#include "phoe.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    phoe w;
    w.show();

    return a.exec();
}
