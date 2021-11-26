#include "connection.h"
#include <QApplication>
#include <QMessageBox>
#include "mainwindow.h"


Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Projet2A");
db.setUserName("slouma");//inserer nom de l'utilisateur
db.setPassword("esprit21");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;
   return  test;
}

