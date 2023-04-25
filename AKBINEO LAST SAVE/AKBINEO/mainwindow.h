#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <lighting.h>
#include <jalousie.h>
#include <QtNetwork/QNetworkAccessManager>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:


private slots:
    void on_lighting_clicked();


    void on_jalousie_clicked();


    void on_exit_clicked();

    void showTime();

    void slotFinished();






private:
    Ui::MainWindow *ui;


};

#endif // MAINWINDOW_H
