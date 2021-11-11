#include "reparation.h"
#include<QString>
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
#include<QSqlQueryModel>
reparation::reparation()
{

    CIN=0;
    nom=" ";
    prenom=" ";
    fonction=" ";
    salaire=0;
    tel=0;
    sexe=" ";


}
reparation::reparation(QString nom,QString prenom,int CIN,QString fonction,int salaire,int tel,QString sexe)
{
 this->nom=nom;
   this->prenom=prenom;
    this->CIN=CIN;
    this->fonction=fonction;
    this->salaire=salaire;
    this->tel=tel;
    this->sexe=sexe;


}

int reparation::getcin(){return CIN;}
int reparation::gettel(){return tel;}
QString reparation::getfonction(){return fonction;}
int reparation::getsalaire(){return salaire;}
QString reparation::getsexe(){return sexe;}
QString reparation::getnom(){return nom;}
QString reparation::getprenom(){return prenom;}




void reparation::setcin(int CIN){this->CIN=CIN  ;}
void reparation::settel(int tel){this->tel=tel  ;}
void reparation::setfocntion(QString fonction){this->fonction=fonction   ;}
void reparation::setsalaire(int salaire){this->salaire=salaire ;}
void reparation::setsexe(QString sexe){this->sexe=sexe   ;}
void reparation::setnom(QString nom){this->nom=nom   ;}
void reparation::setprenom(QString prenom){this->prenom=prenom   ;}

bool reparation::ajouter()
{
     bool test=false;

    QSqlQuery query;
    QString CIN_string=QString::number(CIN);
     QString salaire_string=QString::number(salaire);

      QString tel_string=QString::number(tel);
          query.prepare("INSERT INTO table1 (cin , nom , prenom , fonction , salaire , sexe , telephone) "
                        "VALUES (:CIN, :nom, :prenom , :fonction, :salaire , :sexe , :telephone  )");
          query.bindValue(0 , CIN_string);
          query.bindValue(1 , nom);
          query.bindValue(2 , prenom);
          query.bindValue(3 ,fonction);
          query.bindValue(4 ,salaire_string);
          query.bindValue(5, sexe);
          query.bindValue(6 ,tel_string );

        /*  query.bindValue(7 ,cinc_string );
          query.bindValue(8 ,code_string ); */

          query.exec();


    return test;
}


QSqlQueryModel * reparation ::afficher()
{

    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from table1");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("fonction "));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("salaire "));
   model->setHeaderData(5, Qt::Horizontal, QObject::tr("sexe"));
   model->setHeaderData(6, Qt::Horizontal, QObject::tr("telephone"));

        return model;
}

bool reparation::modifierj(int cin ,QString nom , QString prenom  ,QString fonction ,int salaire, QString sexe,int tel)
{
    QSqlQuery query;
//QString idc=QString::number(id);
    query.prepare("UPDATE table1 SET nom= :nom,prenom= :prenom, fonction= :fonction, salaire= :salaire, sexe= :sexe , telephone= :tel  where cin= :cin ");
    query.bindValue(":cin", cin);
     query.bindValue(":nom",nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":fonction",fonction);
    query.bindValue(":salaire",salaire);
    query.bindValue(":sexe",sexe);
    query.bindValue(":telephone",tel);



            return    query.exec();

}

bool reparation :: supprimer(int id)
{
   // QString ident1= QString ::number(cin);
    QSqlQuery query;
    query.prepare("DELETE from table1 where cin = :id ");
    query.bindValue(":id",id);
    return    query.exec();

}

QSqlQueryModel* reparation::rechercher (const QString &aux)

{
    QSqlQueryModel* model = new QSqlQueryModel();

    model->setQuery("select * from table1 where ((cin || nom || prenom || fonction || salaire || sexe||telephone) LIKE '%"+aux+"%')");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("fonction "));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("salaire "));
   model->setHeaderData(5, Qt::Horizontal, QObject::tr("sexe"));
   model->setHeaderData(6, Qt::Horizontal, QObject::tr("telephone"));

    return model;

}


