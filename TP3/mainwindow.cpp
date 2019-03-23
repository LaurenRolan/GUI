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
    ui->retranslateUi(this);
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
    connect(ui->saveButton, SIGNAL(triggered()), this, SLOT(saveToFile()));
    connect(ui->openFileButton, SIGNAL(triggered()), this, SLOT(loadFromFile()));
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

    for(int i = 0; i < 15; i++) {
        QTableWidgetItem * item = ui->tableEdit->item(i, 0);
        if(item) item->setText("");
        item = ui->tableEdit->item(i, 1);
        if(item) item->setText("");
        item = ui->tableEdit->item(i, 2);
        if(item) item->setText("");
        item = ui->tableEdit->item(i, 3);
        if(item) item->setText("");
    }
}

void MainWindow::updateFields() {
    ui->firstNameEdit->setText(model->firstname());
    ui->lastNameEdit->setText(model->lastname());
    ui->cityEdit->setText(model->city());
    ui->zipCodeEdit->setText(model->zipcode());
    ui->address1Edit->setText(model->addressLine1());
    ui->address2Edit->setText(model->addressLine2());

    for(int i = 0; i < 15; i++) {
        QTableWidgetItem * item = ui->tableEdit->item(i, 0);
        if(item) item->setText(model->cell(i, 0));
        item = ui->tableEdit->item(i, 1);
        if(item) { item->setText(model->cell(i, 1)); std::cerr << model->cell(i, 1).toStdString(); } //Never enters
        item = ui->tableEdit->item(i, 2);
        if(item) item->setText(model->cell(i, 2));
        item = ui->tableEdit->item(i, 3);
        if(item) item->setText(model->cell(i, 3));
    }

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
    fileName += ".inv";
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
            out << *model;
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
    if(filename.isEmpty()) {
        saveAs();
        return;
    }
    QFile file(filename);

    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(this, tr("Unable to open file"),
            file.errorString());
        return;
    }

    QDataStream in(&file);
    in.setVersion(QDataStream::Qt_4_5);
    model->cleanAll();

    in >> *model;

    updateFields();
    canvas->update();
}
