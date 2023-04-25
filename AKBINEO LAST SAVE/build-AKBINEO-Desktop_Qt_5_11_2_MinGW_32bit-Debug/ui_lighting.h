/********************************************************************************
** Form generated from reading UI file 'lighting.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHTING_H
#define UI_LIGHTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lighting
{
public:
    QWidget *centralwidget;
    QPushButton *openall;
    QPushButton *closeall;
    QPushButton *buttondown;
    QPushButton *backlighting;
    QPushButton *buttonleft;
    QLabel *label;
    QPushButton *buttonmid;
    QPushButton *buttonup;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *lighting)
    {
        if (lighting->objectName().isEmpty())
            lighting->setObjectName(QStringLiteral("lighting"));
        lighting->resize(640, 542);
        lighting->setAutoFillBackground(false);
        lighting->setStyleSheet(QStringLiteral("background-image: url(:/ofis off 2.jpg);"));
        centralwidget = new QWidget(lighting);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        openall = new QPushButton(centralwidget);
        openall->setObjectName(QStringLiteral("openall"));
        openall->setGeometry(QRect(150, 440, 81, 31));
        closeall = new QPushButton(centralwidget);
        closeall->setObjectName(QStringLiteral("closeall"));
        closeall->setGeometry(QRect(380, 440, 81, 31));
        buttondown = new QPushButton(centralwidget);
        buttondown->setObjectName(QStringLiteral("buttondown"));
        buttondown->setGeometry(QRect(470, 340, 41, 41));
        buttondown->setStyleSheet(QLatin1String("#buttondown {\n"
"background-color: transparent;\n"
"border-image: url(:/lighting off.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#buttondown:checked \n"
"{\n"
" border-image: url(:/lighting on.png);\n"
"self.onOffLoadDial.setCheckable(True)\n"
"self.onOffLoadDial.setChecked(False)\n"
"}\n"
""));
        backlighting = new QPushButton(centralwidget);
        backlighting->setObjectName(QStringLiteral("backlighting"));
        backlighting->setGeometry(QRect(540, 370, 81, 41));
        backlighting->setStyleSheet(QStringLiteral("background-image: url(:/back.png);"));
        buttonleft = new QPushButton(centralwidget);
        buttonleft->setObjectName(QStringLiteral("buttonleft"));
        buttonleft->setGeometry(QRect(190, 70, 41, 41));
        buttonleft->setAutoFillBackground(false);
        buttonleft->setStyleSheet(QLatin1String("#buttonleft{\n"
"background-color: transparent;\n"
"border-image: url(:/lighting off.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#buttonleft:checked \n"
"{\n"
" border-image: url(:/lighting on.png);\n"
"self.onOffLoadDial.setCheckable(True)\n"
"self.onOffLoadDial.setChecked(False)\n"
"}\n"
""));
        buttonleft->setIconSize(QSize(300, 100));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 10, 521, 31));
        label->setStyleSheet(QStringLiteral(""));
        buttonmid = new QPushButton(centralwidget);
        buttonmid->setObjectName(QStringLiteral("buttonmid"));
        buttonmid->setGeometry(QRect(330, 200, 41, 41));
        buttonmid->setStyleSheet(QLatin1String("#buttonmid{\n"
"background-color: transparent;\n"
"border-image: url(:/lighting off.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#buttonmid:checked \n"
"{\n"
" border-image: url(:/lighting on.png);\n"
"self.onOffLoadDial.setCheckable(True)\n"
"self.onOffLoadDial.setChecked(False)\n"
"}\n"
""));
        buttonup = new QPushButton(centralwidget);
        buttonup->setObjectName(QStringLiteral("buttonup"));
        buttonup->setGeometry(QRect(450, 80, 41, 41));
        buttonup->setStyleSheet(QLatin1String("#buttonup {\n"
"background-color: transparent;\n"
"border-image: url(:/lighting off.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#buttonup:checked \n"
"{\n"
" border-image: url(:/light on.png);\n"
"self.onOffLoadDial.setCheckable(True)\n"
"self.onOffLoadDial.setChecked(False)\n"
"}\n"
""));
        lighting->setCentralWidget(centralwidget);
        menubar = new QMenuBar(lighting);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 27));
        lighting->setMenuBar(menubar);
        statusbar = new QStatusBar(lighting);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        lighting->setStatusBar(statusbar);

        retranslateUi(lighting);

        QMetaObject::connectSlotsByName(lighting);
    } // setupUi

    void retranslateUi(QMainWindow *lighting)
    {
        lighting->setWindowTitle(QApplication::translate("lighting", "MainWindow", nullptr));
        openall->setText(QApplication::translate("lighting", "Open All", nullptr));
        closeall->setText(QApplication::translate("lighting", "Close All", nullptr));
        buttondown->setText(QString());
        backlighting->setText(QString());
        buttonleft->setText(QString());
        label->setText(QString());
        buttonmid->setText(QString());
        buttonup->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class lighting: public Ui_lighting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHTING_H
