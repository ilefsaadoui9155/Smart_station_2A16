#include "reparation.h"
#include<QString>
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
#include<QSqlQueryModel>
reparation::reparation()
{

    refrep=0;
    type=" ";
    matricule=" ";
    nombre=0;


}
reparation::reparation(int refrep,QString type,QString matricule,int nombre)
{
 this->refrep=refrep;
   this->type=type;
    this->matricule=matricule;
    this->nombre=nombre;


}

int reparation::getrefrep(){return refrep;}
int reparation::getnombre(){return nombre;}
QString reparation::getmatricule(){return matricule;}
QString reparation::gettype(){return type;}




void reparation::setrefrep(int refrep){this->refrep=refrep  ;}
void reparation::setnombre(int nombre){this->nombre=nombre  ;}
void reparation::settype(QString type){this->type=type   ;}
void reparation::setmatricule(QString matricule){this->matricule=matricule   ;}

bool reparation::ajouter()
{
     bool test=false;

    QSqlQuery query;
    QString refrep_string=QString::number(refrep);
     QString nombre_string=QString::number(nombre);

          query.prepare("INSERT INTO table1 (refrep , type , matricule , nombre ) "
                        "VALUES (:refrep, :type, :matricule , :nombre)");
          query.bindValue(0 , refrep_string);
          query.bindValue(1 , type);
          query.bindValue(2 , matricule);
          query.bindValue(3 , nombre_string);

        /*  query.bindValue(4 ,cinc_string );
          query.bindValue(5 ,code_string ); */

          query.exec();


    return test;
}


QSqlQueryModel * reparation ::afficher()
{

    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from table1");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("refrep"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("matricule "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("nombre "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("type "));

        return model;
}

bool reparation::modifierj(int refrep,QString type,QString matricule,int nombre)
{
    QSqlQuery query;
//QString idc=QString::number(id);
    query.prepare("UPDATE table1 SET matricule= :matricule,nombre= :nombre, type= :type,where refrep= :refrep ");
    query.bindValue(":refrep", refrep);
     query.bindValue(":matricule",matricule);
    query.bindValue(":nombre", nombre);
    query.bindValue(":type",type);




            return    query.exec();

}

bool reparation :: supprimer(int id)
{
   // QString ident1= QString ::number(refrep);
    QSqlQuery query;
    query.prepare("DELETE from table1 where refrep = :id ");
    query.bindValue(":id",id);
    return    query.exec();

}

QSqlQueryModel* reparation::rechercher (const QString &aux)

{
    QSqlQueryModel* model = new QSqlQueryModel();

    model->setQuery("select * from table1 where ((refrep || type || nombre || matricule) LIKE '%"+aux+"%')");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("refrep"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("type "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("nombre "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("matricule "));


    return model;

}


