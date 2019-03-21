/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <qpaint.h>

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
    QScrollBar *verticalScrollBar;
    QMenuBar *menubar;
    QMenu *menu_File;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1192, 718);
        newFileButton = new QAction(MainWindow);
        newFileButton->setObjectName(QStringLiteral("newFileButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        newFileButton->setIcon(icon);
        openFileButton = new QAction(MainWindow);
        openFileButton->setObjectName(QStringLiteral("openFileButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        openFileButton->setIcon(icon1);
        saveAsButton = new QAction(MainWindow);
        saveAsButton->setObjectName(QStringLiteral("saveAsButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/document-save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveAsButton->setIcon(icon2);
        saveButton = new QAction(MainWindow);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/document-save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveButton->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
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
        tableEdit->setObjectName(QStringLiteral("tableEdit"));
        tableEdit->setGeometry(QRect(30, 190, 631, 491));
        tableEdit->setAlternatingRowColors(true);
        tableEdit->horizontalHeader()->setCascadingSectionResizes(true);
        tableEdit->horizontalHeader()->setDefaultSectionSize(150);
        tableEdit->horizontalHeader()->setStretchLastSection(false);
        customerLabel = new QLabel(centralwidget);
        customerLabel->setObjectName(QStringLiteral("customerLabel"));
        customerLabel->setGeometry(QRect(280, -10, 121, 41));
        QFont font;
        font.setPointSize(20);
        customerLabel->setFont(font);
        lastNameLabel = new QLabel(centralwidget);
        lastNameLabel->setObjectName(QStringLiteral("lastNameLabel"));
        lastNameLabel->setGeometry(QRect(90, 30, 71, 17));
        firstNameLabel = new QLabel(centralwidget);
        firstNameLabel->setObjectName(QStringLiteral("firstNameLabel"));
        firstNameLabel->setGeometry(QRect(390, 30, 81, 17));
        address1Label = new QLabel(centralwidget);
        address1Label->setObjectName(QStringLiteral("address1Label"));
        address1Label->setGeometry(QRect(90, 60, 67, 17));
        address2Label = new QLabel(centralwidget);
        address2Label->setObjectName(QStringLiteral("address2Label"));
        address2Label->setGeometry(QRect(90, 90, 67, 17));
        itemsLabel = new QLabel(centralwidget);
        itemsLabel->setObjectName(QStringLiteral("itemsLabel"));
        itemsLabel->setGeometry(QRect(300, 150, 71, 41));
        itemsLabel->setFont(font);
        zipCodeLabel = new QLabel(centralwidget);
        zipCodeLabel->setObjectName(QStringLiteral("zipCodeLabel"));
        zipCodeLabel->setGeometry(QRect(100, 120, 61, 17));
        cityLabel = new QLabel(centralwidget);
        cityLabel->setObjectName(QStringLiteral("cityLabel"));
        cityLabel->setGeometry(QRect(430, 120, 31, 17));
        lastNameEdit = new QLineEdit(centralwidget);
        lastNameEdit->setObjectName(QStringLiteral("lastNameEdit"));
        lastNameEdit->setGeometry(QRect(170, 30, 171, 20));
        firstNameEdit = new QLineEdit(centralwidget);
        firstNameEdit->setObjectName(QStringLiteral("firstNameEdit"));
        firstNameEdit->setGeometry(QRect(470, 30, 181, 20));
        cityEdit = new QLineEdit(centralwidget);
        cityEdit->setObjectName(QStringLiteral("cityEdit"));
        cityEdit->setGeometry(QRect(470, 120, 181, 20));
        zipCodeEdit = new QLineEdit(centralwidget);
        zipCodeEdit->setObjectName(QStringLiteral("zipCodeEdit"));
        zipCodeEdit->setGeometry(QRect(170, 120, 171, 20));
        address1Edit = new QLineEdit(centralwidget);
        address1Edit->setObjectName(QStringLiteral("address1Edit"));
        address1Edit->setGeometry(QRect(170, 60, 481, 20));
        address2Edit = new QLineEdit(centralwidget);
        address2Edit->setObjectName(QStringLiteral("address2Edit"));
        address2Edit->setGeometry(QRect(170, 90, 481, 20));
        widget = new QPaint(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(720, 10, 451, 651));
        verticalScrollBar = new QScrollBar(centralwidget);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(660, 190, 16, 441));
        verticalScrollBar->setOrientation(Qt::Vertical);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1192, 25));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        newFileButton->setText(QApplication::translate("MainWindow", "&New File", Q_NULLPTR));
        openFileButton->setText(QApplication::translate("MainWindow", "&Open File", Q_NULLPTR));
        saveAsButton->setText(QApplication::translate("MainWindow", "Save &As", Q_NULLPTR));
        saveButton->setText(QApplication::translate("MainWindow", "&Save", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableEdit->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Description", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableEdit->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Quantit\303\251", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableEdit->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Unit (excl. taxes)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableEdit->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Total (excl. taxes)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableEdit->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableEdit->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableEdit->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableEdit->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableEdit->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableEdit->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableEdit->verticalHeaderItem(6);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableEdit->verticalHeaderItem(7);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableEdit->verticalHeaderItem(8);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableEdit->verticalHeaderItem(9);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableEdit->verticalHeaderItem(10);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableEdit->verticalHeaderItem(11);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableEdit->verticalHeaderItem(12);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableEdit->verticalHeaderItem(13);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableEdit->verticalHeaderItem(14);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "15", Q_NULLPTR));

        const bool __sortingEnabled = tableEdit->isSortingEnabled();
        tableEdit->setSortingEnabled(false);
        tableEdit->setSortingEnabled(__sortingEnabled);

        customerLabel->setText(QApplication::translate("MainWindow", "Customer", Q_NULLPTR));
        lastNameLabel->setText(QApplication::translate("MainWindow", "Last name", Q_NULLPTR));
        firstNameLabel->setText(QApplication::translate("MainWindow", "First name", Q_NULLPTR));
        address1Label->setText(QApplication::translate("MainWindow", "Address 1", Q_NULLPTR));
        address2Label->setText(QApplication::translate("MainWindow", "Address 2", Q_NULLPTR));
        itemsLabel->setText(QApplication::translate("MainWindow", "Items", Q_NULLPTR));
        zipCodeLabel->setText(QApplication::translate("MainWindow", "Zip Code", Q_NULLPTR));
        cityLabel->setText(QApplication::translate("MainWindow", "City", Q_NULLPTR));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
