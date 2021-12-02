#ifndef MAINWINDOW3_H
#define MAINWINDOW3_H
#include <ticket/tickets.h>
#include <QMainWindow>
#include <vector>




namespace Ui {
class MainWindow3;
}

class MainWindow3 : public QMainWindow
{
   Q_OBJECT

public:
   explicit MainWindow3(QWidget *parent = nullptr);
   ~MainWindow3();



private slots:
   void on_qb_ajouter_clicked();

   void on_qb_supprimer_clicked();

   void on_qb_modifier_clicked();

   void on_comboBox_activated(const QString &arg1);




   void on_trireferance_clicked();

   void on_triprix_clicked();

   void on_tritempsdepart_clicked();



   void on_lineEdit_textChanged(const QString &arg1);



  // void on_pushButton_16_clicked();

   void on_QR_code_clicked();

   void on_qb_revenu_clicked();

   void on_comboBox_2_activated(const QString &arg1);

private:
   Ui::MainWindow3 *ui;
   Tickets Ti;

};

#endif // MAINWINDOW3_H
