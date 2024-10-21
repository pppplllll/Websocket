#ifndef MAINDIALOG_H
#define MAINDIALOG_H

#include <QDialog>
#include <QWebSocketServer>
#include <QtWebSockets>
#include <QHostAddress>




QT_BEGIN_NAMESPACE
namespace Ui {
class MainDialog;
}
QT_END_NAMESPACE

class MainDialog : public QDialog
{
    Q_OBJECT

public:
    MainDialog(QWidget *parent = nullptr);
    ~MainDialog();

private:
    Ui::MainDialog *ui;

    QWebSocketServer *websktserver; //服务器对象
    QList<QWebSocket*> sktclients;//存储客户端
    QWebSocket *pscoket;
    QDateTime *currentdatatime; //日期时间对象

private Q_SLOTS:
    void OnNewConnect();
    void OnDisConnect();
    void ProTextMsg(QString msg);
    void on_pushButtonStart_clicked();
    void on_pushButtonSend_clicked();
    void on_pushButtonDisc_clicked();
};
#endif // MAINDIALOG_H
