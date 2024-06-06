#include "azak_roket_gui.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Azak_Roket_GUI w;
    w.show();
    return a.exec();
}
