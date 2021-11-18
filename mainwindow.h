 #ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <tickets.h>
#include <QMainWindow>
#include <vector>
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
    void on_qb_ajouter_clicked();

    void on_qb_supprimer_clicked();

    void on_qb_modifier_clicked();

    void on_comboBox_activated(const QString &arg1);




    void on_trireferance_clicked();

    void on_triprix_clicked();

    void on_tritempsdepart_clicked();



    void on_lineEdit_textChanged(const QString &arg1);



    void on_pushButton_16_clicked();

    void on_QR_code_clicked();

    void on_qb_revenu_clicked();

    void on_comboBox_2_activated(const QString &arg1);

private:
    Ui::MainWindow *ui;
    Tickets Ti;

};

#endif // MAINWINDOW_H
