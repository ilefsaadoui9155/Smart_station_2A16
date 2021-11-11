#ifndef GESTIONCLIENT_H
#define GESTIONCLIENT_H

#include <QDialog>
#include<QSqlDatabase>
#include<clients.h>
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
    void on_pb_ajouter12_clicked();





    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_comboBox_activated(const QString &arg1);

private:
    Ui::gestionClient *ui;
    Clients c ;
};

#endif // GESTIONCLIENT_H
