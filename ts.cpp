#include "ts.h"
#include "ui_ts.h"
#include<QtWebKitWidgets/QWebView>
#include<QUrl>
ts::ts(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ts) {

    ui->setupUi(this);
    ui->webView->load(QUrl("http://thingspeak.com/channels/648242"));
    }

ts::~ts() {
    delete ui;
}
