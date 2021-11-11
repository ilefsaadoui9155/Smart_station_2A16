#include "clients.h"

#include <QSqlQuery>
#include <QtDebug>
#include<QSqlQueryModel>
#include <QObject>
#include <QSqlQuery>
#include <QString>


Clients ::Clients ()
{ cin=0 ;
    nom="";
     prenom="";
     age=0 ;
    mail="";

}

 Clients::Clients(int cin ,QString nom ,QString prenom,int age ,  QString mail )
{this->cin=cin; this->nom=nom; this->prenom=prenom;
 this->age=age;this->mail=mail; }
 int Clients::getcin () {return cin;}
QString Clients::getnom() {return nom;}
QString Clients:: getprenom() {return prenom;}
int Clients::getage () {return age;}
QString Clients::getmail() {return mail;}
void Clients::setcin(int cin){this->cin=cin;}
void Clients ::setnom(QString nom){this->nom=nom;}
void Clients::setprenom(QString prenom){this->prenom=prenom;}
void Clients::setage(int age){this->age=age;}
void Clients::setmail(QString mail){this->mail=mail;}

bool Clients ::ajouter()
{

   QSqlQuery query;
   QString cin_string=QString::number(cin);
    QString age_string=QString::number(age);
         query.prepare("INSERT INTO CLIENTS (cin, nom,prenom,age,mail) "
                       "VALUES (:cin, :nom, :prenom, :age, :mail)");
         query.bindValue(0, cin_string);
         query.bindValue(1, nom);
         query.bindValue(2,prenom);
         query.bindValue(3,age_string );
         query.bindValue(4, mail);

         return  query.exec();



}
QSqlQueryModel * Clients ::afficher(){



    QSqlQueryModel *model = new QSqlQueryModel();
              model->setQuery("SELECT* FROM CLIENTS ");
              model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
              model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
              model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
              model->setHeaderData(3, Qt::Horizontal, QObject::tr("age"));
              model->setHeaderData(4, Qt::Horizontal, QObject::tr("mail"));



        return model;

}


bool Clients ::supprimer(int cin)
{
 QSqlQuery query;
 QString res=QString::number(cin);
 query.prepare("delete from CLIENTS where cin=:cin");
 query.bindValue(":cin",res);
 return query.exec();
}
bool Clients::update(int cin, QString nom, QString prenom, int age, QString mail )

              {

                  QSqlQuery query;

                  QString cin_string=QString::number(cin);
                   QString age_string=QString::number(age);

                  query.prepare("UPDATE CLIENTS set cin=:cin,nom=:nom,prenom=:prenom,age=:age,mail=:mail  where cin=:cin");

                  query.bindValue(":cin",cin_string);

                  query.bindValue(":nom",nom);

                  query.bindValue(":prenom",prenom);

                  query.bindValue(":age",age_string);

                  query.bindValue(":mail",mail);







                          return    query.exec();



              }

