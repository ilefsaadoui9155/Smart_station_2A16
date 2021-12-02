#ifndef WINDOW_H
#define WINDOW_H

#include <QDialog>
#include "mainwindow.h"
#include "reparation/mainwindow1.h"
#include "client/gestionclient.h"
#include "bus/mainwindow2.h"
#include "ticket/mainwindow3.h"


namespace Ui {
class Window;
}

class Window : public QDialog
{
    Q_OBJECT

public:
    explicit Window(QWidget *parent = nullptr);
    ~Window();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Window *ui;
    MainWindow *employe;
    MainWindow1 *reparation;
    gestionClient *client;
    MainWindow2 *bus;
    MainWindow3 *ticket;
};

#endif // WINDOW_H
