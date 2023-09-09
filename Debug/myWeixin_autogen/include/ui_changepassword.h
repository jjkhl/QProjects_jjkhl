/********************************************************************************
** Form generated from reading UI file 'changepassword.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_changePassWord
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_change;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_orginPwd;
    QLineEdit *lineEdit_newPwd;
    QLineEdit *lineEdit_newPwdConfirm;

    void setupUi(QDialog *changePassWord)
    {
        if (changePassWord->objectName().isEmpty())
            changePassWord->setObjectName(QString::fromUtf8("changePassWord"));
        changePassWord->resize(400, 300);
        formLayoutWidget = new QWidget(changePassWord);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 381, 281));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        pushButton_change = new QPushButton(formLayoutWidget);
        pushButton_change->setObjectName(QString::fromUtf8("pushButton_change"));

        formLayout->setWidget(4, QFormLayout::FieldRole, pushButton_change);

        lineEdit_username = new QLineEdit(formLayoutWidget);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_username);

        lineEdit_orginPwd = new QLineEdit(formLayoutWidget);
        lineEdit_orginPwd->setObjectName(QString::fromUtf8("lineEdit_orginPwd"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_orginPwd);

        lineEdit_newPwd = new QLineEdit(formLayoutWidget);
        lineEdit_newPwd->setObjectName(QString::fromUtf8("lineEdit_newPwd"));
        lineEdit_newPwd->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_newPwd);

        lineEdit_newPwdConfirm = new QLineEdit(formLayoutWidget);
        lineEdit_newPwdConfirm->setObjectName(QString::fromUtf8("lineEdit_newPwdConfirm"));
        lineEdit_newPwdConfirm->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_newPwdConfirm);

        QWidget::setTabOrder(lineEdit_username, lineEdit_orginPwd);
        QWidget::setTabOrder(lineEdit_orginPwd, lineEdit_newPwd);
        QWidget::setTabOrder(lineEdit_newPwd, lineEdit_newPwdConfirm);
        QWidget::setTabOrder(lineEdit_newPwdConfirm, pushButton_change);

        retranslateUi(changePassWord);

        QMetaObject::connectSlotsByName(changePassWord);
    } // setupUi

    void retranslateUi(QDialog *changePassWord)
    {
        changePassWord->setWindowTitle(QCoreApplication::translate("changePassWord", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("changePassWord", "\350\264\246\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("changePassWord", "\345\216\237\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("changePassWord", "\346\226\260\345\257\206\347\240\201", nullptr));
        label_4->setText(QCoreApplication::translate("changePassWord", "\347\241\256\345\256\232\346\226\260\345\257\206\347\240\201", nullptr));
        pushButton_change->setText(QCoreApplication::translate("changePassWord", "\346\233\264\346\224\271\350\264\246\345\217\267\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changePassWord: public Ui_changePassWord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
