#ifndef WIDGET1_H
#define WIDGET1_H

#include <QDialog>

namespace Ui {
class widget1;
}
class QTcpSocket;
namespace DuarteCorporation
{
class widget1 : public QDialog
{
    Q_OBJECT
public:
    explicit widget1(QWidget *parent = nullptr);
    ~widget1();
private slots:
    void on_send_clicked();
    void on_bind_clicked();
private:
    Ui::widget1 *ui;
    QTcpSocket *mSocket;

};
}
#endif // WIDGET_H
