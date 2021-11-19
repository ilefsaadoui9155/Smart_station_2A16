#ifndef GESTIONCLIENT_H
#define GESTIONCLIENT_H

#include <QDialog>
#include<QSqlDatabase>
#include<clients.h>


#include <QMainWindow>
#include <QMessageBox>
#include <QIntValidator>
#include <QSqlRecord>
#include <QDateEdit>
#include <QDialog>
#include <QFileDialog>
#include <QSortFilterProxyModel>
#include <QSslConfiguration>

namespace Ui {
class gestionClient;
}

class gestionClient : public QDialog
{
    Q_OBJECT

public:
    explicit gestionClient(QWidget *parent = nullptr);
    ~gestionClient();

private slots:

    //void on_pushButton_clicked();






    void on_pb_supprimer_clicked();

    void on_tri_nom_clicked();

    void on_tri_age_clicked();

    void on_tri_cin_clicked();






    void on_cin_recherche_3_textChanged(const QString &arg1);







    void on_pb_ajouter_clicked();



    void on_combo_box_activated(const QString &arg1) ;

    void on_pb_modifier_clicked();



    void on_pushButton_send_email_clicked();

    void on_pushButton_browse_email_clicked();

      void mailSent(QString);

      void on_pb_stat_clicked();

      void on_pushButton_10_clicked();

      void on_pb_excel_clicked();

private:
    Ui::gestionClient *ui;
    Clients c ;
     QStringList files;
};

#endif // GESTIONCLIENT_H
