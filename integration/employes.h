#ifndef EMPLOYES_H
#define EMPLOYES_H
#include<QSqlQueryModel>
#include <QString>
#include <qcustomplot.h>

class Employes
{
public:
    Employes();
    Employes(QString,QString,QString,QString,int,int);
        int getcin_e();
        int getage();
        QString getfonction();
        QString getadresse();
        QString getnom();
        QString getprenom();
        void setcin_e(int);
        void setage(int);
        void setfonction(QString);
        void setadresse(QString);
        void setnom(QString);
        void setprenom(QString);
        bool ajouter();
        QSqlQueryModel* afficher();
        bool supprimer(int);
        bool modifier(int cin_e);
        QSqlQueryModel * triernom();
        QSqlQueryModel * trierprenom();
        QSqlQueryModel * trieradresse();
        QStringList lister();
        void stat(QCustomPlot *customPlot);
        void recherche(QTableView * tabl, QString,int,int);
        //bool chat(QString);
    private:
        QString fonction,adresse,nom,prenom;
        int cin_e,age;
};

#endif // EMPLOYES_H
