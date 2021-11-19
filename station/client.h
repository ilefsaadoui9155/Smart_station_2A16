#ifndef CLIENT_H
#define CLIENT_H
#include <QString>
#include<QSqlQueryModel>
#include <QMainWindow>

class Client
{
public:
    Client();
     Client(int,QString,QString,int ,  QString );
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
QSqlQueryModel* afficher();


private :
    int cin ;
    QString nom , prenom  ;
     int age ;
     QString  mail ;
};

#endif // CLIENT_H
