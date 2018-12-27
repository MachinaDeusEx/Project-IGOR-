#include "mainwindow.h"
#include "keypress.h"
#include "qsocket.h"
#include "ts.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.showMaximized();

        // TODO: IMPLEMENT TS.H WINDOW;

    KeyPress *keyPress = new KeyPress();
    keyPress->resize(200,200);
    keyPress->show();
    keyPress->setFocus();

    return a.exec();
}
