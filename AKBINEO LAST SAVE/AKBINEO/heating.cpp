#include "heating.h"
#include "ui_heating.h"

heating::heating(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::heating)
{
    ui->setupUi(this);
}

heating::~heating()
{
    delete ui;
}
