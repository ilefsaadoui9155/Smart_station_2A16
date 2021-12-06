#include "gestionclient.h"
#include "ui_gestionclient.h"
#include "ui_mainwindow.h"
#include "clients.h"
#include <QMessageBox>
#include <QDebug>
#include <QSqlQueryModel>
#include <QDialog>
#include<QSqlQuery>
#include "Smtp.h"
#include <QSystemTrayIcon>
#include "excel.h"
#include <QIntValidator>

gestionClient::gestionClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionClient)
{
    ui->setupUi(this);
    ui->tab_client->setModel(c.afficher());
    ui->comboBox->setModel(c.afficher());
    ui->tableView_email->setModel(c.afficher());
    ui->le_CINsupp->setValidator(new QIntValidator(0,999999999,this));

}

gestionClient::~gestionClient()
{
    delete ui;
}



void gestionClient::on_pb_supprimer_clicked()
{
    c.setcin(ui->le_CINsupp->text().toInt());
    bool test=c.supprimer(c.getcin());
    if (test)
    {

        ui->tab_client->setModel(c.afficher());
        QMessageBox::information(nullptr, QObject::tr("ok"),
                              QObject::tr("suppression effectue.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);

          }

          else
          QMessageBox::critical(nullptr, QObject::tr("not ok"),
                          QObject::tr("suppression non effectuée.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);



}


void gestionClient::on_pb_modifier_clicked()

{
  ui->tab_client->setModel(c.afficher());

    int cin=ui->le_cin_2->text().toInt();
        QString nom=ui->le_nom_2->text();
        QString prenom=ui->le_prenom_2->text();
        int age=ui->age_2->text().toInt();
        QString mail=ui->mail_2->text();

        bool    test=c.update(cin,nom,prenom,age,mail);
        if (test)
              { ui->tab_client->setModel(c.afficher());

                  QMessageBox::information(nullptr,QObject::tr("OK"),
                                       QObject::tr("modification établie"),
                                       QMessageBox::Ok);}
              else{
              QMessageBox::critical(nullptr,QObject::tr("ERROR404"),
                                      QObject::tr("modification non établie"),
                                      QMessageBox::Cancel);
            }

}




void gestionClient::on_combo_box_activated(const QString &arg1)
{
    int cin = ui->combo_box->currentText().toInt();
         QString id_string= QString::number(cin);
                QSqlQuery query;
                query.prepare("select * from CLIENTS where cin ='"+id_string+"'");

                if(query.exec()){

                    while(query.next())
                    {

                   ui->le_cin_2->setText(query.value(0).toString());
                   ui->le_nom_2->setText(query.value(1).toString());
                    ui->le_prenom_2->setText(query.value(2).toString());
                    ui->age_2->setText(query.value(3).toString());
                    ui->mail_2->setText(query.value(4).toString());

    }}
                else
                    QMessageBox::critical(nullptr, QObject::tr(" echoué"),
                                QObject::tr("Erreur !.\n"
                                            "Click Cancel to exit."), QMessageBox::Cancel);

    }






void gestionClient::on_tri_nom_clicked()
{
    ui->tab_client->setModel(c.tri_nom());
}

void gestionClient::on_tri_age_clicked()
{
     ui->tab_client->setModel(c.tri_age());
}

void gestionClient::on_tri_cin_clicked()
{
  ui->tab_client->setModel(c.tri_cin());
}






void gestionClient::on_cin_recherche_3_textChanged(const QString &arg1)
{
    Clients c;

        QString rech = ui->cin_recherche_3->text();
            c.recherche(ui->tab_client,rech);
            if (ui->cin_recherche_3->text().isEmpty())
            {
                ui->tab_client->setModel(c.afficher());
            }
}







void gestionClient::on_pb_ajouter_clicked()
{
    int cin=ui->le_cin_2->text().toInt();

        QString nom=ui->le_nom_2->text();
        QString prenom=ui->le_prenom_2->text();
        int age=ui->age_2->text().toInt();
        QString mail=ui->mail_2->text();



    Clients c (cin,nom,prenom,age,mail);
    bool test=c.ajouter();
    if(test)

      { ui->tab_client->setModel(c.afficher());
        QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
                                             notifyIcon->show();
                                             notifyIcon->setIcon(QIcon("icone.png"));
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("ajout effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
}







void gestionClient::on_pushButton_send_email_clicked()
{
    QString from = ui->lineEdit_from_email->text();
    QString to = ui->lineEdit_to_email->text();
    QString subject = ui->lineEdit_subject_email->text();
    QString password = ui->lineEdit_psswrd_email->text();
    QString email_text = ui->textEdit_email->toPlainText();

    Smtp* smtp = new Smtp(from, password);
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    if( !files.isEmpty() )
        smtp->sendMail(from, to, subject, email_text, files);
    else
        smtp->sendMail(from, to, subject, email_text);
}


void   gestionClient::mailSent(QString status)
{

    if(status == "Message sent")
        QMessageBox::warning( nullptr, tr( "email" ), tr( "Message sent.\n\n" ) );
    ui->lineEdit_to_email->clear();
    ui->lineEdit_subject_email->clear();
    ui->lineEdit_atchmnt_email->clear();
    ui->textEdit_email->clear();
    ui->lineEdit_psswrd_email->clear();
}
void gestionClient::on_pushButton_browse_email_clicked()
{
    files.clear();

    QFileDialog dialog(this);
    dialog.setDirectory(QDir::homePath());
    dialog.setFileMode(QFileDialog::ExistingFiles);

    if (dialog.exec())
        files = dialog.selectedFiles();

    QString fileListString;
    foreach(QString file, files)
        fileListString.append( "\"" + QFileInfo(file).fileName() + "\" " );

    ui->lineEdit_atchmnt_email->setText( fileListString );
}
//stat//////////////////////////////////////////////







void gestionClient::on_pb_stat_clicked()
{QChart* chart_bar = c.chart_pie();
    QChartView* chart_view_bar = new QChartView(chart_bar, ui-> label_statistique );
    chart_view_bar->setRenderHint(QPainter::Antialiasing);
    chart_view_bar->setMinimumSize(400,400);
    chart_view_bar->show();

}


void gestionClient::on_pb_excel_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Exportation en fichier Excel"), qApp->applicationDirPath (),
                                                            tr("Fichiers d'extension Excel (*.xls)"));
            if (fileName.isEmpty())
                return;

            EXCEL obj(fileName, "test_bd", ui->tab_client);

            // you can change the column order and
            // choose which colum to export
            obj.addField(0, "cin", "char(20)");
            obj.addField(1, "nom", "char(20)");
            obj.addField(2, "prenom", "char(20)");
            obj.addField(3, "age", "char(20)");
            obj.addField(4, "mail", "char(20)");



            int retVal = obj.export2Excel();

            if( retVal > 0)
            {
                QMessageBox::information(this, tr("FAIS!"),
                                         QString(tr("%1 enregistrements exportés!")).arg(retVal)
                                         );
            }
}
