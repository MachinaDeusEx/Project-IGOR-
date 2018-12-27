#ifndef TS_H
#define TS
#include <QDialog>

namespace Ui {
class ts;
}

class ts : public QDialog {
    Q_OBJECT

public:
    explicit ts(QWidget *parent = 0);
    ~ts();

private:
    Ui::ts *ui;
};

#endif // TS_H
