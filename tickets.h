#ifndef TICKETS_H
#define TICKETS_H
#include <QTableView>
#include <QString>
#include <QDate>
#include <QSqlQueryModel>
#include<QApplication>
#include<vector>
class Tickets
{
public:
    Tickets();

    Tickets(int,int,int,QString,QString,double);
        int getreferance();
        int getdepart();
       int getarrive();
        QString getdestination();
        QString getdatee();
        double getprix();

        void setreferance(int);
        void setdepart(int);
        void setarrive(int);
        void setdestination(QString);
         void setdatee(QString);
         void setprix(double);

            bool ajouter();
            bool supprimer(int);
            QSqlQueryModel* afficher();
            bool modifier(int,int,int,QString,QString,double);
            QSqlQueryModel * trierreferance();
  QSqlQueryModel * trierprix();
  QSqlQueryModel * triertempsdepart();
  void recherche(QTableView * tabl, QString,int,int);

  double calucul_revenu();


    private:

QVector <Tickets> tabE;
        int arrive,referance,depart;
        double prix;
        QString destination,datee;
    };


#endif // TICKETS_H
