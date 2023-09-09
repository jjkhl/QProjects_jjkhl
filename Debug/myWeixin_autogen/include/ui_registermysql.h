/********************************************************************************
** Form generated from reading UI file 'registermysql.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERMYSQL_H
#define UI_REGISTERMYSQL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registerMysql
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_register;
    QLineEdit *lineEdit_newPwd;
    QLabel *label;
    QLineEdit *lineEdit_newAccount;
    QLabel *label_2;
    QLineEdit *lineEdit_newPwdConfirm;
    QLabel *label_3;

    void setupUi(QDialog *registerMysql)
    {
        if (registerMysql->objectName().isEmpty())
            registerMysql->setObjectName(QString::fromUtf8("registerMysql"));
        registerMysql->resize(400, 300);
        gridLayoutWidget = new QWidget(registerMysql);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 0, 381, 301));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_register = new QPushButton(gridLayoutWidget);
        pushButton_register->setObjectName(QString::fromUtf8("pushButton_register"));

        gridLayout->addWidget(pushButton_register, 3, 1, 1, 1);

        lineEdit_newPwd = new QLineEdit(gridLayoutWidget);
        lineEdit_newPwd->setObjectName(QString::fromUtf8("lineEdit_newPwd"));
        lineEdit_newPwd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_newPwd, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_newAccount = new QLineEdit(gridLayoutWidget);
        lineEdit_newAccount->setObjectName(QString::fromUtf8("lineEdit_newAccount"));

        gridLayout->addWidget(lineEdit_newAccount, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_newPwdConfirm = new QLineEdit(gridLayoutWidget);
        lineEdit_newPwdConfirm->setObjectName(QString::fromUtf8("lineEdit_newPwdConfirm"));
        lineEdit_newPwdConfirm->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_newPwdConfirm, 2, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        QWidget::setTabOrder(lineEdit_newAccount, lineEdit_newPwd);
        QWidget::setTabOrder(lineEdit_newPwd, lineEdit_newPwdConfirm);
        QWidget::setTabOrder(lineEdit_newPwdConfirm, pushButton_register);

        retranslateUi(registerMysql);

        QMetaObject::connectSlotsByName(registerMysql);
    } // setupUi

    void retranslateUi(QDialog *registerMysql)
    {
        registerMysql->setWindowTitle(QCoreApplication::translate("registerMysql", "\346\263\250\345\206\214\350\264\246\345\217\267", nullptr));
        pushButton_register->setText(QCoreApplication::translate("registerMysql", "\346\263\250\345\206\214\350\264\246\345\217\267", nullptr));
        label->setText(QCoreApplication::translate("registerMysql", "\346\226\260\350\264\246\345\217\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("registerMysql", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("registerMysql", "\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerMysql: public Ui_registerMysql {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERMYSQL_H
