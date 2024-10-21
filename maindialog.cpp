#include "maindialog.h"
#include "ui_maindialog.h"

MainDialog::MainDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainDialog)
{
    ui->setupUi(this);

    //
    websktserver=new QWebSocketServer("server",QWebSocketServer::NonSecureMode);

    //禁止断开服务器和发送消息按钮的使用

    ui->pushButtonDisc->setEnabled(false);
    ui->pushButtonSend->setEnabled(false);


    connect(websktserver,SIGNAL(newConnection()),this,SLOT(OnNewConnect()));
    connect(ui->pushButtonStart,SIGNAL(clicked(bool)),this,SLOT(on_pushButtonStart_clicked()));

}

MainDialog::~MainDialog()
{
    delete ui;
}

void MainDialog::OnNewConnect(){
    pscoket = websktserver->nextPendingConnection();

    connect(pscoket,SIGNAL(textMessageReceived(QString)),this,SLOT(ProTextMsg(QString)));
    connect(pscoket,SIGNAL(disconnected),this,SLOT(OnDisConnect()));

    QString stritem = pscoket->peerAddress().toString();
    ui->listWidgetClient->addItem(stritem);
    sktclients << pscoket;


}


void MainDialog::OnDisConnect(){}


void MainDialog::ProTextMsg(QString msg){}

void MainDialog::on_pushButtonStart_clicked()
{
    //获取端口
    int iport = ui->spinBox_Port->text().toUInt(); //拿到spinBox的文本并将其转换成Uint格式

    //监听客户端
    websktserver->listen(QHostAddress::Any,iport);

    //改变按钮状态
    ui->pushButtonSend->setEnabled(true);
    ui->pushButtonDisc->setEnabled(true);
    ui->pushButtonStart->setEnabled(false);




}


void MainDialog::on_pushButtonSend_clicked()
{
    QString strmsg = ui->textEditSendData->toPlainText();
    for(int i=0;i<sktclients.size();i++)
    {
        sktclients.at(i)->sendTextMessage(strmsg);
    }

}


void MainDialog::on_pushButtonDisc_clicked()
{
    //改变按钮状态
    ui->pushButtonSend->setEnabled(false);
    ui->pushButtonDisc->setEnabled(false);
    ui->pushButtonStart->setEnabled(true);


    //关闭服务
    websktserver->close();

}

