#ifndef FORM_H
#define FORM_H


class form
{
public:
    form();
};


#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class form; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    form(QWidget *parent = nullptr);
    ~MainWindow();
    void on_pb_ajouter_clicked();


private:
    Ui::MainWindow *ui;
};
#endif
