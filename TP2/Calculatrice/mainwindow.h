/* @author: Lauren Rolan
 * @file: mainwindow.cpp
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenuBar>
#include <QLineEdit>
#include <QButtonGroup>
#include "Controller.h"

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
    void about();
    void writeOnScreen(int index);
    void clearScreen();
    void changeBase(QString base);
    void toggleSuffix();

    void popUpBin();
    void popUpDec();
    void popUpHex();

private:
    Ui::MainWindow *ui;
    QLineEdit * screen;
    QButtonGroup * numbers;
    Controller controller;
    bool showSuffix;

    void setSuffix();
    void removeSuffix();

    void keyPressEvent(QKeyEvent * event);
};

#endif // MAINWINDOW_H
