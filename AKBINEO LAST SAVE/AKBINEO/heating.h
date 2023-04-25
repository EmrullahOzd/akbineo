#ifndef HEATING_H
#define HEATING_H

#include <QMainWindow>

namespace Ui {
class heating;
}

class heating : public QMainWindow
{
    Q_OBJECT

public:
    explicit heating(QWidget *parent = 0);
    ~heating();

private:
    Ui::heating *ui;
};

#endif // HEATING_H
