#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setOrganizationDomain("ensicaen.fr");
    QApplication::setOrganizationName("ENSICAEN");
    QApplication::setApplicationName("Invoice v1.0");

    MainWindow w;
    w.show();

    return a.exec();
}
