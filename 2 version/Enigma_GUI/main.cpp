#include "enigma.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Enigma w;
    w.show();
    return a.exec();
}
