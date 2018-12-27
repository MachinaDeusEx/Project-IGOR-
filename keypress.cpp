#include <QApplication>
#include <QKeyEvent>
#include "keypress.h"
#include "mainwindow.h"
#include "qsocket.h"

KeyPress::KeyPress(QWidget *parent) :
    QWidget(parent) {
    myLabelText = new QLabel ("You Didn't Pressed / Released any Key");
}

SocketTest tmp_sock;

void KeyPress::keyPressEvent(QKeyEvent *event) {
    if(event->key() == Qt::Key_W) {
        myLabelText->setText("You Pressed Key W");
        buff = "?2";
        tmp_sock.connecting(buff);

        qDebug() << buff;
    }
    else if (event->key() == Qt::Key_S) {
        myLabelText->setText("Pressed S");
        buff = "?1";
        tmp_sock.connecting(buff);

        qDebug() << buff;
    }
    else if (event->key() == Qt::Key_A) {
        myLabelText->setText("Pressed A");
        buff = "?3";
        tmp_sock.connecting(buff);

        qDebug() << buff;
    }
    else if (event->key() == Qt::Key_D) {
        myLabelText->setText("Pressed D");
        buff = "?4";
        tmp_sock.connecting(buff);

        qDebug() << buff;
    }
    else if (event->key() == Qt::Key_Space) {
        myLabelText->setText("Pressed Spase");
        buff = "?5";
        tmp_sock.connecting(buff);

        qDebug() << buff;
    }
    else if (event->key() == Qt::Key_T) {
        myLabelText->setText("Pressed T");
        buff = "?6";
        tmp_sock.connecting(buff);

        qDebug() << buff;
    }
}
