/********************************************************************************
** Form generated from reading UI file 'heating.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEATING_H
#define UI_HEATING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_heating
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *heating)
    {
        if (heating->objectName().isEmpty())
            heating->setObjectName(QStringLiteral("heating"));
        heating->resize(640, 480);
        centralwidget = new QWidget(heating);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        heating->setCentralWidget(centralwidget);
        menubar = new QMenuBar(heating);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 27));
        heating->setMenuBar(menubar);
        statusbar = new QStatusBar(heating);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        heating->setStatusBar(statusbar);

        retranslateUi(heating);

        QMetaObject::connectSlotsByName(heating);
    } // setupUi

    void retranslateUi(QMainWindow *heating)
    {
        heating->setWindowTitle(QApplication::translate("heating", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class heating: public Ui_heating {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEATING_H
