#ifndef EMPLOYES_H
#define EMPLOYES_H
#include<QSqlQueryModel>
#include <QString>
class Employes
{
public:
    Employes();
    Employes(QString,QString,QString,QString,int);
        int getcin_e();
        QString getfonction();
        QString getadresse();
        QString getnom();
        QString getprenom();
        void setcin_e(int);
        void setfonction(QString);
        void setadresse(QString);
        void setnom(QString);
        void setprenom(QString);
        bool ajouter();
        QSqlQueryModel* afficher();
        bool supprimer(int);
        bool modifier(int cin_e);


    private:
        QString fonction,adresse,nom,prenom;
        int cin_e;
};

#endif // EMPLOYES_H
