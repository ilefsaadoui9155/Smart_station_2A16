 #ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <tickets.h>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_qb_ajouter_clicked();

private:
    Ui::MainWindow *ui;
    Tickets Ti;

};

#endif // MAINWINDOW_H
