#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "keypress.h"
#include <QtWebKitWidgets/QWebView>
#include <QMediaPlayer>
#include <qvideowidget.h>
#include <QVideoWidget>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QUrl>
#include <QTextCodec>
#include <QApplication>
#include <QKeyEvent>

#include <QDebug>

QNetworkAccessManager* manager;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),

    ui(new Ui::MainWindow) {
    ui->setupUi(this);

    manager = new QNetworkAccessManager(this);
}

void MainWindow::on_lineEdit_returnPressed() {

    QString str1 = ui->lineEdit->text();

    QUrl url_2("http://" + str1 + ":8080/video");
    QNetworkRequest request(url_2);

    QMediaPlayer *mp = new QMediaPlayer(0, 0);
    QMediaContent *mc = new QMediaContent(request);
    mp->setMedia(*mc);

    QVideoWidget *vw = new QVideoWidget(this);
    vw->setMaximumSize(500, 300);
    vw->setMinimumSize(500, 300);

    mp->setVideoOutput(vw);
    vw->show();
    mp->play();

}

MainWindow::~MainWindow() {
    delete ui;
}
