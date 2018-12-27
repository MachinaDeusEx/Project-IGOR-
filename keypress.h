#ifndef KEYPRESS_H
#define KEYPRESS_H

#include <QWidget>
#include <QtGui>
#include <QLabel>

class KeyPress : public QWidget {
    Q_OBJECT

public:
    KeyPress(QWidget *parent = 0);
    const char* buff;

protected:
    void keyPressEvent(QKeyEvent *event);

private:
    QLabel *myLabelText;
};

#endif // KEYPRESS_H
