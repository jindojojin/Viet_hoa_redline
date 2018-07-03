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
    void choseFolder();

private slots:
    void on_handModeBtn_clicked();

    void on_autoModeBtn_clicked();

    void on_close_handmode_menu_btn_clicked();

    void on_close_automode_menu_btn_clicked();

    void on_chose_folder_handmode_btn_clicked();

    void on_chose_folder_automode_btn_clicked();

private:
    Ui::BlackLine *ui;
};

#endif // BLACKLINE_H
