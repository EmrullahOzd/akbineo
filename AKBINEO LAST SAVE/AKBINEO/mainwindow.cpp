#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "lighting.h"
#include "jalousie.h"
#include <QTime>
#include <QDate>
#include <QTimer>
#include <QUrl>
#include <QtNetwork/QNetworkAccessManager>
#include <QXmlStreamReader>
#include <QtNetwork/QNetworkRequest>












MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QTimer *timer=new QTimer(this);
    connect(timer ,SIGNAL(timeout()),this,SLOT(showTime()));
    timer->start();

    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(slotFinished(QNetworkReply*)));
    QUrl url("http://rss.weatherzone.com.au/?u=12994-1285&lt=aploc&lc=9388&obs=1&fc=1&warn=1");


    manager->get(QNetworkRequest(QUrl(url)));


}





MainWindow::~MainWindow()
{


    delete ui;
}

void MainWindow::on_lighting_clicked()
{

    auto golighting = new lighting();
    golighting->showFullScreen();
    this->hide();

}





void MainWindow::on_jalousie_clicked()
{
    auto gojalousie = new jalousie();
    gojalousie->showFullScreen();
    this->hide();
}




void MainWindow::on_exit_clicked()
{
    this->close();
}

void MainWindow::showTime()
{

 QDate cd = QDate::currentDate();
 QTime ct = QTime::currentTime();

 ui->label->setText(cd.toString());
 ui->label_2->setText(ct.toString());

}


void MainWindow::slotFinished()
{


}


