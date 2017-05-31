#include "trangchu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    trangchu w;
    w.show();

    return a.exec();
}
