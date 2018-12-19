#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    QString ip_to_send();
    ~MainWindow();
    Ui::MainWindow *ui;

private slots:
    void on_lineEdit_returnPressed();


private:

};

#endif // MAINWINDOW_H
