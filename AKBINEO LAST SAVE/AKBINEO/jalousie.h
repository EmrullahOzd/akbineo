#ifndef jalousie_H
#define jalousie_H

#include <QMainWindow>
#include <mainwindow.h>

namespace Ui {
class jalousie;
}

class jalousie : public QMainWindow
{
    Q_OBJECT

public:
    explicit jalousie(QWidget *parent = 0);
    ~jalousie();

private slots:
    void on_backjalousie_clicked();

    void on_buttonup_pressed();

    void on_buttondown_pressed();

    void on_buttonup_released();

    void on_buttondown_released();

private:
    Ui::jalousie *ui;
};

#endif // jalousie_H
