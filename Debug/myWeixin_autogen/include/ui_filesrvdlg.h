/********************************************************************************
** Form generated from reading UI file 'filesrvdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILESRVDLG_H
#define UI_FILESRVDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileSrvDlg
{
public:
    QLabel *label_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QProgressBar *sendProgressBar;
    QPushButton *srvClosePushButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *sfileSizeLineEdit;
    QLabel *label_4;
    QLineEdit *sendSizeLineEdit;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *sfileNameLineEdit;
    QPushButton *openFilePushButton;
    QPushButton *sendFilePushButton;

    void setupUi(QDialog *FileSrvDlg)
    {
        if (FileSrvDlg->objectName().isEmpty())
            FileSrvDlg->setObjectName(QString::fromUtf8("FileSrvDlg"));
        FileSrvDlg->resize(542, 225);
        label_5 = new QLabel(FileSrvDlg);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(220, 30, 121, 41));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        widget = new QWidget(FileSrvDlg);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 170, 471, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        sendProgressBar = new QProgressBar(widget);
        sendProgressBar->setObjectName(QString::fromUtf8("sendProgressBar"));
        sendProgressBar->setValue(24);

        horizontalLayout->addWidget(sendProgressBar);

        srvClosePushButton = new QPushButton(widget);
        srvClosePushButton->setObjectName(QString::fromUtf8("srvClosePushButton"));

        horizontalLayout->addWidget(srvClosePushButton);

        widget1 = new QWidget(FileSrvDlg);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(50, 130, 467, 23));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        sfileSizeLineEdit = new QLineEdit(widget1);
        sfileSizeLineEdit->setObjectName(QString::fromUtf8("sfileSizeLineEdit"));
        sfileSizeLineEdit->setEnabled(false);

        horizontalLayout_2->addWidget(sfileSizeLineEdit);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        sendSizeLineEdit = new QLineEdit(widget1);
        sendSizeLineEdit->setObjectName(QString::fromUtf8("sendSizeLineEdit"));
        sendSizeLineEdit->setEnabled(false);

        horizontalLayout_2->addWidget(sendSizeLineEdit);

        widget2 = new QWidget(FileSrvDlg);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(50, 80, 437, 30));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        sfileNameLineEdit = new QLineEdit(widget2);
        sfileNameLineEdit->setObjectName(QString::fromUtf8("sfileNameLineEdit"));
        sfileNameLineEdit->setEnabled(false);

        horizontalLayout_3->addWidget(sfileNameLineEdit);

        openFilePushButton = new QPushButton(widget2);
        openFilePushButton->setObjectName(QString::fromUtf8("openFilePushButton"));
        openFilePushButton->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(openFilePushButton);

        sendFilePushButton = new QPushButton(widget2);
        sendFilePushButton->setObjectName(QString::fromUtf8("sendFilePushButton"));

        horizontalLayout_3->addWidget(sendFilePushButton);


        retranslateUi(FileSrvDlg);

        QMetaObject::connectSlotsByName(FileSrvDlg);
    } // setupUi

    void retranslateUi(QDialog *FileSrvDlg)
    {
        FileSrvDlg->setWindowTitle(QCoreApplication::translate("FileSrvDlg", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("FileSrvDlg", "\346\226\207\344\273\266\345\217\221\351\200\201", nullptr));
        label_2->setText(QCoreApplication::translate("FileSrvDlg", "\350\277\233    \345\272\246", nullptr));
        srvClosePushButton->setText(QCoreApplication::translate("FileSrvDlg", "\345\201\234\346\255\242", nullptr));
        label_3->setText(QCoreApplication::translate("FileSrvDlg", "\345\244\247\345\260\217\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("FileSrvDlg", "\345\267\262\345\217\221\351\200\201\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("FileSrvDlg", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
        openFilePushButton->setText(QCoreApplication::translate("FileSrvDlg", "...", nullptr));
        sendFilePushButton->setText(QCoreApplication::translate("FileSrvDlg", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileSrvDlg: public Ui_FileSrvDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILESRVDLG_H
