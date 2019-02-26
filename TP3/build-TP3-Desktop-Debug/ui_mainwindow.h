/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include "qpaint.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *newFileButton;
    QAction *openFileButton;
    QAction *saveAsButton;
    QAction *saveButton;
    QWidget *centralwidget;
    QTableWidget *tableEdit;
    QLabel *customerLabel;
    QLabel *lastNameLabel;
    QLabel *firstNameLabel;
    QLabel *address1Label;
    QLabel *address2Label;
    QLabel *itemsLabel;
    QLabel *zipCodeLabel;
    QLabel *cityLabel;
    QLineEdit *lastNameEdit;
    QLineEdit *firstNameEdit;
    QLineEdit *cityEdit;
    QLineEdit *zipCodeEdit;
    QLineEdit *address1Edit;
    QLineEdit *address2Edit;
    QPaint *widget;
    QMenuBar *menubar;
    QMenu *menu_File;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1192, 718);
        newFileButton = new QAction(MainWindow);
        newFileButton->setObjectName(QString::fromUtf8("newFileButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        newFileButton->setIcon(icon);
        openFileButton = new QAction(MainWindow);
        openFileButton->setObjectName(QString::fromUtf8("openFileButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        openFileButton->setIcon(icon1);
        saveAsButton = new QAction(MainWindow);
        saveAsButton->setObjectName(QString::fromUtf8("saveAsButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("document-save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveAsButton->setIcon(icon2);
        saveButton = new QAction(MainWindow);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("document-save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveButton->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableEdit = new QTableWidget(centralwidget);
        if (tableEdit->columnCount() < 4)
            tableEdit->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableEdit->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableEdit->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableEdit->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableEdit->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableEdit->rowCount() < 15)
            tableEdit->setRowCount(15);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableEdit->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableEdit->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableEdit->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableEdit->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableEdit->setVerticalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableEdit->setVerticalHeaderItem(5, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableEdit->setVerticalHeaderItem(6, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableEdit->setVerticalHeaderItem(7, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableEdit->setVerticalHeaderItem(8, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableEdit->setVerticalHeaderItem(9, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableEdit->setVerticalHeaderItem(10, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableEdit->setVerticalHeaderItem(11, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableEdit->setVerticalHeaderItem(12, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableEdit->setVerticalHeaderItem(13, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableEdit->setVerticalHeaderItem(14, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableEdit->setItem(0, 0, __qtablewidgetitem19);
        tableEdit->setObjectName(QString::fromUtf8("tableEdit"));
        tableEdit->setGeometry(QRect(30, 190, 661, 491));
        tableEdit->setAlternatingRowColors(true);
        tableEdit->horizontalHeader()->setCascadingSectionResizes(true);
        tableEdit->horizontalHeader()->setDefaultSectionSize(150);
        tableEdit->horizontalHeader()->setStretchLastSection(false);
        customerLabel = new QLabel(centralwidget);
        customerLabel->setObjectName(QString::fromUtf8("customerLabel"));
        customerLabel->setGeometry(QRect(280, -10, 121, 41));
        QFont font;
        font.setPointSize(20);
        customerLabel->setFont(font);
        lastNameLabel = new QLabel(centralwidget);
        lastNameLabel->setObjectName(QString::fromUtf8("lastNameLabel"));
        lastNameLabel->setGeometry(QRect(90, 30, 71, 17));
        firstNameLabel = new QLabel(centralwidget);
        firstNameLabel->setObjectName(QString::fromUtf8("firstNameLabel"));
        firstNameLabel->setGeometry(QRect(390, 30, 81, 17));
        address1Label = new QLabel(centralwidget);
        address1Label->setObjectName(QString::fromUtf8("address1Label"));
        address1Label->setGeometry(QRect(90, 60, 67, 17));
        address2Label = new QLabel(centralwidget);
        address2Label->setObjectName(QString::fromUtf8("address2Label"));
        address2Label->setGeometry(QRect(90, 90, 67, 17));
        itemsLabel = new QLabel(centralwidget);
        itemsLabel->setObjectName(QString::fromUtf8("itemsLabel"));
        itemsLabel->setGeometry(QRect(300, 150, 71, 41));
        itemsLabel->setFont(font);
        zipCodeLabel = new QLabel(centralwidget);
        zipCodeLabel->setObjectName(QString::fromUtf8("zipCodeLabel"));
        zipCodeLabel->setGeometry(QRect(90, 120, 67, 17));
        cityLabel = new QLabel(centralwidget);
        cityLabel->setObjectName(QString::fromUtf8("cityLabel"));
        cityLabel->setGeometry(QRect(430, 120, 31, 17));
        lastNameEdit = new QLineEdit(centralwidget);
        lastNameEdit->setObjectName(QString::fromUtf8("lastNameEdit"));
        lastNameEdit->setGeometry(QRect(170, 30, 171, 20));
        firstNameEdit = new QLineEdit(centralwidget);
        firstNameEdit->setObjectName(QString::fromUtf8("firstNameEdit"));
        firstNameEdit->setGeometry(QRect(470, 30, 181, 20));
        cityEdit = new QLineEdit(centralwidget);
        cityEdit->setObjectName(QString::fromUtf8("cityEdit"));
        cityEdit->setGeometry(QRect(470, 120, 181, 20));
        zipCodeEdit = new QLineEdit(centralwidget);
        zipCodeEdit->setObjectName(QString::fromUtf8("zipCodeEdit"));
        zipCodeEdit->setGeometry(QRect(170, 120, 171, 20));
        address1Edit = new QLineEdit(centralwidget);
        address1Edit->setObjectName(QString::fromUtf8("address1Edit"));
        address1Edit->setGeometry(QRect(170, 60, 481, 20));
        address2Edit = new QLineEdit(centralwidget);
        address2Edit->setObjectName(QString::fromUtf8("address2Edit"));
        address2Edit->setGeometry(QRect(170, 90, 481, 20));
        widget = new QPaint(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(720, 60, 451, 601));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1192, 25));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        MainWindow->insertToolBarBreak(toolBar);

        menubar->addAction(menu_File->menuAction());
        toolBar->addAction(newFileButton);
        toolBar->addAction(openFileButton);
        toolBar->addAction(saveAsButton);
        toolBar->addAction(saveButton);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        newFileButton->setText(QApplication::translate("MainWindow", "&New File", 0, QApplication::UnicodeUTF8));
        openFileButton->setText(QApplication::translate("MainWindow", "&Open File", 0, QApplication::UnicodeUTF8));
        saveAsButton->setText(QApplication::translate("MainWindow", "Save &As", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("MainWindow", "&Save", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableEdit->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Description", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableEdit->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Unit (excl. taxes)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableEdit->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Nouvelle colonne", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableEdit->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Total (excl. taxes)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableEdit->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableEdit->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableEdit->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableEdit->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableEdit->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableEdit->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableEdit->verticalHeaderItem(6);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableEdit->verticalHeaderItem(7);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableEdit->verticalHeaderItem(8);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = tableEdit->verticalHeaderItem(9);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "10", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = tableEdit->verticalHeaderItem(10);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "11", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = tableEdit->verticalHeaderItem(11);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "12", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = tableEdit->verticalHeaderItem(12);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "13", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = tableEdit->verticalHeaderItem(13);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "14", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem18 = tableEdit->verticalHeaderItem(14);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "15", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = tableEdit->isSortingEnabled();
        tableEdit->setSortingEnabled(false);
        tableEdit->setSortingEnabled(__sortingEnabled);

        customerLabel->setText(QApplication::translate("MainWindow", "Customer", 0, QApplication::UnicodeUTF8));
        lastNameLabel->setText(QApplication::translate("MainWindow", "Last name", 0, QApplication::UnicodeUTF8));
        firstNameLabel->setText(QApplication::translate("MainWindow", "First name", 0, QApplication::UnicodeUTF8));
        address1Label->setText(QApplication::translate("MainWindow", "Address 1", 0, QApplication::UnicodeUTF8));
        address2Label->setText(QApplication::translate("MainWindow", "Address 2", 0, QApplication::UnicodeUTF8));
        itemsLabel->setText(QApplication::translate("MainWindow", "Items", 0, QApplication::UnicodeUTF8));
        zipCodeLabel->setText(QApplication::translate("MainWindow", "Zip Code", 0, QApplication::UnicodeUTF8));
        cityLabel->setText(QApplication::translate("MainWindow", "City", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
