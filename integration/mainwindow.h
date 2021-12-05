#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"employes.h"
#include <QMainWindow>
//#include "window.h"
#include "chat.h"
using namespace DuarteCorporation;

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

    void on_comboBox_2_currentIndexChanged(const QString &arg1);

    void on_trinom_clicked();

    void on_triprenom_clicked();

    void on_triadresse_clicked();

    void on_stat_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButt_clicked();

    void on_chat_2_clicked();

    void on_chat_clicked();

private:
    Ui::MainWindow *ui;
    Employes Em;
    Chat *w;
};

#endif // MAINWINDOW_H
