#include <iostream>
#include <fstream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "InvoiceModel.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("Invoice v1.0"));

    canvas = new QPaint(this);
    model = new InvoiceModel();
    canvas->setInvoiceModel(model);

    QCoreApplication::setAttribute(Qt::AA_DontUseNativeMenuBar);

    QMenuBar * menuBar = new QMenuBar;
    QMenu * fileMenu = new QMenu(tr("&File"), menuBar);

    menuBar->addMenu(fileMenu);
    setMenuBar(menuBar);

    connect(ui->saveAsButton, SIGNAL(triggered()), this, SLOT(saveOnCSV()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_address1Edit_textEdited(const QString &arg1)
{
    model->setAddressLine1(arg1);
}

void MainWindow::on_address2Edit_textEdited(const QString &arg1)
{
    model->setAddressLine2(arg1);
}

void MainWindow::on_lastNameEdit_textEdited(const QString &arg1)
{
    model->setLastname(arg1);
}

void MainWindow::on_firstNameEdit_textEdited(const QString &arg1)
{
    model->setFirstname(arg1);
}

void MainWindow::on_zipCodeEdit_textEdited(const QString &arg1)
{
    model->setZipcode(arg1);
}

void MainWindow::on_cityEdit_textEdited(const QString &arg1)
{
    model->setCity(arg1);
}

void MainWindow::on_tableEdit_cellChanged(int row, int column)
{
    model->setCell(row, column, ui->tableEdit->item(row, column)->text());
}

void MainWindow::saveOnCSV()
{
    std::ofstream myfile;
    myfile.open("data.csv");
    myfile << model->firstname().toStdString() << " , " << model->lastname().toStdString() << std::endl;
    myfile << model->addressLine1().toStdString() << " , " << model->addressLine2().toStdString() << std::endl;
    myfile << model->zipcode().toStdString() << " , " << model->city().toStdString() << std::endl;

    for(int i = 0; i < 15; i++)
    {
        myfile << model->cell(i, 0).toStdString() << " , " << model->cell(i, 1).toStdString() << " , ";
        myfile << model->cell(i, 2).toStdString() << " , " << model->cell(i, 3).toStdString() << std::endl;
    }
    myfile.close();
}


void MainWindow::loadFromFile()
{

}

void MainWindow::saveToFile()
{

}
