#ifndef SERVER_H
#define SERVER_H

//#include<QTcpServer>
//#include<QTcpSocket>
#include"ChatMsgType.h"

class Server : public QTcpServer
{
    Q_OBJECT
public:
    Server(QObject* parent=nullptr);
    void start(int port);
protected:
    void incomingConnection(qintptr handle) override;

private slots:
    void readClient();
    void clientDisconnected();
private:
    QList<QTcpSocket*> clients;
};

#endif // SERVER_H
