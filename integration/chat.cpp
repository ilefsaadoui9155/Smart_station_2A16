#include "chat.h"
#include "ui_chat.h"
#include "DuMesengerConnectionDialog.h"
#include <QTcpSocket>
#include <QTextStream>

namespace DuarteCorporation
{
Chat::Chat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Chat)
{
    ui->setupUi(this);
    mSocket = new QTcpSocket(this);
        connect(mSocket, &QTcpSocket::readyRead, [&](){
            QTextStream T(mSocket);
            auto text = T.readAll();
            ui->textEdit->append(text);
        });
}

Chat::~Chat()
{
    delete ui;
}

void DuarteCorporation::Chat::on_send_clicked()
{
    QTextStream T(mSocket);
       T << ui->nickname->text() <<" : " << ui->message->text();
       mSocket->flush();
       ui->message->clear();
}

void DuarteCorporation::Chat::on_bind_clicked()
{
    DuMesengerConnectionDialog D (this);
       if(D.exec() == QDialog ::Rejected){
           return;
       }
       mSocket->connectToHost(D.hostname(),D.port());

}
}
