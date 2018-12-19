#include "mainwindow.h"
#include "qsocket.h"
#include "keypress.h"
#include "ui_mainwindow.h"
#include <QCoreApplication>
#include <string.h>

SocketTest::SocketTest(QObject *parent) :
    QObject(parent)
{
}



void SocketTest::connecting(const char* tmp_buff)
{
    socket = new QTcpSocket(this);
    connect(socket, SIGNAL(connected()), this, SLOT(connected()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));

    MainWindow ipis;

    QString ip = ipis.ip_to_send();

    qDebug() << "Connecting,..";


    socket->connectToHost(ip , 80);

    if(!socket->waitForConnected(500))
    {
        qDebug() << "Error: " << socket->errorString();
    }

    socket->write(tmp_buff);
    socket->disconnectFromHost();
}

void SocketTest::command(const char* buff) {
    socket->write(buff);
}

void SocketTest::connected()
{
    qDebug() << "Connected!";
}

void SocketTest::disconnected()
{
    qDebug() << "Disconnected!";
}
