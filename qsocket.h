#ifndef SOCKETTEST_H
#define SOCKETTEST_H

#include <QObject>
#include <QDebug>
#include <QTcpSocket>
#include <QAbstractSocket>


class SocketTest : public QObject
{
    Q_OBJECT
public:
    explicit SocketTest(QObject *parent = 0);
    void connecting(const char* tmp_buff);
    void command(const char* buff);

signals:

public slots:

    void connected();
    void disconnected();

private:
    QTcpSocket *socket;

};
#endif // SOCKETTEST_H
