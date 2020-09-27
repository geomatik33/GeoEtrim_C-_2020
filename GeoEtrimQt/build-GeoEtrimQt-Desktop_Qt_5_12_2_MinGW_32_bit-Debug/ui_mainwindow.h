/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_Project;
    QAction *actionOpen_Project;
    QAction *actionSave_Project;
    QAction *actionSave_As;
    QAction *actionSave_Export;
    QAction *actionPrint;
    QAction *actionClose_Project;
    QAction *actionClose_All;
    QAction *actionImage;
    QAction *actionGCP;
    QAction *actionGeoTransform;
    QAction *actionGeoSpot;
    QAction *actionGeo3o1;
    QAction *actionGeoPS;
    QAction *actionHelp;
    QAction *actionRegister;
    QAction *actionTerm_of_Use;
    QAction *actionAbout;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuTools;
    QMenu *menuModules;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        actionNew_Project = new QAction(MainWindow);
        actionNew_Project->setObjectName(QString::fromUtf8("actionNew_Project"));
        actionOpen_Project = new QAction(MainWindow);
        actionOpen_Project->setObjectName(QString::fromUtf8("actionOpen_Project"));
        actionSave_Project = new QAction(MainWindow);
        actionSave_Project->setObjectName(QString::fromUtf8("actionSave_Project"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionSave_Export = new QAction(MainWindow);
        actionSave_Export->setObjectName(QString::fromUtf8("actionSave_Export"));
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        actionClose_Project = new QAction(MainWindow);
        actionClose_Project->setObjectName(QString::fromUtf8("actionClose_Project"));
        actionClose_All = new QAction(MainWindow);
        actionClose_All->setObjectName(QString::fromUtf8("actionClose_All"));
        actionImage = new QAction(MainWindow);
        actionImage->setObjectName(QString::fromUtf8("actionImage"));
        actionGCP = new QAction(MainWindow);
        actionGCP->setObjectName(QString::fromUtf8("actionGCP"));
        actionGeoTransform = new QAction(MainWindow);
        actionGeoTransform->setObjectName(QString::fromUtf8("actionGeoTransform"));
        actionGeoSpot = new QAction(MainWindow);
        actionGeoSpot->setObjectName(QString::fromUtf8("actionGeoSpot"));
        actionGeo3o1 = new QAction(MainWindow);
        actionGeo3o1->setObjectName(QString::fromUtf8("actionGeo3o1"));
        actionGeoPS = new QAction(MainWindow);
        actionGeoPS->setObjectName(QString::fromUtf8("actionGeoPS"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionRegister = new QAction(MainWindow);
        actionRegister->setObjectName(QString::fromUtf8("actionRegister"));
        actionTerm_of_Use = new QAction(MainWindow);
        actionTerm_of_Use->setObjectName(QString::fromUtf8("actionTerm_of_Use"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 160, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuModules = new QMenu(menuBar);
        menuModules->setObjectName(QString::fromUtf8("menuModules"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuModules->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew_Project);
        menuFile->addAction(actionOpen_Project);
        menuFile->addAction(actionSave_Project);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionSave_Export);
        menuFile->addAction(actionPrint);
        menuFile->addAction(actionClose_Project);
        menuFile->addAction(actionClose_All);
        menuTools->addAction(actionImage);
        menuTools->addAction(actionGCP);
        menuModules->addAction(actionGeoTransform);
        menuModules->addAction(actionGeoSpot);
        menuModules->addAction(actionGeo3o1);
        menuModules->addAction(actionGeoPS);
        menuHelp->addAction(actionHelp);
        menuHelp->addAction(actionRegister);
        menuHelp->addAction(actionTerm_of_Use);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew_Project->setText(QApplication::translate("MainWindow", "New Project", nullptr));
        actionOpen_Project->setText(QApplication::translate("MainWindow", "Open Project", nullptr));
        actionSave_Project->setText(QApplication::translate("MainWindow", "Save Project", nullptr));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", nullptr));
        actionSave_Export->setText(QApplication::translate("MainWindow", "Save Export", nullptr));
        actionPrint->setText(QApplication::translate("MainWindow", "Print", nullptr));
        actionClose_Project->setText(QApplication::translate("MainWindow", "Close Project", nullptr));
        actionClose_All->setText(QApplication::translate("MainWindow", "Close All", nullptr));
        actionImage->setText(QApplication::translate("MainWindow", "Image", nullptr));
        actionGCP->setText(QApplication::translate("MainWindow", "GCP", nullptr));
        actionGeoTransform->setText(QApplication::translate("MainWindow", "GeoTransform", nullptr));
        actionGeoSpot->setText(QApplication::translate("MainWindow", "GeoSpot", nullptr));
        actionGeo3o1->setText(QApplication::translate("MainWindow", "Geo3o1", nullptr));
        actionGeoPS->setText(QApplication::translate("MainWindow", "GeoPS", nullptr));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", nullptr));
        actionRegister->setText(QApplication::translate("MainWindow", "Register", nullptr));
        actionTerm_of_Use->setText(QApplication::translate("MainWindow", "Term of Use", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "About", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", nullptr));
        menuModules->setTitle(QApplication::translate("MainWindow", "Modules", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
