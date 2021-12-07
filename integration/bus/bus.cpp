#include "bus.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
BUS::BUS()
{
matricule=" ";
image=" ";
classe=" ";
etat=" ";
}

BUS::BUS(QString matricule,QString image,QString classe,QString etat)
{this->matricule=matricule;this->image=image;this->classe=classe;this->etat=etat;}
QString BUS::getmatricule(){return matricule;}
QString BUS::getimage(){return image;}
QString BUS::getclasse(){return classe;}
QString BUS::getetat(){return etat;}
void BUS::setmatricule(QString matricule){this->matricule=matricule;}
void BUS::setimage(QString image){this->image=image;}
void BUS::setclasse(QString classe){this->classe=classe;}
void BUS::setetat(QString etat){this->etat=etat;}


bool BUS::Ajouter(){

    bool test=false;
    QSqlQuery query;
    query.prepare("INSERT INTO BUS(matricule, image, classe, etat)""VALUES(:test, :test2, :test3, :test4)");
    query.bindValue(":test", matricule);
    query.bindValue(":test2", image);
    query.bindValue(":test3", classe);
    query.bindValue(":test4", etat);
    return query.exec();



    return test;


}

bool BUS::Modifier(QString mat){
    QSqlQuery query;
    query.prepare("UPDATE BUS SET MATRICULE=:mat, IMAGE=:img, CLASSE=:classe, ETAT=:etat WHERE MATRICULE =:mat");
    query.bindValue(":mat", matricule);
    query.bindValue(":img", image);
    query.bindValue(":classe", classe);
    query.bindValue(":etat", etat);
    return query.exec();
}
bool BUS::supprimer(QString)
{
    QSqlQuery query;
    query.prepare("Delete from BUS where matricule=:matricule");
    query.bindValue(0,matricule);

    return query.exec();
}


QSqlQueryModel * BUS::Afficher(){
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM BUS");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("matricule"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("image"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("classe"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("etat"));
    return model;
}

QSqlQueryModel * BUS::Rechercher(QString mot){
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM BUS WHERE (MATRICULE LIKE '" + mot + "%')");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("matricule"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("image"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("classe"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("etat"));
    return model;
}

QSqlQueryModel * BUS::Trier(int ordre){
    QString k;
    if(ordre == 1){
        k = "DESC";
    }
    else {
        k = "ASC";
    }

    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM BUS ORDER BY MATRICULE " + k);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("matricule"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("image"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("classe"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("etat"));
    return model;
}
