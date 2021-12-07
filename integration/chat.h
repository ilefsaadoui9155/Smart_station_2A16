#ifndef CHAT_H
#define CHAT_H

#include <QDialog>

namespace Ui {
class Chat;
}
class QTcpSocket;
namespace DuarteCorporation
{
class Chat : public QDialog
{
    Q_OBJECT

public:
    explicit Chat(QWidget *parent = nullptr);
    ~Chat();

private slots:
    void on_send_clicked();

    void on_bind_clicked();

private:
    Ui::Chat *ui;
    QTcpSocket *mSocket;
};
}
#endif // CHAT_H
