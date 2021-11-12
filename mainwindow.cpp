#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tickets.h"
#include "QMessageBox"
#include <QDate>
#include "QSqlQuery"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tab_tickets->setModel(Ti.afficher());
    ui->comboBox->setModel(Ti.afficher());

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
        double prix=ui->le_prix_2->text().toDouble();

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

ui->tab_tickets->setModel (T.afficher());
}

void MainWindow::on_qb_supprimer_clicked()
{int id =ui->comboBox->currentText().toInt();
    bool test=Ti.supprimer(id);

    if(test)
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("supression effectué .\n"
                                "Click Ok to exit."), QMessageBox::Ok);
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("échec suprresion.\n"
                                "Click cancel to exit."), QMessageBox::Cancel);
    ui->tab_tickets->setModel(Ti.afficher());

}

void MainWindow::on_qb_modifier_clicked()
{
    int referance=ui->le_referance_2->text().toInt();
        int depart=ui->le_depart->text().toInt();
        int arrive=ui->le_arrive_2->text().toInt();
        QString destination=ui->le_destination_2->text();
        QString datee=ui->le_date_2->text();
        double prix=ui->le_prix_2->text().toDouble();

           Tickets T(referance,depart,arrive, destination, datee, prix);


         bool test=T.modifier(referance,depart,arrive, destination, datee, prix);
         if(test)
       {ui->tab_tickets->setModel(T.afficher());
       QMessageBox::information(nullptr, QObject::tr("Modifier avec succées "),
                         QObject::tr("invite modifiée.\n"
                                     "Click ok to exit."), QMessageBox::Ok);

       }
         else
             QMessageBox::critical(nullptr, QObject::tr("Modifier a echoué"),
                         QObject::tr("echec d'ajout !.\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_comboBox_activated(const QString &arg1)
{
    int referance = ui->comboBox->currentText().toInt();
     QString id_string= QString::number(referance);
            QSqlQuery query;
            query.prepare("select * from TICKET where REFERANCE='"+id_string+"'");

            if(query.exec()){

                while(query.next())
                {

               ui->le_referance_2->setText(query.value(0).toString());
               ui->le_depart->setText(query.value(1).toString());
                ui->le_arrive_2->setText(query.value(2).toString());
                ui->le_destination_2->setText(query.value(3).toString());
                ui->le_date_2->setText(query.value(4).toString());
                 ui->le_prix_2->setText(query.value(5).toString());
}}
            else
                QMessageBox::critical(nullptr, QObject::tr(" echoué"),
                            QObject::tr("Erreur !.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);

}



void MainWindow::on_trireferance_clicked()
{
  ui->tab_tickets->setModel(Ti.trierreferance());
}

void MainWindow::on_triprix_clicked()
{
    ui->tab_tickets->setModel(Ti.trierprix());
}

void MainWindow::on_tritempsdepart_clicked()
{
    ui->tab_tickets->setModel(Ti.triertempsdepart());
}



void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{

        Tickets T;


    QString nom = ui->lineEdit->text();
    int referance = ui->lineEdit->text().toInt();
    int depart= ui->lineEdit->text().toInt();
    T.recherche(ui->tab_tickets,nom,referance,depart);
    if (ui->lineEdit->text().isEmpty())
    {
        ui->tab_tickets->setModel(Ti.afficher());
    }
    }




