/********************************************************************************
** Form generated from reading UI file 'maindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDIALOG_H
#define UI_MAINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainDialog
{
public:
    QTextEdit *textEditSendData;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox_Port;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonDisc;
    QPushButton *pushButtonSend;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTextEdit *textEditRecieve;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QListWidget *listWidgetClient;

    void setupUi(QDialog *MainDialog)
    {
        if (MainDialog->objectName().isEmpty())
            MainDialog->setObjectName("MainDialog");
        MainDialog->resize(586, 563);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon.jfif"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainDialog->setWindowIcon(icon);
        textEditSendData = new QTextEdit(MainDialog);
        textEditSendData->setObjectName("textEditSendData");
        textEditSendData->setGeometry(QRect(40, 80, 481, 221));
        groupBox = new QGroupBox(MainDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 571, 311));
        groupBox_2 = new QGroupBox(MainDialog);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(0, 320, 571, 241));
        widget = new QWidget(MainDialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 30, 500, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        spinBox_Port = new QSpinBox(widget);
        spinBox_Port->setObjectName("spinBox_Port");
        spinBox_Port->setMaximum(65535);
        spinBox_Port->setValue(25535);

        horizontalLayout->addWidget(spinBox_Port);

        pushButtonStart = new QPushButton(widget);
        pushButtonStart->setObjectName("pushButtonStart");

        horizontalLayout->addWidget(pushButtonStart);

        pushButtonDisc = new QPushButton(widget);
        pushButtonDisc->setObjectName("pushButtonDisc");

        horizontalLayout->addWidget(pushButtonDisc);

        pushButtonSend = new QPushButton(widget);
        pushButtonSend->setObjectName("pushButtonSend");

        horizontalLayout->addWidget(pushButtonSend);

        widget1 = new QWidget(MainDialog);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(30, 330, 525, 222));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        textEditRecieve = new QTextEdit(widget1);
        textEditRecieve->setObjectName("textEditRecieve");

        verticalLayout->addWidget(textEditRecieve);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(widget1);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        listWidgetClient = new QListWidget(widget1);
        listWidgetClient->setObjectName("listWidgetClient");

        verticalLayout_2->addWidget(listWidgetClient);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(MainDialog);

        QMetaObject::connectSlotsByName(MainDialog);
    } // setupUi

    void retranslateUi(QDialog *MainDialog)
    {
        MainDialog->setWindowTitle(QCoreApplication::translate("MainDialog", "WebSocket\346\234\215\345\212\241\345\231\250\347\253\257--\346\265\213\350\257\225\347\211\210", nullptr));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
        label->setText(QCoreApplication::translate("MainDialog", "\346\234\215\345\212\241\345\231\250\347\233\221\345\220\254\345\225\206\345\223\201\357\274\232", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainDialog", "\345\220\257\345\212\250", nullptr));
        pushButtonDisc->setText(QCoreApplication::translate("MainDialog", "\346\226\255\345\274\200", nullptr));
        pushButtonSend->setText(QCoreApplication::translate("MainDialog", "\345\217\221\351\200\201", nullptr));
        label_2->setText(QCoreApplication::translate("MainDialog", "\346\216\245\346\224\266\346\266\210\346\201\257\345\210\227\350\241\250", nullptr));
        label_3->setText(QCoreApplication::translate("MainDialog", "\345\256\242\346\210\267\347\253\257\346\266\210\346\201\257\345\210\227\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainDialog: public Ui_MainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDIALOG_H
