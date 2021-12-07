#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "reparation.h"
#include"arduino.h"
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



    void on_ajouter_clicked();

    void on_SupprimerButton_clicked();

    void on_ButtonModification_clicked();

    void on_pushButton_76_clicked();

    void on_tableView_3_activated(const QModelIndex &index);

    void on_pushButton_clicked();

    void on_francais_clicked();

    void on_anglais_clicked();

    void on_recherche_clicked();

    void on_radioButton_3_clicked();

    void on_comboBox_activated(int index);

    void on_radioButton_2_clicked();

    void on_radioButton_clicked();

    void on_Imprimer_clicked();

    bool verifrefrep();
    bool verifmatricule();
    bool veriftype();
    bool verifnombre();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::MainWindow *ui;
    reparation tmpreparation;
    reparationh tph;
     QString lng;
     QString filename;

QByteArray data;
Arduino A;

};

#endif // MAINWINDOW_H
