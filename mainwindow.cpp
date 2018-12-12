#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMediaPlayer>
#include <qvideowidget.h>
#include <QVideoWidget>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QUrl>
#include <QTextCodec>

#include <QDebug>

QNetworkAccessManager* manager;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    manager = new QNetworkAccessManager(this);

    QUrl url("http://10.222.105.181:8080/video");
    QNetworkRequest request(url);


    this-> resize(800,600);
        QMediaPlayer *mp = new QMediaPlayer(0,0);
        QMediaContent *mc = new QMediaContent(request);
        mp->setMedia(*mc);

        QVideoWidget *vw = new QVideoWidget(this);
           vw->setMaximumSize(704, 576);
           vw->setMinimumSize(704, 576);

           mp->setVideoOutput(vw);
              this->setCentralWidget(vw);
              vw->show();
              mp->play();

    //QLineEdit *textLine = new QLineEdit(0, 800);
    //textLine->setText("Enter your Igor's IP");
}

MainWindow::~MainWindow()
{
    delete ui;
}
