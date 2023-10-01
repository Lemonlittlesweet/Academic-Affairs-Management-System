#include "testdemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    testdemo w;
    w.show();
    return a.exec();
}
