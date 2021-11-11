#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "reparation.h"
#include<QMessageBox>
#include<QIntValidator>
#include<QSqlQueryModel>
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
#include<QDate>
#include<QTableWidget>
#include<QPixmap>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


   ui->l_CIN->setValidator(new QIntValidator(0,999999,this));
   ui->l_tel->setValidator(new QIntValidator(0,999999999,this));
   ui->l_salaire->setValidator(new QIntValidator(0,999999999,this));

ui->tab_etud->setModel(R.afficher());

}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_ajouter_clicked()
{


    ui->tab_etud->setModel(R.afficher());
   int CIN=ui->l_CIN->text().toInt();
    int salaire=ui->l_salaire->text().toInt();
    int tel=ui->l_tel->text().toInt();
     QString nom=ui->l_nom->text();
     QString prenom=ui->l_prenom->text();

     QString sexe(ui->l_sexe->currentText());
      QString fonction(ui->comboBox->currentText());




/*
     int cin_c=ui->l_chef->text().toInt();
     int code_p=ui->l_p->text().toInt();
*/
     reparation R(nom,prenom,CIN,fonction,salaire,tel,sexe);

bool test=R.ajouter();

if(test)
    /*
{
   QMessageBox::critical(nullptr,QObject::tr("not ok"),QObject::tr("ajout non effectué\n"),QMessageBox::Cancel);
}
else
{
 QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("ajout effectué\n"),QMessageBox::Cancel);

}


*/
    ui->tab_etud->setModel(R.afficher()); //refresh
        QMessageBox::information(nullptr, QObject::tr("ok"),
                QObject::tr("Ajout avec succes\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);
     ui->tab_etud->setModel(R.afficher());

}




void MainWindow::on_button_modifier_clicked()
{ui->tab_etud->setModel(R.afficher());

    bool    test=R.modifierj(ui->l_CIN->text().toInt(),ui->l_nom->text(),ui->l_prenom->text(),ui->comboBox->currentText(),ui->l_salaire->text().toInt(),ui->l_sexe->currentText(),ui->l_tel->text().toInt());

    if (test)
          {
                  ui->tab_etud->setModel(R.afficher());

              QMessageBox::information(nullptr,QObject::tr("OK"),
                                   QObject::tr("modification établie"),
                                   QMessageBox::Ok);}
          else{
          QMessageBox::critical(nullptr,QObject::tr("ERROR404"),
                                  QObject::tr("modification non établie"),
                                  QMessageBox::Cancel);}
}
/*
void MainWindow::on_supprimer_clicked()
{ ui->tab_etud->setModel(R.afficher());
    bool test=R.supprimer(ui->lineEdit_sup->text().toInt());

    if(test)
    {ui->tab_etud->setModel(R.afficher());//actualisation taa afficher
            QMessageBox::information(nullptr,QObject::tr("ok"),
                                     QObject::tr("suppression succful .\n"),
                    QMessageBox::Cancel);
        }

        else
            QMessageBox::critical(nullptr,QObject::tr("supprimer not open"),
                                    QObject::tr("click cancel to exist"),
                                    QMessageBox::Cancel);
} */
void MainWindow::on_supprimer_clicked()
{

    reparation R1; R1.setcin(ui->lineEdit_sup->text().toInt());
    bool test=R1.supprimer(R1.getcin());
    QMessageBox msgBox;
    if(test)
    {
         ui->tab_etud->setModel(R1.afficher());
        msgBox.setText("suppression avec succes.");
    }
    else
          msgBox.setText("echec d'ajout");
                msgBox.exec();


}

void MainWindow::on_radioButton_clicked() //tri par fonction
{
    QMessageBox msgBox ;
        QSqlQueryModel * model= new QSqlQueryModel();



           model->setQuery("select * from table1 order by fonction");

           model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
           model->setHeaderData(3, Qt::Horizontal, QObject::tr("fonction"));
           model->setHeaderData(4, Qt::Horizontal, QObject::tr("salaire"));
           model->setHeaderData(5, Qt::Horizontal, QObject::tr("sexe"));
   model->setHeaderData(5, Qt::Horizontal, QObject::tr("telephone"));
                    ui->tab_etud_4->setModel(model);
                    ui->tab_etud_4->show();
                    msgBox.setText("Tri avec succés.");
                    msgBox.exec();
}

void MainWindow::on_radioButton_3_clicked() //tri par cin
{
    QMessageBox msgBox ;
            QSqlQueryModel * model= new QSqlQueryModel();


               model->setQuery("select * from table1 order by CIN ");
               model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
               model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
               model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
               model->setHeaderData(3, Qt::Horizontal, QObject::tr("fonction"));
               model->setHeaderData(4, Qt::Horizontal, QObject::tr("salaire"));
               model->setHeaderData(5, Qt::Horizontal, QObject::tr("sexe"));
       model->setHeaderData(5, Qt::Horizontal, QObject::tr("telephone"));
                        ui->tab_etud_4->setModel(model);
                        ui->tab_etud_4->show();
                        msgBox.setText("Tri avec succés.");
                        msgBox.exec();
}

void MainWindow::on_radioButton_2_clicked() //tri par nom
{
    QMessageBox msgBox ;
        QSqlQueryModel * model= new QSqlQueryModel();



           model->setQuery("select * from table1 order by nom");

           model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
           model->setHeaderData(3, Qt::Horizontal, QObject::tr("fonction"));
           model->setHeaderData(4, Qt::Horizontal, QObject::tr("salaire"));
           model->setHeaderData(5, Qt::Horizontal, QObject::tr("sexe"));
   model->setHeaderData(5, Qt::Horizontal, QObject::tr("telephone"));
                    ui->tab_etud_4->setModel(model);
                    ui->tab_etud_4->show();
                    msgBox.setText("Tri avec succés.");
                    msgBox.exec();
}

void MainWindow::on_l_r_textChanged(const QString &arg1)
{
    Employe a;
        if(ui->l_r->text() == "")
            {
                ui->rech->setModel(a.afficher());
            }
            else
            {
                 ui->rech->setModel(a.rechercher(ui->l_r->text()));
            }
}



