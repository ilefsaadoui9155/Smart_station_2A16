#ifndef CLIENTS_H
#define CLIENTS_H
#include <QString>
#include<QSqlQueryModel>
#include <QDialog>
#include <QMainWindow>
#include <QSqlDatabase>
class Clients
{
public:
    Clients();
     Clients(int,QString,QString,int ,  QString );
int getcin ();
QString getnom() ;
QString getprenom() ;
int getage () ;
QString getmail() ;
void setcin(int);
void setnom(QString);
void setprenom(QString);
void setage(int);
void setmail(QString);
bool ajouter();
 bool supprimer(int);
   QSqlQueryModel *afficher();
   bool update(int,QString,QString,int ,  QString);

private :
    int cin ;
    QString nom , prenom  ;
     int age ;
     QString  mail ;
};


#endif // CLIENTS_H
