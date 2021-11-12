#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employes.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->le_cin_e->setValidator(new QIntValidator(0, 9999999, this));
    ui->tab_Employes->setModel(Em.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()//ajout
{
        QString nom = ui->le_nom->text();
        QString prenom = ui->le_prenom->text();
        QString adresse= ui->l_adresse->text();
        QString fonction= ui->la_fonction->text();
        int cin_e = ui->le_cin_e->text().toUInt();
        Employes E(nom,prenom,adresse,fonction, cin_e);
            bool test=E.ajouter();


            if(test)
            {
                ui->tab_Employes->setModel(Em.afficher());
                QMessageBox::information(nullptr, QObject::tr("OK"),
                           QObject::tr("ajout effectue\n"
                                       "click cancel te exit."), QMessageBox::Cancel);
            }
            else

                QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                           QObject::tr("ajout non effectue\n"
                                       "click cancel te exit."), QMessageBox::Cancel);

        }


void MainWindow::on_SupprimerButton_clicked()
{
    Employes E1; E1.setcin_e(ui->le_cin_supp->text().toInt());
        bool test=E1.supprimer(E1.getcin_e());
        QMessageBox msgBox;

        if(test)
        {
            ui->tab_Employes->setModel(E1.afficher());
            msgBox.setText("suppression avec succes");
        }
        else
        msgBox.setText("echec de suppression");
        msgBox.exec();
}

void MainWindow::on_ButtonModification_clicked()
{

        QString nom = ui->le_nom_2->text();
         QString prenom= ui->le_prenom_2->text();
         QString adresse = ui->l_adresse_2->text();
         QString fonction = ui->la_fonction_2->text();
         int cin_e = ui->le_cin_e_2->text().toInt();

        Employes z(nom, prenom, adresse, fonction,cin_e);
        bool test=z.modifier(cin_e);
        if(test)
        {

            ui->tab_Employes->setModel(z.afficher());//refresh

                   QMessageBox::information(nullptr, QObject::tr("effectué"),
                        QObject::tr(" Modifié.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
                   ui->le_cin_e_2->clear();
                   ui->le_nom_2->clear();
                   ui->le_prenom_2->clear();
                   ui->l_adresse_2->clear();
                   ui->la_fonction_2->clear();
       }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("non effectué"),
                        QObject::tr("non modifié !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
            ui->le_cin_e_2->clear();
            ui->le_nom_2->clear();
            ui->le_prenom_2->clear();
            ui->l_adresse_2->clear();
            ui->la_fonction_2->clear();


        }
}
