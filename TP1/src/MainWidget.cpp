/**
 * @file   MainWidget.cpp
 * @author Sebastien Fourey
 *
 * @brief  MainWidget methods definitions.
 */
#include "MainWidget.h"
#include <QMouseEvent>
#include <QTime>
#include <QTimer>
#include <QString>
#include <QMessageBox>
using namespace std;

MainWidget::MainWidget()
{
  setGeometry(100,100,300,300);
  setMouseTracking(true);

  QLabel *label = new QLabel("Colors, signals, and slots",this);
  label->setGeometry(10,6,290,30);
  label->setFont(QFont("Arial",10,QFont::Bold));

  newLineDisplay = new QLineEdit("",this);
  newLineDisplay->setGeometry(50,70,200,30);
  newLineDisplay->setReadOnly(true);

  lineDisplay = new QLineEdit("",this);
  lineDisplay->setGeometry(50,110,200,30);
  lineDisplay->setAlignment(Qt::AlignHCenter);
  lineDisplay->setReadOnly(true);

  timer = new QTimer(this);
  connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));
  timer->start(1000);

  timeDisplay = new QTimeEdit( QTime().currentTime(), this );
  timeDisplay->setGeometry(50,30,200,30);

  ColorWidget *colorWidget = new ColorWidget(this);
  colorWidget->setGeometry(100,160,80,30);

  QPushButton *pushButtonRandomColor = new QPushButton("Random color",this);
  pushButtonRandomColor->setGeometry(60,200,160,30);

  QPushButton *pushButtonQuit = new QPushButton("Quit",this);
  pushButtonQuit->setGeometry(100,250,80,30);

  connect(pushButtonQuit,SIGNAL(clicked()),
          this,SLOT(quitPressed()));

  connect(pushButtonRandomColor,SIGNAL(clicked()),
          colorWidget,SLOT(changeColor()));

  connect(colorWidget,SIGNAL(colorChanged(int,int,int)),
          this,SLOT(colorChanged(int,int,int)));
}

void MainWidget::quitPressed()
{
  QMessageBox::StandardButton button;
  button = QMessageBox::question(this,
                                 "You want to quit...",
                                 "Are you sure that you want to quit"
                                 " this great application?",
                                 QMessageBox::Yes|QMessageBox::No,
                                 QMessageBox::No );
  if ( button == QMessageBox::Yes ) {
    close();
  }
}


void MainWidget::colorChanged(int r, int g, int b)
{
  QString text("Color: R(%1) G(%2) B(%3)");
  lineDisplay->setText(text.arg(r).arg(g).arg(b));
}


void MainWidget::updateTime()
{
    timeDisplay->setTime(QTime().currentTime());
    timer->start(1000);
}

void MainWidget::mousePressEvent(QMouseEvent * e)
{
    //QString text("(%1, %2)");
    if(e->button() == Qt::RightButton) {
        newLineDisplay->setAlignment(Qt::AlignRight);
    } else if(e->button() == Qt::LeftButton) {
        newLineDisplay->setAlignment(Qt::AlignLeft);
    } else {
        newLineDisplay->setAlignment(Qt::AlignHCenter);
    }
    //newLineDisplay->setText(text.arg(e->x()).arg(e->y()));
}

void  MainWidget::mouseMoveEvent(QMouseEvent * e)
{
    QString text("(%1, %2)");
    newLineDisplay->setText(text.arg(e->x()).arg(e->y()));
}
