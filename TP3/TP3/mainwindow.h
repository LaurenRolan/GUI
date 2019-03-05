#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qpaint.h"
#include "InvoiceModel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_address1Edit_textEdited(const QString &arg1);

    void on_address2Edit_textEdited(const QString &arg1);

    void on_lastNameEdit_textEdited(const QString &arg1);

    void on_firstNameEdit_textEdited(const QString &arg1);

    void on_zipCodeEdit_textEdited(const QString &arg1);

    void on_cityEdit_textEdited(const QString &arg1);

    void on_tableEdit_cellChanged(int row, int column);

    void saveOnCSV();

    void saveToFile();

    void loadFromFile();

private:
    Ui::MainWindow *ui;
    QPaint * canvas;
    InvoiceModel * model;
};

#endif // MAINWINDOW_H
