#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "bus.h"
#include <QMessageBox>
#include <string>
#include <QDesktopServices>
#include <QUrl>
#include <QTimer>
#include <QDateTime>
#include <QFileDialog>

MainWindow2::MainWindow2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    ui->tab_bus->setModel(b.Afficher());
    showtime();
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(showtime()));
    timer->start();

}

void MainWindow2::showtime()
{
    QTime time=QTime::currentTime();

    QString time_next=time.toString("hh : mm : ss");
    ui->Digital_clock->setText(time_next);
}

MainWindow2::~MainWindow2()
{
    delete ui;
}



void MainWindow2::on_pb_ajouter_clicked()
{
    QString matricule=ui->le_matricule->text();
    QString image=ui->img->text();
    QString classe=ui->combo_etat_ajout->currentText();
    QString etat=ui->combo_etat_2->currentText();
    BUS b(matricule,image,classe,etat);
    bool test = b.Ajouter();
    if(test)
        {
            QMessageBox::information(nullptr, QObject::tr("database is open"),
                        QObject::tr("Ajout avec succés.\n"
                                    "Click Cancel to exit."), QMessageBox::Ok);

    }
        else
           { QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                        QObject::tr("Ajout échoué.\n"
                                    "Click Cancel to exit."), QMessageBox::Ok);
    }

ui->tab_bus->setModel(b.Afficher());
}



void MainWindow2::on_pb_supprimer_clicked()
{


   BUS b1; b1.setmatricule(ui->le_matriculesupp->text());
   bool test=b1.supprimer(b1.getmatricule());
   if(test)
       {
           QMessageBox::information(nullptr, QObject::tr("database is open"),
                       QObject::tr("Suppression avec succés.\n"
                                   "Click Cancel to exit."), QMessageBox::Ok);

   }
       else
          { QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                       QObject::tr("Suppression échoué.\n"
                                   "Click Cancel to exit."), QMessageBox::Ok);
   }
   ui->tab_bus->setModel(b.Afficher());
}

void MainWindow2::on_pb_instagram_2_clicked()
{
   QString link="https://esprit-tn.com/esponline/online/default.aspx";
   QDesktopServices::openUrl(QUrl(link));
}

void MainWindow2::on_pb_facebook_2_clicked()
{
    QString link="https://esprit-tn.com/esponline/online/default.aspx";
    QDesktopServices::openUrl(QUrl(link));
}

void MainWindow2::on_pb_modifier_clicked()
{

}





void MainWindow2::on_but_modifier_clicked()
{
    QString mat = ui->le_matriculemod->text();
    QString img = ui->img->text();
    QString classe = ui->combo_etat_modif->currentText();
    QString etat = ui->combo_etat->currentText();

    BUS b(mat, img, classe, etat);
    bool test = b.Modifier(mat);
        if(test)
        {
            QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("Modification avec succés.\n"
                                "Click Cancel to exit."), QMessageBox::Ok);

        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("Modification échoué.\n"
                                "Click Cancel to exit."), QMessageBox::Ok);
        }
        ui->tab_bus->setModel(b.Afficher());
}

void MainWindow2::on_but_img_clicked()
{
    QString fileNames = QFileDialog::getOpenFileName(this, tr("Open File"),"/path/to/file/");
    ui->img->setText(fileNames);
    //ui->listWidget->addItems(fileNames);
}

void MainWindow2::on_tab_bus_clicked(const QModelIndex &index)
{
    QString mat = ui->tab_bus->model()->data(ui->tab_bus->model()->index(ui->tab_bus->currentIndex().row(),0)).toString();
    QString path;
    QSqlQuery query;
    query.prepare("SELECT * FROM BUS");
    query.exec();
    bool test = false;
    while(!test){
            query.next();
            if(query.value(0).toString() == mat){
                test = true;
            }
        }
    path = query.value(1).toString();
    QPixmap img(path);
    ui->imgaff->setPixmap(img);
}

void MainWindow2::on_but_img2_clicked()
{
    QString fileNames = QFileDialog::getOpenFileName(this, tr("Open File"),"/path/to/file/");
    ui->img->setText(fileNames);
}

void MainWindow2::on_pb_supprimer_3_clicked()
{
    QString mat = ui->le_matriculesupp->text();
    BUS b(mat, "", "", "");
    ui->tab_bus->setModel(b.Rechercher(mat));
}

void MainWindow2::on_pb_afficher_clicked()
{
    BUS b("", "", "", "");
    ui->tab_bus->setModel(b.Afficher());
}

void MainWindow2::on_pb_trier_clicked()
{
    BUS b("", "", "", "");
    ui->tab_bus->setModel(b.Trier(ui->comboOrdre->currentIndex()));
}


