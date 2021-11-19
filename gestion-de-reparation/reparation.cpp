#include "reparation.h"

#include <QDebug>
#include "connexion.h"
reparation::reparation()
{
    refrep=0;
    type=" ";
    matricule=" ";
    nombre=0;

}

reparation::reparation(int refrep,QString matricule,QString type,int nombre)
{
    this->refrep=refrep;
      this->type=type;
       this->matricule=matricule;
       this->nombre=nombre;

}
void reparation::set_refrep(int refr){ refrep=refr; }
void reparation::set_type(QString typp){ type=typp; }
void reparation::set_matricule(QString matriculee){ matricule=matriculee; }
void reparation::set_nombre(int nombree){ nombre=nombree; }



bool reparation::ajouter()
{
    QSqlQuery query;

    query.prepare("insert into reparation (refrep, matricule, type,nombre) "
                        "VALUES (:refrep, :matricule, :type, :nombre)");
    query.bindValue(":refrep", refrep);
    query.bindValue(":matricule", matricule);
    query.bindValue(":type", type);
    query.bindValue(":nombre", nombre);




    return    query.exec();
}


QSqlQueryModel * reparation::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from reparation");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("refrep"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("matricule "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("nombre"));
    return model;
}

bool reparation::supprimer(int refrep)
{
QSqlQuery query;
QString res= QString::number(refrep);
query.prepare("Delete from reparation where refrep = :refrep ");
query.bindValue(":refrep", res);
return    query.exec();
}

bool reparation::modifier(int refrep ,QString matricule,QString type,int nombre)
{
    QSqlQuery query;
    query.prepare("UPDATE reparation SET refrep= :refrep,matricule= :matricule,type = :type,nombre = :nombre  WHERE refrep= :refrep ");
    query.bindValue(":refrep",refrep);
    query.bindValue(":matricule",matricule);
    query.bindValue(":type",type);
    query.bindValue(":nombre",nombre);


    return    query.exec();
}
reparationh::reparationh()
{
nom="";
datee="";
fn="";
}
reparationh::reparationh(QString nom,QString datee,QString fn)
{
    this->nom=nom;
    this->datee=datee;
    this->fn=fn ;
}
QString reparationh::get_datee(){return  datee;}
QString reparationh::get_fn(){return  fn;}
QString reparationh::get_nom(){return  nom;}


bool reparationh::ajoutehis()
{
    QSqlQuery query;
    query.prepare("INSERT INTO historique2 (NOM, DATEE, FN) "
                  "VALUES (:nom, :datee, :fn)");
    query.bindValue(":nom", nom);
    query.bindValue(":datee", datee);
    query.bindValue(":fn", fn);
    return    query.exec();
}
bool reparationh::modifierhis()
{
    QSqlQuery query;
    query.prepare("UPDATE historique2 SET datee='"+datee+"',fn='"+fn+"' where nom='"+nom+"'  ;");
    query.bindValue(":nom",nom);
    query.bindValue(":datee", datee);
    query.bindValue(":fn", fn);
    return    query.exec();
}
QSqlQueryModel * reparationh::afficherhis()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from historique2");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("date "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("fonction "));
        return model;

}


QSqlQueryModel * reparation::rechercher(int refrep)
{

    QSqlQueryModel *model=new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("Select * from reparation where refrep =:refrep");
    query.bindValue(":refrep",refrep);
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("refrep"));

        return model;
   }
