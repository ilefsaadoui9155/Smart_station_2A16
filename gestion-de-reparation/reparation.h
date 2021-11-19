#ifndef REPARATION_H
#define REPARATION_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class reparation
{
public:
    reparation();
    reparation(int,QString,QString,int);
    QString get_matricule();
    QString get_type();
    int get_refrep();
    int get_nombre();

      void set_refrep(int);
      void set_matricule(QString);
      void set_type(QString);
      void set_nombre(int);
      bool ajouter();
      QSqlQueryModel * afficher();
      bool supprimer(int);
      bool modifier(int,QString,QString,int);
      QSqlQueryModel * rechercher(int);
      QSqlQueryModel * tri();
      ;
       private:
       QString matricule,type;
       int refrep,nombre;


};
class reparationh
{
public:
       reparationh() ;
       reparationh(QString,QString,QString) ;
       QString get_nom();
       QString get_datee();
       QString get_fn();
       QSqlQueryModel * afficherhis() ;
       bool ajoutehis();
       bool modifierhis() ;
private:

    QString nom,datee,fn ;
};
#endif // REPARATION_H
