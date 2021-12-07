#include "login.h"
#include <QApplication>
#include "connection.h"
#include <QMessageBox>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connection c;
    bool test=c.createconnect();
    login w;
    if(test)
            {w.show();
               /* QMessageBox::information(nullptr, QObject::tr("database is open"),
                            QObject::tr("connection successful.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);*/


        }
            else
                QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                            QObject::tr("connection failed.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);



            return a.exec();
    }

