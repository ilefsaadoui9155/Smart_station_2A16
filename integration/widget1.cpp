#include "widget1.h"
#include "ui_widget1.h"
#include "DuMesengerConnectionDialog.h"
#include <QTcpSocket>
#include <QTextStream>
namespace DuarteCorporation
{
widget1::widget1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::widget1)
{
    ui->setupUi(this);
    mSocket = new QTcpSocket(this);
    connect(mSocket, &QTcpSocket::readyRead, [&](){
        QTextStream T(mSocket);
        auto text = T.readAll();
        ui->textEdit->append(text);
    });
}

widget1::~widget1()
{
    delete ui;
}

void widget1::on_send_clicked()
{
    QTextStream T(mSocket);
    T << ui->nickname->text() <<" : " << ui->message->text();
    mSocket->flush();
    ui->message->clear();
}

void widget1::on_bind_clicked()
{
   DuMesengerConnectionDialog D (this);
   if(D.exec() == QDialog ::Rejected){
       return;
   }
   mSocket->connectToHost(D.hostname(),D.port());


}
}
