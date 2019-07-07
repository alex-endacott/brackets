#include "brackets.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Brackets w;
    w.show();

    return a.exec();
}
