#ifndef BLACKLINE_H
#define BLACKLINE_H

#include <QMainWindow>

namespace Ui {
    class BlackLine;
}

class BlackLine : public QMainWindow
{
    Q_OBJECT

public:
    explicit BlackLine(QWidget *parent = 0);
    ~BlackLine();

private:
    Ui::BlackLine *ui;
};

#endif // BLACKLINE_H
