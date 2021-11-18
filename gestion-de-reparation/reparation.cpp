#include "reparation.h"
#include<QString>
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
#include<QSqlQueryModel>
reparation::reparation()
{

    refrep=0;
    type=" ";
    matricule=" ";
    nombre=0;


}
reparation::reparation(int refrep,QString type,QString matricule,int nombre)
{
 this->refrep=refrep;
   this->type=type;
    this->matricule=matricule;
    this->nombre=nombre;


}

int reparation::getrefrep(){return refrep;}
int reparation::getnombre(){return nombre;}
QString reparation::getmatricule(){return matricule;}
QString reparation::gettype(){return type;}




void reparation::setrefrep(int refrep){this->refrep=refrep  ;}
void reparation::setnombre(int nombre){this->nombre=nombre  ;}
void reparation::settype(QString type){this->type=type   ;}
void reparation::setmatricule(QString matricule){this->matricule=matricule   ;}

bool reparation::ajouter()
{
     bool test=false;

    QSqlQuery query;
    QString refrep_string=QString::number(refrep);
     QString nombre_string=QString::number(nombre);

          query.prepare("INSERT INTO table1 (refrep , type , matricule , nombre ) "
                        "VALUES (:refrep, :type, :matricule , :nombre)");
          query.bindValue(0 , refrep_string);
          query.bindValue(1 , type);
          query.bindValue(2 , matricule);
          query.bindValue(3 , nombre_string);

        /*  query.bindValue(4 ,cinc_string );
          query.bindValue(5 ,code_string ); */

          query.exec();


    return test;
}


QSqlQueryModel * reparation ::afficher()
{

    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from table1");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("refrep"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("matricule "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("nombre "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("type "));

        return model;
}

bool reparation::modifierj(int refrep,QString type,QString matricule,int nombre)
{
    QSqlQuery query;
//QString idc=QString::number(id);
    query.prepare("UPDATE table1 SET matricule= :matricule,nombre= :nombre, type= :type,where refrep= :refrep ");
    query.bindValue(":refrep", refrep);
     query.bindValue(":matricule",matricule);
    query.bindValue(":nombre", nombre);
    query.bindValue(":type",type);




            return    query.exec();

}

bool reparation :: supprimer(int refrep)
{
   // QString ident1= QString ::number(refrep);
    QSqlQuery query;
    query.prepare("DELETE from table1 where refrep = :refrep ");
    query.bindValue(":refrep",refrep);
    return    query.exec();

}

QSqlQueryModel* reparation::rechercher (const QString &aux)

{
    QSqlQueryModel* model = new QSqlQueryModel();

    model->setQuery("select * from table1 where ((refrep || type || nombre || matricule) LIKE '%"+aux+"%')");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("refrep"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("type "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("nombre "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("matricule "));


    return model;

}

void  Employe::genererPDF(){
//QDateTime datecreation = date.currentDateTime();
              //QString afficheDC = "Date de Creation PDF : " + datecreation.toString() ;
                     QPdfWriter pdf("D:/ProjetCpp/gestion-de-reparation/liste.pdf");
                     QPainter painter(&pdf);
                    int i = 4000;
                         painter.setPen(Qt::red);
                         painter.setFont(QFont("Arial", 30));
                         painter.drawText(1100,1200,"Liste Des reparation");
                         painter.setPen(Qt::black);
                         painter.setFont(QFont("Arial", 15));
                        // painter.drawText(1100,2000,afficheDC);
                         painter.drawRect(100,100,7300,2600);

                         painter.drawRect(0,3000,9600,500);
                         painter.setFont(QFont("Arial", 9));
                         painter.drawText(200,3300,"refrance");
                         painter.drawText(1300,3300,"matricule");
                         painter.drawText(2100,3300,"type");
                         painter.drawText(2100,3300,"nombre");

                         QSqlQuery query;
                         query.prepare("select * from table1");
                         query.exec();
                         while (query.next())
                         {
                             painter.drawText(200,i,query.value(0).toString());
                             painter.drawText(1300,i,query.value(1).toString());
                             painter.drawText(2200,i,query.value(2).toString());
                             painter.drawText(3200,i,query.value(4).toString());

                            i = i + 500;
                         }


      int reponse = QMessageBox::Yes;
          if (reponse == QMessageBox::Yes)
          {
              QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
              notifyIcon->show();
             notifyIcon->setIcon(QIcon("icone.png"));

              notifyIcon->showMessage("GESTION DES  EMPLYOES ","Liste employée pret dans PDF",QSystemTrayIcon::Information,15000);

              painter.end();
          }
          if (reponse == QMessageBox::No)
          {
               painter.end();
          }
}






