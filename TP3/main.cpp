#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QApplication::setOrganizationDomain("ensicaen.fr");
    QApplication::setOrganizationName("ENSICAEN");
    QApplication::setApplicationName("Invoice v1.0");

    QLocale locale;
    qInfo() << locale.language();

    if(QString::compare(QLocale::system().name(), "fr_FR") == 0) {
        QTranslator * translator = new QTranslator(&app);
        translator->load(":/invoice_fr_FR.qm");
        app.installTranslator(translator);
        std::cerr << "Its french";
    }

    MainWindow w;
    w.show();

    return app.exec();
}
