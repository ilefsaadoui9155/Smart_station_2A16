#include "employes.h"
#include <QString>
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
Employes::Employes()
{
    nom =" ";prenom =" ";adresse=" ";fonction=" ";
    cin_e=0;

}
Employes::Employes(QString nom,QString prenom,QString adresse,QString fonction,int cin_e)
{
  this->nom=nom; this->prenom=prenom; this->adresse=adresse; this->fonction=fonction;this->cin_e=cin_e  ;
}
QString Employes::getnom(){return nom;}
int Employes::getcin_e(){return cin_e;}
QString Employes::getprenom(){return prenom;}
QString Employes::getadresse(){return adresse;}
QString Employes::getfonction(){return fonction;}
void Employes::setnom(QString nom){this->nom=nom;}
void Employes::setprenom(QString prenom){this->prenom=prenom;}
void Employes::setfonction(QString fonction){this->fonction=fonction;}
void Employes::setadresse(QString adresse){this->adresse=adresse;}
void Employes::setcin_e(int cin_e){this->cin_e=cin_e;}


bool Employes::ajouter()
{
    QSqlQuery query;
    QString cin_e_string = QString::number(cin_e);

                query.prepare("INSERT INTO EMPLOYES (NOM , PRENOM,ADRESSE, FONCTION,CIN_E)"
                              "VALUES (:nom, :prenom, :adresse, :fonction, :cin_e)");

                     query.bindValue(":nom", nom);
                     query.bindValue(":prenom",prenom);
                     query.bindValue(":adresse", adresse);
                     query.bindValue(":fonction",fonction);
                     query.bindValue(":cin_e",cin_e);
                     return query.exec();

}
QSqlQueryModel* Employes::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();

          model->setQuery("SELECT* FROM EMPLOYES");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("adresse"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("fonction"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("cin_e"));
          return model;

}
bool Employes::supprimer(int cin_e)
{
    QSqlQuery query;
QString cin_e_string= QString::number(cin_e);
         query.prepare(" Delete from EMPLOYES where cin_e =:cin_e");
         query.bindValue(0, cin_e);

         return query.exec();

}

bool Employes :: modifier(int cin_e)
{
     QSqlQuery query;



        QString res= QString::number(cin_e);
        query.prepare("UPDATE EMPLOYES SET nom=:nom,prenom=:prenom,adresse=:adresse ,fonction=:fonction,cin_e=:cin_e WHERE cin_e=:cin_e");
        query.bindValue(":nom", nom);
        query.bindValue(":prenom", prenom);
        query.bindValue(":adresse", adresse);
        query.bindValue(":fonction", fonction);
        query.bindValue(":cin_e",cin_e);

           return    query.exec();

}
