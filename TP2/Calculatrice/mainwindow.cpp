#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Controller.h"
#include <QLayout>
#include <QMessageBox>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QPushButton>
#include <QShortcut>
#include <QKeyEvent>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //To allow use of keyboard
    setFocusPolicy(Qt::StrongFocus);

    //To show the menu in the application
    QCoreApplication::setAttribute(Qt::AA_DontUseNativeMenuBar);

    QMenuBar * calcMenuBar = new QMenuBar;
    QMenu * fichier = new QMenu(tr("&Fichier"), calcMenuBar);
    QMenu * options = new QMenu(tr("&Options"), calcMenuBar);
    QMenu * aide = new QMenu(tr("&Aide"), calcMenuBar);

    QAction * quitter = new QAction(tr("&Quitter"), fichier);
    QAction * aPropos = new QAction(tr("A &propos"), aide);
    QAction * suffixe = new QAction(tr("&Suffixe"), options);

    fichier->addAction(quitter);
    aide->addAction(aPropos);
    suffixe->setCheckable(true);
    options->addAction(suffixe);

    calcMenuBar->addMenu(fichier);
    calcMenuBar->addMenu(options);
    calcMenuBar->addMenu(aide);

    showSuffix = false;

    connect(suffixe, SIGNAL(triggered()), this, SLOT(toggleSuffix()));
    connect(aPropos, SIGNAL(triggered()), this, SLOT(about()));
    connect(quitter, SIGNAL(triggered()), this, SLOT(close()));

    setMenuBar(calcMenuBar);

    setWindowTitle(tr("Calculatrice"));

    QVBoxLayout * mainLayout = new QVBoxLayout(this);
    QLabel * calcLabel = new QLabel("Calculatrice");
    screen = new QLineEdit;
    screen->setAlignment(Qt::AlignRight);
    screen->setReadOnly(true);

    mainLayout->addWidget(calcLabel);
    mainLayout->addWidget(screen);

    centralWidget()->setLayout(mainLayout);

    QGridLayout * keys = new QGridLayout(this);
    numbers = new QButtonGroup(this);
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

    numbers->addButton(_0, Controller::Button_0);
    numbers->addButton(_1, Controller::Button_1);
    numbers->addButton(_2, Controller::Button_2);
    numbers->addButton(_3, Controller::Button_3);
    numbers->addButton(_4, Controller::Button_4);
    numbers->addButton(_5, Controller::Button_5);
    numbers->addButton(_6, Controller::Button_6);
    numbers->addButton(_7, Controller::Button_7);
    numbers->addButton(_8, Controller::Button_8);
    numbers->addButton(_9, Controller::Button_9);
    numbers->addButton(_A, Controller::Button_A);
    numbers->addButton(_B, Controller::Button_B);
    numbers->addButton(_C, Controller::Button_C);
    numbers->addButton(_D, Controller::Button_D);
    numbers->addButton(_E, Controller::Button_E);
    numbers->addButton(_F, Controller::Button_F);

    connect(numbers, SIGNAL(buttonClicked(int)), this, SLOT(writeOnScreen(int)));

    QButtonGroup * modifiers = new QButtonGroup(this);
    QPushButton * _plus = new QPushButton("+");
    QPushButton * _minus = new QPushButton("-");
    QPushButton * _equals = new QPushButton("=");
    QPushButton * _mult = new QPushButton("*");
    QPushButton * _div = new QPushButton("/");
    QPushButton * _point = new QPushButton(".");

    modifiers->addButton(_plus, Controller::Button_Plus);
    modifiers->addButton(_minus, Controller::Button_Minus);
    modifiers->addButton(_mult, Controller::Button_Multiply);
    modifiers->addButton(_div, Controller::Button_Divide);
    modifiers->addButton(_point, Controller::Button_Dot);
    modifiers->addButton(_equals, Controller::Button_Equal);

    connect(modifiers, SIGNAL(buttonClicked(int)), this, SLOT(writeOnScreen(int)));

    QComboBox * base = new QComboBox;
    base->addItem("Hex");
    base->addItem("Dec");
    base->addItem("Bin");

    controller.setBase(Controller::Dec);
    base->setCurrentIndex(1);
    changeBase(QString("Dec"));

    connect(base, SIGNAL(currentIndexChanged(QString)), this, SLOT(changeBase(QString)));

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

    QPushButton * clear = new QPushButton(tr("C"));
    QPushButton * quit = new QPushButton(tr("Quit"));

    mainLayout->addWidget(clear);
    mainLayout->addWidget(quit);

    connect(clear, SIGNAL(clicked(bool)), this, SLOT(clearScreen()));
    connect(quit, SIGNAL(clicked(bool)), this, SLOT(close()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::about() {
    QMessageBox::about(this, tr("A propos de Calculatrice"),
                tr("Calculatrice<br/>(c) 2019 Lauren Rolan"));
}

void MainWindow::writeOnScreen(int index)
{
    controller.command((Controller::ButtonID) index);
    screen->setText(controller.getText());
    if(showSuffix) {
        setSuffix();
    }
}

void MainWindow::clearScreen()
{
    writeOnScreen(Controller::Button_Clear);
}

void MainWindow::removeSuffix()
{
    screen->setText(controller.getText());
}

void MainWindow::setSuffix()
{
    int base = controller.base();
    switch (base) {
    case Controller::Bin:
        screen->setText(controller.getText() + "b");
        break;
    case Controller::Hex:
        screen->setText(controller.getText() + "h");
        break;
    case Controller::Dec:
        screen->setText(controller.getText());
        break;
    default:
        break;
    }
}

void MainWindow::changeBase(QString base)
{
    if(base == QString("Bin")) {
        numbers->button(2)->setDisabled(true);
        numbers->button(3)->setDisabled(true);
        numbers->button(4)->setDisabled(true);
        numbers->button(5)->setDisabled(true);
        numbers->button(6)->setDisabled(true);
        numbers->button(7)->setDisabled(true);
        numbers->button(8)->setDisabled(true);
        numbers->button(9)->setDisabled(true);
        numbers->button(10)->setDisabled(true);
        numbers->button(11)->setDisabled(true);
        numbers->button(12)->setDisabled(true);
        numbers->button(13)->setDisabled(true);
        numbers->button(14)->setDisabled(true);
        numbers->button(15)->setDisabled(true);
        controller.setBase(Controller::Bin);
    } else if (base == QString("Dec")) {
        numbers->button(2)->setDisabled(false);
        numbers->button(3)->setDisabled(false);
        numbers->button(4)->setDisabled(false);
        numbers->button(5)->setDisabled(false);
        numbers->button(6)->setDisabled(false);
        numbers->button(7)->setDisabled(false);
        numbers->button(8)->setDisabled(false);
        numbers->button(9)->setDisabled(false);

        numbers->button(10)->setDisabled(true);
        numbers->button(11)->setDisabled(true);
        numbers->button(12)->setDisabled(true);
        numbers->button(13)->setDisabled(true);
        numbers->button(14)->setDisabled(true);
        numbers->button(15)->setDisabled(true);
        controller.setBase(Controller::Dec);
    } else if (base == QString("Hex")) {
        numbers->button(2)->setDisabled(false);
        numbers->button(3)->setDisabled(false);
        numbers->button(4)->setDisabled(false);
        numbers->button(5)->setDisabled(false);
        numbers->button(6)->setDisabled(false);
        numbers->button(7)->setDisabled(false);
        numbers->button(8)->setDisabled(false);
        numbers->button(9)->setDisabled(false);

        numbers->button(10)->setDisabled(false);
        numbers->button(11)->setDisabled(false);
        numbers->button(12)->setDisabled(false);
        numbers->button(13)->setDisabled(false);
        numbers->button(14)->setDisabled(false);
        numbers->button(15)->setDisabled(false);
        controller.setBase(Controller::Hex);
    }
    screen->setText(controller.getText());
    if(showSuffix) {
        setSuffix();
    }
}

void MainWindow::toggleSuffix() {
    showSuffix = !showSuffix;
    if(showSuffix) {
        setSuffix();
    } else {
        removeSuffix();
    }
}

void MainWindow::keyPressEvent(QKeyEvent * event) {
     int key = event->key();

     if (key == Qt::Key_0 || key == Qt::Key_1)
         writeOnScreen(key - 0x30);
     //Only if Decimal or Hexadecimal
     else if (key >= Qt::Key_2 && key <= Qt::Key_9 &&
             (controller.base() == Controller::Dec ||
              controller.base() == Controller::Hex))
         writeOnScreen(key - 0x30);
     //Only if Hexadecimal
     else if (key >= Qt::Key_A && key <= Qt::Key_F && controller.base() == Controller::Hex)
         writeOnScreen(key - 0x37);
     else if (key == Qt::Key_Enter || key == Qt::Key_Return || key == Qt::Key_Equal)
         writeOnScreen(Controller::Button_Equal);
     else if (key == Qt::Key_Plus)
         writeOnScreen(Controller::Button_Plus);
     else if (key == Qt::Key_Minus)
         writeOnScreen(Controller::Button_Minus);
     else if (key == Qt::Key_Slash)
         writeOnScreen(Controller::Button_Divide);
     else if (key == Qt::Key_Asterisk)
         writeOnScreen(Controller::Button_Multiply);
     else if (key == Qt::Key_Period)
         writeOnScreen(Controller::Button_Dot);
     else if (key == Qt::Key_Backspace)
         writeOnScreen(Controller::Button_Clear);
}
