#include "client.h"
#include <QSqlQuery>
#include <QtDebug>
Client::Client()
{ cin=0 ;
    nom="";
     prenom="";
    mail="";
age=0 ;
}

 Client::Client(int cin ,QString nom ,QString prenom,int age ,  QString mail )
{this->cin=cin; this->nom=nom; this->prenom=prenom;
 this->mail=mail; this->age=age;}
 int Client::getcin () {return cin;}
QString Client::getnom() {return nom;}
QString Client:: getprenom() {return prenom;}
int Client::getage () {return age;}
QString Client::getmail() {return mail;}
void Client::setcin(int cin){this->cin=cin;}
void Client::setnom(QString nom){this->nom=nom;}
void Client::setprenom(QString prenom){this->prenom=prenom;}
void Client::setage(int age){this->age=age;}
void Client::setmail(QString mail){this->mail=mail;}

bool Client::ajouter()
{
  //bool test=false;
   QSqlQuery query;
   QString cin_string=QString::number(cin);
    QString age_string=QString::number(age);
         query.prepare("INSERT INTO client (cin, nom,prenom,age,mail) "
                       "VALUES (:cin, :nom, :prenom, :age, :mail)");
         query.bindValue(0, cin_string);
         query.bindValue(1, nom);
         query.bindValue(2,prenom);
         query.bindValue(3,age_string );
         query.bindValue(4, mail);

         return  query.exec();



}
