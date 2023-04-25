/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *jalousie;
    QPushButton *lighting;
    QPushButton *watercontrol;
    QPushButton *Security;
    QPushButton *airing;
    QPushButton *heating;
    QPushButton *settings;
    QPushButton *exit;
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(640, 480);
        MainWindow->setStyleSheet(QStringLiteral("background-image: url(:/akbineologo.png);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 131, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(476, 10, 121, 21));
        jalousie = new QPushButton(centralWidget);
        jalousie->setObjectName(QStringLiteral("jalousie"));
        jalousie->setGeometry(QRect(460, 50, 152, 93));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(jalousie->sizePolicy().hasHeightForWidth());
        jalousie->setSizePolicy(sizePolicy);
        jalousie->setAutoFillBackground(false);
        jalousie->setStyleSheet(QStringLiteral("border-image: url(:/jalousie.png);"));
        lighting = new QPushButton(centralWidget);
        lighting->setObjectName(QStringLiteral("lighting"));
        lighting->setGeometry(QRect(20, 30, 105, 93));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lighting->sizePolicy().hasHeightForWidth());
        lighting->setSizePolicy(sizePolicy1);
        lighting->setAutoFillBackground(false);
        lighting->setStyleSheet(QStringLiteral("border-image: url(:/lightingX.png);"));
        watercontrol = new QPushButton(centralWidget);
        watercontrol->setObjectName(QStringLiteral("watercontrol"));
        watercontrol->setGeometry(QRect(0, 140, 105, 93));
        sizePolicy.setHeightForWidth(watercontrol->sizePolicy().hasHeightForWidth());
        watercontrol->setSizePolicy(sizePolicy);
        watercontrol->setAutoFillBackground(false);
        watercontrol->setStyleSheet(QStringLiteral("border-image: url(:/watercontrol.png);"));
        Security = new QPushButton(centralWidget);
        Security->setObjectName(QStringLiteral("Security"));
        Security->setGeometry(QRect(480, 160, 152, 93));
        sizePolicy.setHeightForWidth(Security->sizePolicy().hasHeightForWidth());
        Security->setSizePolicy(sizePolicy);
        Security->setAutoFillBackground(false);
        Security->setStyleSheet(QStringLiteral("border-image: url(:/security.png);"));
        airing = new QPushButton(centralWidget);
        airing->setObjectName(QStringLiteral("airing"));
        airing->setGeometry(QRect(450, 270, 152, 125));
        sizePolicy.setHeightForWidth(airing->sizePolicy().hasHeightForWidth());
        airing->setSizePolicy(sizePolicy);
        airing->setAutoFillBackground(false);
        airing->setStyleSheet(QStringLiteral("border-image: url(:/airing.png);"));
        heating = new QPushButton(centralWidget);
        heating->setObjectName(QStringLiteral("heating"));
        heating->setGeometry(QRect(30, 250, 105, 125));
        sizePolicy.setHeightForWidth(heating->sizePolicy().hasHeightForWidth());
        heating->setSizePolicy(sizePolicy);
        heating->setAutoFillBackground(false);
        heating->setStyleSheet(QStringLiteral("border-image: url(:/heating.png);"));
        settings = new QPushButton(centralWidget);
        settings->setObjectName(QStringLiteral("settings"));
        settings->setGeometry(QRect(180, 20, 61, 41));
        sizePolicy.setHeightForWidth(settings->sizePolicy().hasHeightForWidth());
        settings->setSizePolicy(sizePolicy);
        settings->setAutoFillBackground(false);
        settings->setStyleSheet(QStringLiteral("border-image: url(:/settings.png);"));
        exit = new QPushButton(centralWidget);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(299, 0, 81, 31));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 320, 221, 81));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 640, 27));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        jalousie->setText(QString());
        lighting->setText(QString());
        watercontrol->setText(QString());
        Security->setText(QString());
        airing->setText(QString());
        heating->setText(QString());
        settings->setText(QApplication::translate("MainWindow", "    SETTINGS    ", nullptr));
        exit->setText(QApplication::translate("MainWindow", "             EXIT              ", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
