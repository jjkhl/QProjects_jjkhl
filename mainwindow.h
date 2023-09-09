#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMessageBox>
#include<QTcpSocket>
#include<QTcpServer>
#include<QNetworkInterface>
#include<QDateTime>
#include<QFile>
#include<QFileDialog>
#include<QDateTime>
#include<QCloseEvent>

#include"ChatMsgType.h"
#include"server.h"

class FileSrvDlg;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


//待实现文件传输功能
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QStringList &onclients,QWidget *parent = nullptr, QString userName=QString());
    ~MainWindow();
public:
    void readServer();
//    void recvFileName(QString name, QString hostip, QString rmtname, QString filename);

protected:
    void closeEvent(QCloseEvent *event);

private slots:
//    void on_pushButton_search_clicked();

    void on_pushButton_send_clicked();

private:
    Ui::MainWindow *ui;
    QTcpSocket *socket;
    QString myname="";
    Server *server;
    QStringList onlineClients;
//    QString myFileName;
//    FileSrvDlg *myfsrv;
};
#endif // MAINWINDOW_H
