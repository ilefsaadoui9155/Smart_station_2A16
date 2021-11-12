#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"employes.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_SupprimerButton_clicked();

    void on_ButtonModification_clicked();

private:
    Ui::MainWindow *ui;
    Employes Em;
};

#endif // MAINWINDOW_H
