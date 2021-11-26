#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "bus.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_instagram_2_clicked();

    void on_pb_facebook_2_clicked();
    void showtime();

    void on_pb_modifier_clicked();


    void on_but_modifier_clicked();

    void on_but_img_clicked();

    void on_tab_bus_clicked(const QModelIndex &index);

    void on_but_img2_clicked();

    void on_pb_supprimer_3_clicked();

    void on_pb_afficher_clicked();

    void on_pb_trier_clicked();

    void on_pb_supprimer_2_clicked();

private:
    Ui::MainWindow *ui;
    BUS b;

};
#endif // MAINWINDOW_H
