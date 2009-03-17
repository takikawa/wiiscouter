#include <QtGui/QApplication>
#include "wiiscouter.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WiiScouter w;
    w.show();
    return a.exec();
}
