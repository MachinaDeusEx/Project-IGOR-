#include "mainwindow.h"
#include "keypress.h"
#include "qsocket.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.showMaximized();

    KeyPress *keyPress = new KeyPress();
    keyPress->resize(200,200);
    keyPress->show();
    keyPress->setFocus();




    //SocketTest tmp_sock;
    //tmp_sock.connecting();



    return a.exec();
}
