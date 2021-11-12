#ifndef REPARATION_H
#define REPARATION_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QTableWidget>
class reparation
{
public:

   reparation();
   reparation(int,QString,QString,int);

   int getrefrep();
   QString gettype();
    int getnombre();
   QString getmatricule();

   void setrefrep(int);
   void setnombre(int);
   void settype(QString);
   void setmatricule(QString);

bool rechercher(int);
/*
    int getcode_p();
    void setcode_p(int);
*/
    bool ajouter();
    QSqlQueryModel * afficher();
 bool modifierj(int refrep ,QString type , QString matricule ,int nombre);
  bool supprimer(int);
QSqlQueryModel * rechercher (const QString &aux);
   private :
   QString matricule,type;
   int refrep,nombre;

};



#endif // REPARATION_H
