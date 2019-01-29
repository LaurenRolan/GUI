/**
 * @file   main.cpp
 * @author Sebastien Fourey
 * 
 * @brief  Sample Qt application.
 */
#include <QApplication>
#include "MainWidget.h"
#include "ColorWidget.h"

int
main(int argc, char * argv[])
{
  QApplication app(argc,argv);  
  MainWidget mainWidget;

  mainWidget.setWindowTitle("This should override that");
 
  // Ask for the main widget (application main window) to show up.
  mainWidget.show();

  // Run the main event loop.
  return app.exec();
}
