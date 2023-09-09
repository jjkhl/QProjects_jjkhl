#include "mainwindow.h"
#include "logindialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    //测试主窗口
//    MainWindow w;
//    w.show();
    LoginDialog login;
    login.show();

    return a.exec();
}
