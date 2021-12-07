#ifndef BUS_H
#define BUS_H

#include <QApplication>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class BUS
{
public:
    BUS();
    BUS(QString,QString,QString,QString);
    QString getmatricule();
    QString getimage();
    QString getclasse();
    QString getetat();
    void setmatricule(QString);
    void setimage(QString);
    void setclasse(QString);
    void setetat(QString);

 bool Ajouter();
QSqlQueryModel * Afficher();
bool supprimer(QString);
bool Modifier(QString);
QSqlQueryModel * Rechercher(QString);
QSqlQueryModel * Trier(int);




private:
    QString matricule;
    QString image;
    QString classe;
    QString etat;

};

#endif // BUS_H
