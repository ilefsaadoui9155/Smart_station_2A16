#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employes.h"
#include <QMessageBox>
#include <QComboBox>
#include <QSqlQuery>
#include <QIntValidator>
#include <QApplication>
#include <QMessageBox>
#include <QTableView>
#include <QDate>
#include "QSqlQuery"
#include "qcustomplot.h"
#include <QTableView>
#include <qmessagebox.h>
#include <QIntValidator>
#include <QSqlQuery>
#include <QScrollBar>
#include <qfiledialog.h>
#include <QTextDocument>
#include <QTextStream>
#include <QDate>
#include <QComboBox>
#include <QPixmap>
#include <connection.h>
#include "chat.h"
using namespace DuarteCorporation;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->le_cin_e->setValidator(new QIntValidator(0, 9999999, this));
    ui->tab_Employes->setModel(Em.afficher());
    ui->comboBox->addItems(Em.lister());
    ui->comboBox_2->addItems(Em.lister());
    ui->tabWidget->setCurrentIndex(3);
      Employes S;


      S.stat(ui->widget);
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
        int age = ui->l_age->text().toUInt();
        Employes E(nom,prenom,adresse,fonction, cin_e,age);
            bool test=E.ajouter();


            if(test)
            {
                ui->tab_Employes->setModel(Em.afficher());
                QMessageBox::information(nullptr, QObject::tr("OK"),
                           QObject::tr("ajout effectue\n"
                                       "click cancel te exit."), QMessageBox::Cancel);
                ui->comboBox->clear();

                          ui->comboBox->addItems(Em.lister());
                          ui->tabWidget->setCurrentIndex(3);
                            Employes S;


                            S.stat(ui->widget);

            }
            else

                QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                           QObject::tr("ajout non effectue\n"
                                       "click cancel te exit."), QMessageBox::Cancel);

        }


void MainWindow::on_SupprimerButton_clicked()
{
    Employes e;
           e.setcin_e(ui->comboBox->currentText().toInt());

               bool test =e.supprimer(e.getcin_e());
           if(test)
           {
               QMessageBox::information(nullptr, QObject::tr("Ok"),
                    QObject::tr("Suppression effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
          ui->tab_Employes->setModel(Em.afficher())    ;
          ui->comboBox->clear();
          ui->comboBox->addItems(Em.lister());
           }
           else
           {
               QMessageBox::information(nullptr, QObject::tr("Not Ok"),
                    QObject::tr("Suppression non effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
           }
}

void MainWindow::on_ButtonModification_clicked()
{

        QString nom = ui->le_nom_2->text();
         QString prenom= ui->le_prenom_2->text();
         QString adresse = ui->l_adresse_2->text();
         QString fonction = ui->la_fonction_2->text();
         int age = ui->l_age_2->text().toInt();
         int cin_e = ui->comboBox_2->currentText().toInt();

        Employes z(nom, prenom, adresse, fonction,cin_e,age);
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
                   ui->l_age_2->clear();
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
            ui->l_age_2->clear();


        }
}

void MainWindow::on_comboBox_2_currentIndexChanged(const QString &arg1)
{
    QString cin_e =ui->comboBox_2->currentText();



              QSqlQuery c;
              c.prepare("select * from EMPLOYES where cin_e ='"+cin_e+"'");
             if(c.exec())
             {
                 while (c.next()) {
                      ui->le_cin_e_2->setText(c.value(4).toString());
                      ui->le_nom_2->setText(c.value(0).toString());
                      ui->l_age_2->setText(c.value(5).toString());
                      ui->le_prenom_2->setText(c.value(1).toString());
                      ui->l_adresse_2->setText(c.value(2).toString());
                      ui->la_fonction_2->setText(c.value(3).toString());


                 }
             }

}

void MainWindow::on_trinom_clicked()
{
    ui->tab_Employes->setModel(Em.triernom());

}

void MainWindow::on_triprenom_clicked()
{
    ui->tab_Employes->setModel(Em.trierprenom());


}

void MainWindow::on_triadresse_clicked()
{
    ui->tab_Employes->setModel(Em.trieradresse());

}


void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    Employes r;
    QString nom = ui->lineEdit->text();
    int cin_e = ui->lineEdit->text().toInt();
    int age = ui->lineEdit->text().toInt();
    r.recherche(ui->tab_Employes,nom,cin_e,age);
    if (ui->lineEdit->text().isEmpty())
    {
        ui->tab_Employes->setModel(r.afficher());
    }

}





void MainWindow::on_chat_clicked()
{
    w = new Chat(this);
    w->show();

}
