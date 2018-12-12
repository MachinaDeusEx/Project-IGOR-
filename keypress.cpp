#include <QApplication>
#include <QKeyEvent>
#include "keypress.h"
#include "mainwindow.h"
#include "qsocket.h"

KeyPress::KeyPress(QWidget *parent) :
    QWidget(parent)
{

    myLabelText = new QLabel ("You Didn't Pressed / Released any Key");
    //myLabelText->setFixedHeight(200);
    //myLabelText->setFixedWidth(200);
}

SocketTest tmp_sock;
//MainWindow m;



void KeyPress::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_W)
    {
        myLabelText->setText("You Pressed Key W");
        buff = "?cm2";
        tmp_sock.connecting(buff);
        qDebug() << buff;
    }
    else if (event->key() == Qt::Key_S) {
        myLabelText->setText("Pressed S");
        buff = "?cm1";
        tmp_sock.connecting(buff);
        qDebug() << buff;
    }
    else if (event->key() == Qt::Key_A) {
        myLabelText->setText("Pressed A");
        buff = "?cm3";
        tmp_sock.connecting(buff);
        qDebug() << buff;
    }
    else if (event->key() == Qt::Key_D) {
        myLabelText->setText("Pressed D");
        buff = "?cm4";
        tmp_sock.connecting(buff);
        qDebug() << buff;
    }
    else if (event->key() == Qt::Key_Space) {
        myLabelText->setText("Pressed Spase");
        buff = "?cm5";
        tmp_sock.connecting(buff);
        qDebug() << buff;
    }
}


