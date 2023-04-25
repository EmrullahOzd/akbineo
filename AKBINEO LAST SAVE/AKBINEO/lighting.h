#ifndef lighting_H
#define lighting_H

#include <QMainWindow>
#include <mainwindow.h>

namespace Ui {
class lighting;
}

class lighting : public QMainWindow
{
    Q_OBJECT

public:
    explicit lighting(QWidget *parent = 0);
    ~lighting();

private slots:

    void on_openall_clicked();

    void on_closeall_clicked();

    void on_backlighting_clicked();

    void on_buttonup_toggled(bool);

    void on_buttondown_toggled(bool);

    void on_buttonmid_toggled(bool);

    void on_buttonleft_toggled(bool);

private:
    Ui::lighting *ui;
};

#endif // lighting_H
