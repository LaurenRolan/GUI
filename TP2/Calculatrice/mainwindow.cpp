#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLayout>
#include <QMessageBox>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QMenuBar * calcMenuBar = new QMenuBar;
    QMenu * fichier = new QMenu(tr("&Fichier"), calcMenuBar);
    QMenu * options = new QMenu(tr("&Options"), calcMenuBar);
    QMenu * aide = new QMenu(tr("&Aide"), calcMenuBar);

    QAction * quitter = new QAction(tr("&Quitter"), fichier);
    QAction * aPropos = new QAction(tr("A &propos"), aide);

    fichier->addAction(quitter);
    aide->addAction(aPropos);

    calcMenuBar->addMenu(fichier);
    calcMenuBar->addMenu(options);
    calcMenuBar->addMenu(aide);

    connect(aPropos, SIGNAL(triggered()), this, SLOT(about()));
    connect(quitter, SIGNAL(triggered()), this, SLOT(close()));

    setMenuBar(calcMenuBar);

    setWindowTitle(tr("Calculatrice"));

    QVBoxLayout * mainLayout = new QVBoxLayout(this);
    QLabel * calcLabel = new QLabel("Calculatrice");
    QLineEdit * screen = new QLineEdit;

    screen->setReadOnly(true);

    mainLayout->addWidget(calcLabel);
    mainLayout->addWidget(screen);

    centralWidget()->setLayout(mainLayout);

    QGridLayout * keys = new QGridLayout(this);
    QButtonGroup * numbers = new QButtonGroup(this);
    QPushButton * _0 = new QPushButton("0");
    QPushButton * _1 = new QPushButton("1");
    QPushButton * _2 = new QPushButton("2");
    QPushButton * _3 = new QPushButton("3");
    QPushButton * _4 = new QPushButton("4");
    QPushButton * _5 = new QPushButton("5");
    QPushButton * _6 = new QPushButton("6");
    QPushButton * _7 = new QPushButton("7");
    QPushButton * _8 = new QPushButton("8");
    QPushButton * _9 = new QPushButton("9");
    QPushButton * _A = new QPushButton("A");
    QPushButton * _B = new QPushButton("B");
    QPushButton * _C = new QPushButton("C");
    QPushButton * _D = new QPushButton("D");
    QPushButton * _E = new QPushButton("E");
    QPushButton * _F = new QPushButton("F");

    numbers->addButton(_0, 0);
    numbers->addButton(_1, 1);
    numbers->addButton(_2, 2);
    numbers->addButton(_3, 3);
    numbers->addButton(_4, 4);
    numbers->addButton(_5, 5);
    numbers->addButton(_6, 6);
    numbers->addButton(_7, 7);
    numbers->addButton(_8, 8);
    numbers->addButton(_9, 9);
    numbers->addButton(_A, 10);
    numbers->addButton(_B, 11);
    numbers->addButton(_C, 12);
    numbers->addButton(_D, 13);
    numbers->addButton(_E, 14);
    numbers->addButton(_F, 15);


    QPushButton * _plus = new QPushButton("+");
    QPushButton * _minus = new QPushButton("-");
    QPushButton * _equals = new QPushButton("=");
    QPushButton * _mult = new QPushButton("*");
    QPushButton * _div = new QPushButton("/");
    QPushButton * _point = new QPushButton(".");

    QComboBox * base = new QComboBox;
    base->addItem("Dec");
    base->addItem("Bin");
    base->addItem("Hex");

    QLabel * baseLabel = new QLabel("Base");

    keys->addWidget(_E, 0, 0);
    keys->addWidget(_F, 0, 1);
    keys->addWidget(baseLabel, 0, 2);
    keys->addWidget(base, 0, 3);
    keys->addWidget(_A, 1, 0);
    keys->addWidget(_B, 1, 1);
    keys->addWidget(_C, 1, 2);
    keys->addWidget(_D, 1, 3);

    keys->addWidget(_7, 2, 0);
    keys->addWidget(_8, 2, 1);
    keys->addWidget(_9, 2, 2);
    keys->addWidget(_plus, 2, 3);

    keys->addWidget(_4, 3, 0);
    keys->addWidget(_5, 3, 1);
    keys->addWidget(_6, 3, 2);
    keys->addWidget(_minus, 3, 3);

    keys->addWidget(_1, 4, 0);
    keys->addWidget(_2, 4, 1);
    keys->addWidget(_3, 4, 2);
    keys->addWidget(_div, 4, 3);

    keys->addWidget(_0, 5, 0);
    keys->addWidget(_point, 5, 1);
    keys->addWidget(_equals, 5, 2);
    keys->addWidget(_mult, 5, 3);

    mainLayout->addLayout(keys);

    QPushButton * clear = new QPushButton("C");
    QPushButton * quit = new QPushButton("Quit");

    mainLayout->addWidget(clear);
    mainLayout->addWidget(quit);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::about() {
    QMessageBox::about(this, tr("A propos de Calculatrice"),
                tr("Calculatrice<br/>(c) 2019 Lauren Rolan"));
}
