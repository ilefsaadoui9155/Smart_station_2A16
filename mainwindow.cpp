#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tickets.h"
#include "QMessageBox"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->le_date_2->setValidator ( new QIntValidator(0, 99999999, this));
    ui->tab_tickets->setModel(Ti.afficher());

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_qb_ajouter_clicked()
{
    int referance=ui->le_referance_2->text().toInt();
        int depart=ui->le_depart->text().toInt();
        int arrive=ui->le_arrive_2->text().toInt();
        QString destination=ui->le_destination_2->text();
        QString datee=ui->le_date_2->text();
        int prix=ui->le_prix_2->text().toInt();
        Tickets T(referance,depart,arrive, destination, datee, prix);

        bool test=T.ajouter();
        QMessageBox msgBox;
           if(test)
           {
               msgBox.setText("ajout avec succes");
           msgBox.exec();
           }
           else
           {
               msgBox.setText("echec");
           msgBox.exec();
           }


}
