#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QNetworkInterface>
#include <QDateTime>
#include <QStringList>
#include <QHostInfo>
#include <QTcpServer>
#include <QTcpSocket>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
private slots:
    void on_startpushButton_clicked();
    void updateStatus();
    void serverReadMessage();
    void updateSendStatus();
    void on_stoppushButton_clicked();

private:
    Ui::Dialog *ui;
    QTcpServer *tcpServer;
    QList<QTcpSocket *>mytcpsocket;//连接成功的套接字
    void info_init();//信息初始化
};

#endif // DIALOG_H
