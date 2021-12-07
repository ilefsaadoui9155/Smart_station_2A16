#include "window.h"
#include "ui_window.h"

Window::Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window)
{
    ui->setupUi(this);
}

Window::~Window()
{
    delete ui;
}

void Window::on_pushButton_clicked()
{
    employe = new MainWindow(this);
     employe ->show();
}

void Window::on_pushButton_2_clicked()
{
    reparation = new MainWindow1(this);
     reparation ->show();
}

void Window::on_pushButton_4_clicked()
{
    client = new gestionClient(this);
     client ->show();
}

void Window::on_pushButton_5_clicked()
{
    bus = new MainWindow2(this);
     bus ->show();
}

void Window::on_pushButton_3_clicked()
{
    ticket = new MainWindow3(this);
     ticket ->show();
}

void Window::on_pushButton_6_clicked()
{
    tem = new Dialog1(this);
     tem ->show();
}
