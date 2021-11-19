#ifndef CLIENTS_H
#define CLIENTS_H
#include <QString>
#include<QSqlQueryModel>
#include <QDialog>
#include <QMainWindow>
#include <QSqlDatabase>
#include <QTableView>

#include <QPainter>
//#include <QChart>
//#include <QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>


using namespace QtCharts;
class Clients
{
public:
    Clients();
     Clients(int,QString,QString,int ,  QString );
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
 bool supprimer(int);

   QSqlQueryModel *afficher();
   bool update(int,QString,QString,int ,  QString);

QSqlQueryModel * tri_nom();
QSqlQueryModel * tri_age();
QSqlQueryModel * tri_cin();
void recherche(QTableView * table, QString ) ;

QChart* chart_bar();
QChart* chart_pie();

private :
    int cin ;
    QString nom , prenom  ;
     int age ;
     QString  mail ;
};


#endif // CLIENTS_H
