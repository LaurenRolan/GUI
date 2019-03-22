#include <iostream>
#include <fstream>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "InvoiceModel.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("Invoice v1.0"));

    canvas = ui->widget;
    model = new InvoiceModel();
    canvas->setInvoiceModel(model);

    QCoreApplication::setAttribute(Qt::AA_DontUseNativeMenuBar);

    QMenuBar * menuBar = new QMenuBar;
    QMenu * fileMenu = new QMenu(tr("&File"), menuBar);

    menuBar->addMenu(fileMenu);
    setMenuBar(menuBar);

    connect(ui->saveAsButton, SIGNAL(triggered()), this, SLOT(saveAs()));
    connect(ui->newFileButton, SIGNAL(triggered()), this, SLOT(model->cleanAll()));
    connect(ui->newFileButton, SIGNAL(triggered()), this, SLOT(cleanFields()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::cleanFields()
{
    ui->firstNameEdit->setText("");
    ui->lastNameEdit->setText("");
    ui->cityEdit->setText("");
    ui->zipCodeEdit->setText("");
    ui->address1Edit->setText("");
    ui->address2Edit->setText("");
}


void MainWindow::on_address1Edit_textEdited(const QString &arg1)
{
    model->setAddressLine1(arg1);
    canvas->update();
}

void MainWindow::on_address2Edit_textEdited(const QString &arg1)
{
    model->setAddressLine2(arg1);
    canvas->update();
}

void MainWindow::on_lastNameEdit_textEdited(const QString &arg1)
{
    model->setLastname(arg1);
    canvas->update();
}

void MainWindow::on_firstNameEdit_textEdited(const QString &arg1)
{
    model->setFirstname(arg1);
    canvas->update();
}

void MainWindow::on_zipCodeEdit_textEdited(const QString &arg1)
{
    model->setZipcode(arg1);
    canvas->update();
}

void MainWindow::on_cityEdit_textEdited(const QString &arg1)
{
    model->setCity(arg1);
    canvas->update();
}

void MainWindow::on_tableEdit_cellChanged(int row, int column)
{
    model->setCell(row, column, ui->tableEdit->item(row, column)->text());
    canvas->update();
}

void MainWindow::saveAs()
{
    QString fileName = QFileDialog::getSaveFileName(this,
            tr("Save Invoice"), "",
            tr("Invoice (*.inv);;All Files (*)"));
    if (fileName.isEmpty())
            return;
        else {
            QFile file(fileName);
            if (!file.open(QIODevice::WriteOnly)) {
                QMessageBox::information(this, tr("Unable to open file"),
                    file.errorString());
                return;
            }
            QDataStream out(&file);
            out.setVersion(QDataStream::Qt_4_5);
            out << model->firstname(); //TODO the rest
        }
}



void MainWindow::loadFromFile()
{
    QString fileName = QFileDialog::getOpenFileName(this,
           tr("Open Invoice"), "",
           tr("Invoice (*.inv);;All Files (*)"));
    if (fileName.isEmpty())
            return;
    else {
        filename = fileName;
        saveToFile();
    }
}

void MainWindow::saveToFile()
{
    QFile file(filename);

    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(this, tr("Unable to open file"),
            file.errorString());
        return;
    }

    QDataStream in(&file);
    in.setVersion(QDataStream::Qt_4_5);
    model->cleanAll();
    QString buffer;
    in >> buffer;
    model->setFirstname(buffer);
    update();
}
