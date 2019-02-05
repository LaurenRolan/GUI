#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenuBar>

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
    void evaluate();
    void writeOnScreen();
    void clear();
    void changeBase();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
