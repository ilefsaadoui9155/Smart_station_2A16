
#include "tickets.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
#include <QString>
#include<mainwindow.h>
#include<QObject>
Tickets::Tickets()
{
referance=0;depart=0;arrive=0;destination="";datee="";prix=0;
}



  Tickets::Tickets(int referance,int depart,int arrive,QString destination,QString datee,int prix)
{this->referance=referance;this->depart=depart; this->arrive=arrive;this->destination=destination;this->datee=datee;this->prix=prix; }
  int Tickets::getreferance(){return referance;}
int Tickets::getdepart(){return depart;}
int Tickets::getarrive(){return arrive;}
QString Tickets::getdestination(){return destination;}
QString Tickets::getdatee(){return datee;}
int Tickets::getprix(){return prix;}
void Tickets::setreferance(int referance){this->referance=referance ;}
void Tickets::setdepart(int depart){this->depart=depart ;}
void  Tickets::setarrive(int arrive){this->arrive=arrive ;}
void  Tickets::setdestination(QString destination){this->destination=destination ;}
void Tickets::setdatee(QString datee){this->datee=datee ;}
void Tickets::setprix(int prix ){this->prix=prix ;}

bool Tickets::ajouter()
{
    QSqlQuery query;
    QString referance_string=QString::number(referance);

    QString prix_string=QString::number(prix);
    QString arrive_string=QString::number(arrive);
    QString depart_string=QString::number(depart);
          query.prepare("INSERT INTO TICKET (referance, depart, arrive,destination,datee,prix) "
                        "VALUES (:referance, :depart, :arrive,:destination,:date ,:prix)");

          query.bindValue(":referance", referance_string);
          query.bindValue(":depart", depart_string);
          query.bindValue(":arrive",  arrive_string);
          query.bindValue(":destination",  destination);
          query.bindValue(":date",  datee);
          query.bindValue(":prix",  prix_string);


          return query.exec();
}
QSqlQueryModel* Tickets::afficher()
{QSqlQueryModel* model=new QSqlQueryModel();


          model->setQuery("SELECT* FROM Ticket");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("referance"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("depart"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("arrive"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("destination"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("datee"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("prix"));


    return model;





}
bool Tickets::supprimer(int referance){
      QSqlQuery query;
      QString res=QString::number(referance);
    query.prepare("Delete from Ticket where referance=:referance");
    query.bindValue(":referance", res);

    return  query.exec();



}


