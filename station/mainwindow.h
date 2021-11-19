#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include "gestionclient.h"
#include "clients.h"
//#include "mainwindow.cpp"
#include <QMainWindow>
//#include "mainwindow.ui"
#include <QObject>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void on_pb_ajouter_clicked();


private slots:
    void on_tabWidget_currentChanged(int index);

private:
    Ui::MainWindow *ui;
    Clients c ;
};
#endif // MAINWINDOW_H
