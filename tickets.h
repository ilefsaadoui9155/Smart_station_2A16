#ifndef TICKETS_H
#define TICKETS_H

#include <QString>

#include <QSqlQueryModel>
class Tickets
{
public:
    Tickets();

    Tickets(int,int,int,QString,QString,int);
        int getreferance();
        int getdepart();
       int getarrive();
        QString getdestination();
        QString getdatee();
        int getprix();

        void setreferance(int);
        void setdepart(int);
        void setarrive(int);
        void setdestination(QString);
         void setdatee(QString);
         void setprix(int);

            bool ajouter();
            QSqlQueryModel* afficher();
    private:
        int arrive,referance,depart,prix;
        QString destination,datee ;
    };


#endif // TICKETS_H
