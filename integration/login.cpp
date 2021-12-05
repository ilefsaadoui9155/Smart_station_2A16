#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}


void login::on_pushButton_clicked()
{
    QString username = ui->lineEdit_username->text();
            QString password = ui->lineEdit_password->text();

            if(username ==  "ilef" && password == "ilef") {
                QMessageBox::information(this, "Login", "Username and password is correct");
                //hide();
                nouveau = new Window(this);
                 nouveau ->show();
            }
            else {
                QMessageBox::warning(this,"Login", "Username and password is not correct");
            }
}
