#include "jalousie.h"
#include "ui_jalousie.h"
#include <mainwindow.h>

jalousie::jalousie(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::jalousie)
{
    ui->setupUi(this);


}

jalousie::~jalousie()
{
    delete ui;
}

void jalousie::on_backjalousie_clicked()
{
    auto backjalousie = new MainWindow();
    backjalousie->showFullScreen();
    this->hide();
}

void jalousie::on_buttonup_pressed(){


}


void jalousie::on_buttondown_pressed()
{

}

void jalousie::on_buttonup_released()
{

}

void jalousie::on_buttondown_released()
{

}
