/* @author: Lauren Rolan
 * @file: mainwindow.cpp
 */

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setOrganizationDomain("ensicaen.fr");
    QApplication::setOrganizationName("ENSICAEN");
    QApplication::setApplicationName("Calculatrice");

    MainWindow w;

    w.show();

    return a.exec();
}
