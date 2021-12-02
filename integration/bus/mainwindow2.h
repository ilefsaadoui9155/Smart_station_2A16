#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H
#include "bus.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow2; }
QT_END_NAMESPACE

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow2(QWidget *parent = nullptr);
    ~MainWindow2();

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
    Ui::MainWindow2 *ui;
    BUS b;

};
#endif // MAINWINDOW2_H
