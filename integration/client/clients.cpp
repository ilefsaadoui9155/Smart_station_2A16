#include "clients.h"

#include <QSqlQuery>
#include <QtDebug>
#include<QSqlQueryModel>
#include <QObject>
#include <QSqlQuery>
#include <QString>


#include <QSqlQuery>
#include <QtDebug>
#include<QObject>
#include <QIntValidator>
#include <QSystemTrayIcon>
//#include <QPrinter>
//#include <QPrintDialog>
#include <QSqlTableModel>
#include <QPagedPaintDevice>


Clients ::Clients ()
{ cin=0 ;
    nom="";
     prenom="";
     age=0 ;
    mail="";

}

 Clients::Clients(int cin ,QString nom ,QString prenom,int age ,  QString mail )
{this->cin=cin; this->nom=nom; this->prenom=prenom;
 this->age=age;this->mail=mail; }
 int Clients::getcin () {return cin;}
QString Clients::getnom() {return nom;}
QString Clients:: getprenom() {return prenom;}
int Clients::getage () {return age;}
QString Clients::getmail() {return mail;}
void Clients::setcin(int cin){this->cin=cin;}
void Clients ::setnom(QString nom){this->nom=nom;}
void Clients::setprenom(QString prenom){this->prenom=prenom;}
void Clients::setage(int age){this->age=age;}
void Clients::setmail(QString mail){this->mail=mail;}

bool Clients ::ajouter()
{

   QSqlQuery query;
   QString cin_string=QString::number(cin);
    QString age_string=QString::number(age);
         query.prepare("INSERT INTO CLIENTS (cin, nom,prenom,age,mail) "
                       "VALUES (:cin, :nom, :prenom, :age, :mail)");
         query.bindValue(0, cin_string);
         query.bindValue(1, nom);
         query.bindValue(2,prenom);
         query.bindValue(3,age_string );
         query.bindValue(4, mail);

         return  query.exec();



}
QSqlQueryModel * Clients ::afficher(){



    QSqlQueryModel *model = new QSqlQueryModel();
              model->setQuery("SELECT* FROM CLIENTS ");
              model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
              model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
              model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
              model->setHeaderData(3, Qt::Horizontal, QObject::tr("age"));
              model->setHeaderData(4, Qt::Horizontal, QObject::tr("mail"));



        return model;

}


bool Clients ::supprimer(int cin1)
{
 QSqlQuery query;
 QString res=QString::number(cin1);
 query.prepare("delete from CLIENTS where cin=:cin");
 query.bindValue(":cin",res);
 return query.exec();
}
bool Clients::update(int cin, QString nom, QString prenom, int age, QString mail )

              {

                  QSqlQuery query;

                  QString cin_string=QString::number(cin);
                   QString age_string=QString::number(age);

                  query.prepare("UPDATE CLIENTS set cin=:cin,nom=:nom,prenom=:prenom,age=:age,mail=:mail  where cin=:cin");

                  query.bindValue(":cin",cin_string);

                  query.bindValue(":nom",nom);

                  query.bindValue(":prenom",prenom);

                  query.bindValue(":age",age_string);

                  query.bindValue(":mail",mail);







                          return    query.exec();



              }



QSqlQueryModel *Clients::tri_nom()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM CLIENTS ORDER BY nom ");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("cin"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("age"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("mail"));

    return model;
}

QSqlQueryModel *Clients::tri_age()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM CLIENTS ORDER BY age");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("cin"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("age"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("mail"));

    return model;
}

QSqlQueryModel *Clients::tri_cin()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM CLIENTS ORDER BY cin ");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("cin"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("age"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("mail"));

    return model;
}


void Clients::recherche(QTableView * table, QString rech)
{
    QSqlQueryModel *model= new QSqlQueryModel();

        QSqlQuery *query=new QSqlQuery;
        query->prepare("select * from CLIENTS where nom like '%"+rech+"%' or age like '%"+rech+"%' or prenom like '%"+rech+"%' ;");
        query->exec();
        model->setQuery(*query);
        table->setModel(model);
        table->show();
}



QChart* Clients ::chart_bar()
{
    QSqlQuery q1,q2,q3,q4;
    qreal tot=0,c1=0,c2=0,c3=0;

    q1.prepare("SELECT * FROM CLIENTS");
    q1.exec();

    q2.prepare("SELECT * FROM CLIENTS WHERE age<=20");
    q2.exec();

    q3.prepare("SELECT * FROM CLIENTS WHERE age>20 AND age<30");
    q3.exec();

    q4.prepare("SELECT * FROM CLIENTS WHERE age<=30 AND age>40");
    q4.exec();

    while (q1.next()){tot++;}
    while (q2.next()){c1++;}
    while (q3.next()){c2++;}
    while (q4.next()){c3++;}

    c1=c1/tot;
    c2=c2/tot;
    c3=c3/tot;

//     Assign names to the set of bars used
    QBarSet *set0 = new QBarSet("inf 3");
    QBarSet *set1 = new QBarSet("inf 10");
    QBarSet *set2 = new QBarSet("inf 20");

//     Assign values for each bar
    *set0 << c1;
    *set1 << c2;
    *set2 << c3;

//     Add all sets of data to the chart as a whole
//     1. Bar Chart
    QBarSeries *series = new QBarSeries();

//     2. Stacked bar chart
    series->append(set0);
    series->append(set1);
    series->append(set2);

//     Used to define the bar chart to display, title, legend
    QChart *chart = new QChart();

//     Add the chart
    chart->addSeries(series);

//     Adds categories to the axes
//     QBarCategoryAxis *axis = new QBarCategoryAxis();

//     1. Bar chart
//     chart->setAxisX(axis, series);

//    // Used to change the palette
//    QPalette pal = qApp->palette();

//    // Change the color around the chart widget and text
//    pal.setColor(QPalette::Window, QRgb(0xffffff));
//    pal.setColor(QPalette::WindowText, QRgb(0x404044));

//     Apply palette changes to the application
//    qApp->setPalette(pal);

    return chart;
}

QChart* Clients ::chart_pie()
{
    QSqlQuery q1,q2,q3,q4;
    qreal tot=0,c1=0,c2=0,c3=0;

    q1.prepare("SELECT * FROM CLIENTS");
    q1.exec();

    q2.prepare("SELECT * FROM CLIENTS WHERE age <=20");
    q2.exec();

    q3.prepare("SELECT * FROM CLIENTS WHERE age>20 AND age<30");
    q3.exec();

    q4.prepare("SELECT * FROM CLIENTS WHERE age<40 AND age>30");
    q4.exec();

    while (q1.next()){tot++;}
    while (q2.next()){c1++;}
    while (q3.next()){c2++;}
    while (q4.next()){c3++;}

    c1=c1/tot;
    c2=c2/tot;
    c3=c3/tot;

//     Define slices and percentage of whole they take up
    QPieSeries *series = new QPieSeries();
    series->append("age>20", c1);
    series->append("age>30", c2);
    series->append("age>40", c3);
//     Create the chart widget
    QChart *chart = new QChart();

//     Add data to chart with title and show legend
    chart->addSeries(series);
    chart->legend()->show();

    return chart;

}
