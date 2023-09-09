/********************************************************************************
** Form generated from reading UI file 'filecntdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILECNTDLG_H
#define UI_FILECNTDLG_H

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

class Ui_FileCntDlg
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *rfileSizeLineEdit;
    QLabel *label_4;
    QLineEdit *recvSizeLineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QProgressBar *recvProgressBar;
    QLabel *rateLabel;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *rfileNameLineEdit;
    QPushButton *cntClosePushButton;

    void setupUi(QDialog *FileCntDlg)
    {
        if (FileCntDlg->objectName().isEmpty())
            FileCntDlg->setObjectName(QString::fromUtf8("FileCntDlg"));
        FileCntDlg->resize(540, 187);
        label = new QLabel(FileCntDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 0, 111, 61));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        layoutWidget = new QWidget(FileCntDlg);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 110, 401, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(label_3);

        rfileSizeLineEdit = new QLineEdit(layoutWidget);
        rfileSizeLineEdit->setObjectName(QString::fromUtf8("rfileSizeLineEdit"));
        rfileSizeLineEdit->setEnabled(false);
        rfileSizeLineEdit->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(rfileSizeLineEdit);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(label_4);

        recvSizeLineEdit = new QLineEdit(layoutWidget);
        recvSizeLineEdit->setObjectName(QString::fromUtf8("recvSizeLineEdit"));
        recvSizeLineEdit->setEnabled(false);
        recvSizeLineEdit->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(recvSizeLineEdit);

        layoutWidget1 = new QWidget(FileCntDlg);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 150, 401, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(label_5);

        recvProgressBar = new QProgressBar(layoutWidget1);
        recvProgressBar->setObjectName(QString::fromUtf8("recvProgressBar"));
        recvProgressBar->setMaximumSize(QSize(200, 16777215));
        recvProgressBar->setValue(24);

        horizontalLayout_2->addWidget(recvProgressBar);

        rateLabel = new QLabel(layoutWidget1);
        rateLabel->setObjectName(QString::fromUtf8("rateLabel"));
        rateLabel->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(rateLabel);

        layoutWidget2 = new QWidget(FileCntDlg);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(50, 70, 350, 30));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        rfileNameLineEdit = new QLineEdit(layoutWidget2);
        rfileNameLineEdit->setObjectName(QString::fromUtf8("rfileNameLineEdit"));
        rfileNameLineEdit->setEnabled(false);

        horizontalLayout_3->addWidget(rfileNameLineEdit);

        cntClosePushButton = new QPushButton(layoutWidget2);
        cntClosePushButton->setObjectName(QString::fromUtf8("cntClosePushButton"));

        horizontalLayout_3->addWidget(cntClosePushButton);


        retranslateUi(FileCntDlg);

        QMetaObject::connectSlotsByName(FileCntDlg);
    } // setupUi

    void retranslateUi(QDialog *FileCntDlg)
    {
        FileCntDlg->setWindowTitle(QCoreApplication::translate("FileCntDlg", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FileCntDlg", "\346\226\207\344\273\266\346\216\245\346\224\266", nullptr));
        label_3->setText(QCoreApplication::translate("FileCntDlg", "\345\244\247\345\260\217\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("FileCntDlg", "\345\267\262\346\216\245\346\224\266", nullptr));
        label_5->setText(QCoreApplication::translate("FileCntDlg", "\350\277\233  \345\272\246", nullptr));
        rateLabel->setText(QString());
        label_2->setText(QCoreApplication::translate("FileCntDlg", "\346\216\245\346\224\266\346\226\207\344\273\266", nullptr));
        cntClosePushButton->setText(QCoreApplication::translate("FileCntDlg", "\345\201\234\346\255\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileCntDlg: public Ui_FileCntDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILECNTDLG_H
