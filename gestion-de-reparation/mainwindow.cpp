#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "reparation.h"
#include <QMessageBox>
#include<QFileDialog>
#include<QPrinter>
#include<QString>
#include<QDateTime>
#include<QTextStream>
#include<QTextDocument>
#include<QPrintDialog>
#include <QSystemTrayIcon>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
ui->setupUi(this);
QRegExp rx("[a-zA-Z]+");






ui->tab_rep->setModel(tmpreparation.afficher());

ui->tabreparation->setModel(tmpreparation.afficher());

}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_ajouter_clicked()
{

    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
    notifyIcon->show();
    notifyIcon->setIcon(QIcon("icone.png"));
    notifyIcon->showMessage("Reparation ajouter ","Reparation ajouter",QSystemTrayIcon::Information,15000);




    int refrep = ui->ref->text().toInt();
    QString matricule= ui->matricule->text();
    QString type= ui->type->text();
    int nombre = ui->nombre->text().toInt();


  reparation r(refrep,matricule,type,nombre);
  if(verifmatricule()&&verifrefrep()&&veriftype()&&verifnombre()){
  bool test=r.ajouter();
  if(test)
{


      ui->tabreparation->setModel(tmpreparation.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter une reparation"),
                  QObject::tr("Reparation ajoutée.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


  }

}

  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter une reparation"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
}


void MainWindow::on_SupprimerButton_clicked()
{
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
    notifyIcon->show();
    notifyIcon->setIcon(QIcon("icone.png"));

    notifyIcon->showMessage("Reparation Supprimer ","Reparation Supprimer",QSystemTrayIcon::Information,15000);

    int refrep = ui->reff->text().toInt();
    bool test=tmpreparation.supprimer(refrep);
    if(test)
    {ui->tabreparation->setModel(tmpreparation.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer une reparation"),
                    QObject::tr("reparation supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer une reparation"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_ButtonModification_clicked()
{
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
    notifyIcon->show();
    notifyIcon->setIcon(QIcon("icone.png"));
    notifyIcon->showMessage("Reparation modifiee ","Reparation modifiee",QSystemTrayIcon::Information,15000);




    int refrep = ui->ref2->text().toInt();
    QString matricule= ui->matricule2->text();
    QString type= ui->type2->text();

    int nombre = ui->nombre2->text().toInt();



            reparation r;
            bool test=r.modifier(refrep,matricule,type,nombre);

            if(test)
            {


                QMessageBox::information(nullptr, QObject::tr("modifie une reparation "),
                                  QObject::tr("Reparation modifiée.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel);
                ui->tabreparation->setModel(tmpreparation.afficher());
            }
            else
                QMessageBox::critical(nullptr, QObject::tr("non modifie"),
                            QObject::tr("Erreur !.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
                ui->tabreparation->setModel(tmpreparation.afficher());
}

void MainWindow::on_pushButton_76_clicked()
{
    ui->tableView_3->setModel(tph.afficherhis()) ;
    ui->tableView_3->setModel(tph.afficherhis());//refresh
}


void MainWindow::on_anglais_clicked()
{
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
    notifyIcon->show();
    notifyIcon->setIcon(QIcon("icone.png"));

    notifyIcon->showMessage("Traduction Anglais ","Traduction Anglais",QSystemTrayIcon::Information,15000);
    lng="ANG";
                       // page biblo

                       ui->ajouter->setText("Add");
                       ui->recherche->setText("Research");
                       ui->francais->setText("Frensh");

                       ui->ButtonModification->setText("Modify");
                       ui->SupprimerButton->setText("Delete");
                       ui->Imprimer->setText("Print");
}

void MainWindow::on_francais_clicked()
{
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
        notifyIcon->show();
        notifyIcon->setIcon(QIcon("icone.png"));

        notifyIcon->showMessage("Traduction francais ","Traduction francais",QSystemTrayIcon::Information,15000);


    lng="fr";
                       // page biblo

                       ui->ajouter->setText("Ajouter");
                       ui->recherche->setText("Recherche");
                       ui->anglais->setText("Anglais");

                       ui->ButtonModification->setText("Modifier");
                       ui->SupprimerButton->setText("Supprimer");
                       ui->Imprimer->setText("Imprimer");

}

void MainWindow::on_recherche_clicked()
{
    int refrep;

        refrep=ui->reff3->text().toInt();
    bool test= true;
    if(test==(true))
    {
      ui->tabreparation->setModel(tmpreparation.rechercher(refrep));
}
}


void MainWindow::on_radioButton_3_clicked()
{
    QMessageBox msgBox ;
        QSqlQueryModel * model= new QSqlQueryModel();

           model->setQuery("select * from reparation ORDER BY refrep");
           model->setHeaderData(0, Qt::Horizontal, QObject::tr("refrep"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("matricule "));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("nombre"));

                    ui->tab_rep->setModel(model);
                    ui->tab_rep->show();
                    msgBox.setText("Tri avec succés.");
                    msgBox.exec();
}

void MainWindow::on_radioButton_2_clicked()
{
    QMessageBox msgBox ;
        QSqlQueryModel * model= new QSqlQueryModel();

           model->setQuery("select * from reparation ORDER BY matricule");
           model->setHeaderData(0, Qt::Horizontal, QObject::tr("refrep"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("matricule "));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("nombre"));

                    ui->tab_rep->setModel(model);
                    ui->tab_rep->show();
                    msgBox.setText("Tri avec succés.");
                    msgBox.exec();
}

void MainWindow::on_radioButton_clicked()
{
    QMessageBox msgBox ;
        QSqlQueryModel * model= new QSqlQueryModel();

           model->setQuery("select * from reparation ORDER BY type");
           model->setHeaderData(0, Qt::Horizontal, QObject::tr("refrep"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("matricule "));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("nombre"));

                    ui->tab_rep->setModel(model);
                    ui->tab_rep->show();
                    msgBox.setText("Tri avec succés.");
                    msgBox.exec();
}

void MainWindow::on_pushButton_clicked()
{
    QString strStream;
                     QTextStream out(&strStream);

                     const int rowCount = ui->tabreparation->model()->rowCount();
                     const int columnCount = ui->tabreparation->model()->columnCount();
                     QString TT = QDateTime::currentDateTime().toString("yyyy/MM/dd hh:mm:ss");
                     out <<  "<html>\n"
                         "<head>\n"
                         "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                         <<  QString("<title>%1</title>\n").arg("strTitle")
                         <<  "</head>\n"
                         "<body bgcolor=#E7E7E7 link=#5000A1>\n"

                            "<h1 style=\"text-align: center;\"><strong> ********Liste Des Reparation******** "+TT+"</strong></h1>"
                        //     "<align='right'> " << datefich << "</align>"
                         "<center></br><table border=3 cellspacing=1 cellpadding=2>\n";

                     // headers
                     out << "<thead><tr bgcolor=#FFF9F6> <th>Numero</th>";
                     for (int column = 0; column < columnCount; column++)
                         if (!ui->tabreparation->isColumnHidden(column))
                             out << QString("<th>%1</th>").arg(ui->tabreparation->model()->headerData(column, Qt::Horizontal).toString());
                     out << "</tr></thead>\n";

                     // data table
                     for (int row = 0; row < rowCount; row++) {
                         out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                         for (int column = 0; column < columnCount; column++) {
                             if (!ui->tabreparation->isColumnHidden(column)) {
                                 QString data = ui->tabreparation->model()->data(ui->tabreparation->model()->index(row, column)).toString().simplified();
                                 out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                             }
                         }
                         out << "</tr>\n";
                     }
                     out <<  "</table> </center>\n"

                         "</body>\n"
             //      "<img style=\"  grid-column: 5 / 6 grid-row: 2 / 3;\" src=\"D:\ProjetCpp\gestion-de-reparation\logo.png"" alt=\"picture\" width=\"40\" height=\"30\">";

                         "</html>\n";


               QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
                 if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

                QPrinter printer (QPrinter::PrinterResolution);
                 printer.setOutputFormat(QPrinter::PdfFormat);
                printer.setPaperSize(QPrinter::A4);
               printer.setOutputFileName(fileName);

                QTextDocument doc;
                 doc.setHtml(strStream);
                 doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
                 doc.print(&printer);
}

void MainWindow::on_Imprimer_clicked()
{
    QPrinter printer;

    printer.setPrinterName("desiered printer name");

  QPrintDialog dialog(&printer,this);

    if(dialog.exec()== QDialog::Rejected)

        return;
}
bool MainWindow::verifrefrep()
{
    if (ui->ref->text().contains(QRegExp("[^0_9]") ) || ui->ref->text().isEmpty())
    {
        ui->ref->clear();

        ui->ref->setPlaceholderText("contient que des chiffres") ;
        return false;
    }
    else
    {
        return true;
    }

}
bool MainWindow::verifmatricule()
{
    if (ui->matricule->text().contains(QRegExp("[^a-zA-Z ]") ) || ui->matricule->text().isEmpty())
    {
        ui->matricule->clear();

        ui->matricule->setPlaceholderText("contient que des caracteres") ;
        return false;
    }
    else
    {
        return true;
    }

}
bool MainWindow::veriftype()
{
    if (ui->type->text().contains(QRegExp("[^a-zA-Z ]") ) || ui->type->text().isEmpty())
    {
        ui->type->clear();

        ui->type->setPlaceholderText("contient que des caracteres") ;
        return false;
    }
    else
    {
        return true;
    }

}
bool MainWindow::verifnombre()
{
    if (ui->nombre->text().contains(QRegExp("[^0_9]") ) || ui->nombre->text().isEmpty())
    {
        ui->nombre->clear();

        ui->nombre->setPlaceholderText("contient que des chiffres") ;
        return false;
    }
    else
    {
        return true;
    }

}






//arduino

void MainWindow::on_pushButton_6_clicked()
{
          A.write_to_arduino("r");
}

void MainWindow::on_pushButton_7_clicked()
{
    A.write_to_arduino("a");
}
