#include "employes.h"
#include <QString>
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
Employes::Employes()
{
    nom =" ";prenom =" ";adresse=" ";fonction=" ";
    cin_e=0,age=0;

}
Employes::Employes(QString nom,QString prenom,QString adresse,QString fonction,int cin_e,int age)
{
  this->nom=nom; this->prenom=prenom; this->adresse=adresse; this->fonction=fonction;this->cin_e=cin_e ;this->age=age;
}
QString Employes::getnom(){return nom;}
int Employes::getcin_e(){return cin_e;}
int Employes::getage(){return age;}
QString Employes::getprenom(){return prenom;}
QString Employes::getadresse(){return adresse;}
QString Employes::getfonction(){return fonction;}
void Employes::setnom(QString nom){this->nom=nom;}
void Employes::setprenom(QString prenom){this->prenom=prenom;}
void Employes::setfonction(QString fonction){this->fonction=fonction;}
void Employes::setadresse(QString adresse){this->adresse=adresse;}
void Employes::setcin_e(int cin_e){this->cin_e=cin_e;}
void Employes::setage(int age){this->age=age;}



bool Employes::ajouter()
{
    QSqlQuery query;
    QString cin_e_string = QString::number(cin_e);

                query.prepare("INSERT INTO EMPLOYES (NOM , PRENOM,ADRESSE, FONCTION,CIN_E,AGE)"
                              "VALUES (:nom, :prenom, :adresse, :fonction, :cin_e, :age)");

                     query.bindValue(":nom", nom);
                     query.bindValue(":prenom",prenom);
                     query.bindValue(":adresse", adresse);
                     query.bindValue(":fonction",fonction);
                     query.bindValue(":cin_e",cin_e);
                     query.bindValue(":age",age);
                     return query.exec();

}
QSqlQueryModel* Employes::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();

          model->setQuery("SELECT* FROM EMPLOYES");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("adresse"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("fonction"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("cin_e"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("age"));
          return model;

}
bool Employes::supprimer(int cin_e)
{
    QSqlQuery query;
QString cin_e_string= QString::number(cin_e);
         query.prepare(" Delete from EMPLOYES where cin_e =:cin_e");
         query.bindValue(0, cin_e);

         return query.exec();

}

bool Employes :: modifier(int cin_e)
{
     QSqlQuery query;



        QString res= QString::number(cin_e);
        query.prepare("UPDATE EMPLOYES SET nom=:nom,prenom=:prenom,adresse=:adresse ,fonction=:fonction, age=:age,cin_e=:cin_e WHERE cin_e=:cin_e");
        query.bindValue(":nom", nom);
        query.bindValue(":prenom", prenom);
        query.bindValue(":adresse", adresse);
        query.bindValue(":fonction", fonction);
        query.bindValue(":cin_e",cin_e);
        query.bindValue(":age",age);

           return    query.exec();

}
QStringList Employes::lister(){//extraire les cin_e pour les afficher dans le combobox
QSqlQuery c;
c.prepare("select cin_e from Employes");
c.exec();
QStringList l;
while(c.next()){
l<<c.value(0).toString();
}
return l;
}
QSqlQueryModel * Employes::triernom()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM EMPLOYES ORDER BY NOM");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("adresse"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("fonction"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("cin_e"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("age"));
    return model;
}
QSqlQueryModel * Employes::trierprenom()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM EMPLOYES ORDER BY PRENOM");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("adresse"));   model->setHeaderData(3, Qt::Horizontal, QObject::tr("fonction"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("cin_e"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("age"));
    return model;
}
QSqlQueryModel * Employes::trieradresse()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM EMPLOYES ORDER BY ADRESSE");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("adresse"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("fonction"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("cin_e"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("age"));
    return model;
}
void Employes::stat(QCustomPlot *customPlot)
{
    QSqlQuery query,query1;
    // set dark background gradient:
    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(90, 90, 90));
    gradient.setColorAt(0.38, QColor(105, 105, 105));
    gradient.setColorAt(1, QColor(70, 70, 70));
    customPlot->clearPlottables();
    customPlot->clearGraphs();
    customPlot->replot();

    customPlot->setBackground(QBrush(gradient));


    QCPBars *fossil = new QCPBars(customPlot->xAxis, customPlot->yAxis);

    fossil->setAntialiased(false);

    fossil->setStackingGap(1);
    // set names and colors:
    fossil->setName("AGE");
    fossil->setPen(QPen(QColor(111, 9, 176).lighter(170)));
    fossil->setBrush(QColor(111, 9, 176));

    QVector<double> ticks;
    QVector<QString> labels;
    query.prepare("SELECT COUNT(DISTINCT cin_e) FROM EMPLOYES where age between 18 and 23");////////////////
    query.exec();
    int un;
    while(query.next())
    {
        un=query.value(0).toInt();
        qDebug()<<un;
    }
    query.prepare("SELECT COUNT(DISTINCT cin_e) FROM EMPLOYES where age between 23 and 31");/////////////////
    query.exec();
    int deux;
    while(query.next())
    {
        deux=query.value(0).toInt();
    }

    query.prepare("SELECT COUNT(DISTINCT cin_e) FROM EMPLOYES where age between 31 and 50");///////////////
    query.exec();
    int trois;
    while(query.next())
    {
        trois=query.value(0).toInt();
    }





    ticks << 1 << 2 << 3 ;
    labels << "[18,23]" << "[23,31]" << "[31,50]" ;///////////////////////////////
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    customPlot->xAxis->setTicker(textTicker);
    customPlot->xAxis->setTickLabelRotation(60);
    customPlot->xAxis->setSubTicks(false);
    customPlot->xAxis->setTickLength(0, 4);
    customPlot->xAxis->setRange(0, 8);
    customPlot->xAxis->setBasePen(QPen(Qt::white));
    customPlot->xAxis->setTickPen(QPen(Qt::white));
    customPlot->xAxis->grid()->setVisible(true);
    customPlot->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    customPlot->xAxis->setTickLabelColor(Qt::white);
    customPlot->xAxis->setLabelColor(Qt::green);

    // prepare y axis:
    customPlot->yAxis->setRange(0, 20);
    customPlot->yAxis->setPadding(5);
    customPlot->yAxis->setLabel("Employe");//////////////////
    customPlot->yAxis->setBasePen(QPen(Qt::white));
    customPlot->yAxis->setTickPen(QPen(Qt::white));
    customPlot->yAxis->setSubTickPen(QPen(Qt::white));
    customPlot->yAxis->grid()->setSubGridVisible(true);
    customPlot->yAxis->setTickLabelColor(Qt::white);
    customPlot->yAxis->setLabelColor(Qt::white);
    customPlot->yAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::SolidLine));
    customPlot->yAxis->grid()->setSubGridPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));

    // Add data:
    QVector<double> fossilData, nuclearData, regenData;
    fossilData  << un << deux << trois;
   // nuclearData << 0.08*10.5 << 0.12*5.5 << 0.12*5.5 << 0.40*5.8 << 0.09*5.2 << 0.00*4.2 << 0.07*11.2;
    regenData   << 0.06*10.5 << 0.05*5.5 << 0.04*5.5 << 0.06*5.8 << 0.02*5.2 << 0.07*4.2 << 0.25*11.2;
    fossil->setData(ticks, fossilData);
  //  nuclear->setData(ticks, nuclearData);
 //   regen->setData(ticks, regenData);

    // setup legend:
    customPlot->legend->setVisible(true);
    customPlot->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
    customPlot->legend->setBrush(QColor(255, 255, 255, 100));
    customPlot->legend->setBorderPen(Qt::NoPen);
    QFont legendFont = QFont();
    legendFont.setPointSize(10);
    customPlot->legend->setFont(legendFont);
    customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);

}
void Employes :: recherche(QTableView * table ,QString nom,int cin_e, int age )
{
    QSqlQueryModel *model= new QSqlQueryModel();

    QString cin_e_string=QString::number(cin_e);
      QString age_string=QString::number(age);



    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from EMPLOYES where NOM like '%"+nom+"%' or CIN_E like '%"+cin_e_string+"%' or AGE like '%"+age_string+"%' ;");


    query->exec();
    model->setQuery(*query);
    table->setModel(model);

}

