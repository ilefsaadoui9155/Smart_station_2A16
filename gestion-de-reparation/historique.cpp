#include "historique.h"
#include<QMessageBox>

Historique::Historique()
{
tmp="";
}
void Historique::save(QString id,QString prenom,QString tel)
{    QFile file ("D:/ProjetCpp/gestion-de-reparation/his.txt");
     if (!file.open(QIODevice::WriteOnly|QIODevice::Append | QIODevice::Text))
      qDebug()<<"erreur";
     QTextStream out(&file);
     out << referance+"\n"+cin << "\n" +type  "\n"+nombre << "\n";


}
QString Historique::load()
{   tmp="";
    QFile file("D:/ProjetCpp/gestion-de-reparation/his.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
      tmp="";

    QTextStream in(&file);

   while (!in.atEnd()) {

         QString myString = in.readLine();
         tmp+=myString+"\n";

   }
   return tmp;
}
