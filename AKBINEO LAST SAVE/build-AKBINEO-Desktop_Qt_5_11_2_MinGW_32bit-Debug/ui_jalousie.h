/********************************************************************************
** Form generated from reading UI file 'jalousie.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JALOUSIE_H
#define UI_JALOUSIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_jalousie
{
public:
    QWidget *centralwidget;
    QPushButton *buttondown;
    QPushButton *buttonup;
    QLabel *label;
    QPushButton *backjalousie;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *jalousie)
    {
        if (jalousie->objectName().isEmpty())
            jalousie->setObjectName(QStringLiteral("jalousie"));
        jalousie->resize(640, 480);
        jalousie->setContextMenuPolicy(Qt::ActionsContextMenu);
        centralwidget = new QWidget(jalousie);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        buttondown = new QPushButton(centralwidget);
        buttondown->setObjectName(QStringLiteral("buttondown"));
        buttondown->setGeometry(QRect(220, 230, 133, 111));
        buttondown->setStyleSheet(QStringLiteral("background-image: url(:/down.png);"));
        buttonup = new QPushButton(centralwidget);
        buttonup->setObjectName(QStringLiteral("buttonup"));
        buttonup->setGeometry(QRect(220, 70, 131, 111));
        buttonup->setStyleSheet(QStringLiteral("background-image: url(:/up.png);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 40, 221, 41));
        backjalousie = new QPushButton(centralwidget);
        backjalousie->setObjectName(QStringLiteral("backjalousie"));
        backjalousie->setGeometry(QRect(490, 350, 81, 41));
        backjalousie->setStyleSheet(QStringLiteral("background-image: url(:/back.png);"));
        jalousie->setCentralWidget(centralwidget);
        menubar = new QMenuBar(jalousie);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 27));
        jalousie->setMenuBar(menubar);
        statusbar = new QStatusBar(jalousie);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        jalousie->setStatusBar(statusbar);

        retranslateUi(jalousie);

        QMetaObject::connectSlotsByName(jalousie);
    } // setupUi

    void retranslateUi(QMainWindow *jalousie)
    {
        jalousie->setWindowTitle(QApplication::translate("jalousie", "MainWindow", nullptr));
        buttondown->setText(QString());
        buttonup->setText(QString());
        label->setText(QString());
        backjalousie->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class jalousie: public Ui_jalousie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JALOUSIE_H
