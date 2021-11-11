#include "gestionclient.h"
#include "ui_gestionclient.h"
#include "clients.h"
#include <QMessageBox>
#include <QDebug>
#include <QSqlQueryModel>
#include <QDialog>
#include<QSqlQuery>
gestionClient::gestionClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionClient)
{
    ui->setupUi(this);
    ui->tab_client->setModel(c.afficher());
    ui->comboBox->setModel(c.afficher());

}

gestionClient::~gestionClient()
{
    delete ui;
}

void gestionClient::on_pb_ajouter12_clicked()
{
    int cin=ui->le_cin->text().toInt();

        QString nom=ui->le_nom->text();
        QString prenom=ui->le_prenom->text();
        int age=ui->age->text().toInt();
        QString mail=ui->mail->text();



    Clients c (cin,nom,prenom,age,mail);
    bool test=c.ajouter();
    if(test)

      { ui->tab_client->setModel(c.afficher());
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("ajout effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
   }

void gestionClient::on_pushButton_clicked()
{
    c.setcin(ui->le_CINsupp->text().toInt());
    bool test=c.supprimer(c.getcin());
    if (test)
    {ui->tab_client->setModel(c.afficher());
        QMessageBox::information(nullptr, QObject::tr("ok"),
                              QObject::tr("suppression effectue.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);

          }

          else
          QMessageBox::critical(nullptr, QObject::tr("not ok"),
                          QObject::tr("suppression non effectuée.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);

}


void gestionClient::on_pushButton_3_clicked()

{
  ui->tab_client->setModel(c.afficher());

    int cin=ui->le_cin->text().toInt();
        QString nom=ui->le_nom->text();
        QString prenom=ui->le_prenom->text();
        int age=ui->age->text().toInt();
        QString mail=ui->mail->text();

        bool    test=c.update(cin,nom,prenom,age,mail);
        if (test)
              { ui->tab_client->setModel(c.afficher());

                  QMessageBox::information(nullptr,QObject::tr("OK"),
                                       QObject::tr("modification établie"),
                                       QMessageBox::Ok);}
              else{
              QMessageBox::critical(nullptr,QObject::tr("ERROR404"),
                                      QObject::tr("modification non établie"),
                                      QMessageBox::Cancel);
            }

}




void gestionClient::on_comboBox_activated(const QString &arg1)
{
    int cin = ui->comboBox->currentText().toInt();
         QString id_string= QString::number(cin);
                QSqlQuery query;
                query.prepare("select * from CLIENTS where CIN ='"+id_string+"'");

                if(query.exec()){

                    while(query.next())
                    {

                   ui->le_cin->setText(query.value(0).toString());
                   ui->le_nom->setText(query.value(1).toString());
                    ui->le_prenom->setText(query.value(2).toString());
                    ui->age->setText(query.value(3).toString());
                    ui->mail->setText(query.value(4).toString());

    }}
                else
                    QMessageBox::critical(nullptr, QObject::tr(" echoué"),
                                QObject::tr("Erreur !.\n"
                                            "Click Cancel to exit."), QMessageBox::Cancel);

    }

