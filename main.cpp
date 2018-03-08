#include "onlywindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OnlyWindow w;
    w.show();

    return a.exec();
}
