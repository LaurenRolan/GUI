#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "InvoiceModel.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("Invoice v1.0"));

    QCoreApplication::setAttribute(Qt::AA_DontUseNativeMenuBar);

    QMenuBar * menuBar = new QMenuBar;
    QMenu * fileMenu = new QMenu(tr("&File"), menuBar);

    menuBar->addMenu(fileMenu);
     setMenuBar(menuBar);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lastNameEdit_editingFinished()
{

}
