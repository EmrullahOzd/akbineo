#include "lighting.h"
#include "ui_lighting.h"

#include <mainwindow.h>


    lighting::lighting(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::lighting)
{
    ui->setupUi(this);



}

lighting::~lighting()
{
    delete ui;
}

void lighting::on_openall_clicked()
{


}

void lighting::on_closeall_clicked()
{

}

void lighting::on_backlighting_clicked()
{
    auto backlighting = new MainWindow();
    backlighting->showFullScreen();
    this->hide();
}

void lighting::on_buttonup_toggled(bool)
{

}

void lighting::on_buttondown_toggled(bool)
{

}

void lighting::on_buttonmid_toggled(bool)
{

}

void lighting::on_buttonleft_toggled(bool)
{

}
