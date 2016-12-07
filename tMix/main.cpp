#include "tmix.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    tMix w;
    w.show();

    return a.exec();
}
