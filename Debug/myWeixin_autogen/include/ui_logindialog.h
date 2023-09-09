/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLineEdit *usrLineEdit;
    QLineEdit *pwdLineEdit;
    QPushButton *loginPushButton;
    QPushButton *switch_pushButton;
    QPushButton *registerPushButton;
    QPushButton *delUserPushButton;
    QPushButton *pushButton_changePwd;
    QLabel *label;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(280, 463);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        LoginDialog->setFont(font);
        usrLineEdit = new QLineEdit(LoginDialog);
        usrLineEdit->setObjectName(QString::fromUtf8("usrLineEdit"));
        usrLineEdit->setGeometry(QRect(85, 215, 113, 20));
        pwdLineEdit = new QLineEdit(LoginDialog);
        pwdLineEdit->setObjectName(QString::fromUtf8("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(85, 235, 113, 20));
        pwdLineEdit->setEchoMode(QLineEdit::Password);
        loginPushButton = new QPushButton(LoginDialog);
        loginPushButton->setObjectName(QString::fromUtf8("loginPushButton"));
        loginPushButton->setGeometry(QRect(30, 258, 221, 43));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        loginPushButton->setFont(font1);
        loginPushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);"));
        loginPushButton->setAutoDefault(true);
        loginPushButton->setFlat(false);
        switch_pushButton = new QPushButton(LoginDialog);
        switch_pushButton->setObjectName(QString::fromUtf8("switch_pushButton"));
        switch_pushButton->setGeometry(QRect(110, 310, 70, 25));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setWeight(50);
        switch_pushButton->setFont(font2);
        switch_pushButton->setFlat(false);
        registerPushButton = new QPushButton(LoginDialog);
        registerPushButton->setObjectName(QString::fromUtf8("registerPushButton"));
        registerPushButton->setGeometry(QRect(110, 340, 70, 25));
        delUserPushButton = new QPushButton(LoginDialog);
        delUserPushButton->setObjectName(QString::fromUtf8("delUserPushButton"));
        delUserPushButton->setGeometry(QRect(110, 370, 70, 25));
        pushButton_changePwd = new QPushButton(LoginDialog);
        pushButton_changePwd->setObjectName(QString::fromUtf8("pushButton_changePwd"));
        pushButton_changePwd->setGeometry(QRect(110, 400, 70, 28));
        label = new QLabel(LoginDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 130, 81, 71));
        label->setPixmap(QPixmap(QString::fromUtf8(":/pics/wei.jpg")));
        label->setScaledContents(true);

        retranslateUi(LoginDialog);

        loginPushButton->setDefault(false);


        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "\345\276\256\344\277\241\345\256\242\346\210\267\347\253\257", nullptr));
        usrLineEdit->setPlaceholderText(QCoreApplication::translate("LoginDialog", "\347\224\250\346\210\267\345\220\215", nullptr));
        pwdLineEdit->setPlaceholderText(QCoreApplication::translate("LoginDialog", "\345\257\206\347\240\201", nullptr));
        loginPushButton->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        switch_pushButton->setText(QCoreApplication::translate("LoginDialog", "\345\210\207\346\215\242\350\264\246\345\217\267", nullptr));
        registerPushButton->setText(QCoreApplication::translate("LoginDialog", "\346\263\250\345\206\214\350\264\246\345\217\267", nullptr));
        delUserPushButton->setText(QCoreApplication::translate("LoginDialog", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
        pushButton_changePwd->setText(QCoreApplication::translate("LoginDialog", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
