#include "blackline.h"
#include "ui_blackline.h"
#include <string>
#include <QFileDialog>

void show_HandMode_Menu( Ui::BlackLine* ui){
    ui->frame_handmode_menu->setVisible(true);
    ui->frame_automode_menu->setVisible(false);
}
void hide_HandMode_Menu( Ui::BlackLine* ui){
    ui->frame_handmode_menu->setVisible(false);
}
void show_AutoMode_Menu( Ui::BlackLine* ui){
    ui->frame_handmode_menu->setVisible(false);
    ui->frame_automode_menu->setVisible(true);
}
void hide_AutoMode_Menu( Ui::BlackLine* ui){
    ui->frame_automode_menu->setVisible(false);
}
void BlackLine::choseFolder(){
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                    "/home",
                                                    QFileDialog::ShowDirsOnly
                                                    | QFileDialog::DontResolveSymlinks);
    this->ui->folder_path_automode->setText(dir);
    this->ui->folder_path_handmode->setText(dir);
}

BlackLine::BlackLine(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BlackLine)
{
    ui->setupUi(this);
    hide_HandMode_Menu(this->ui);
    hide_AutoMode_Menu(this->ui);
}
BlackLine::~BlackLine()
{
    delete ui;
}

void BlackLine::on_handModeBtn_clicked()
{
    hide_AutoMode_Menu(this->ui);
    show_HandMode_Menu(this->ui);
}

void BlackLine::on_autoModeBtn_clicked()
{
    hide_HandMode_Menu(this->ui);
    show_AutoMode_Menu(this->ui);
}

void BlackLine::on_close_automode_menu_btn_clicked()
{
    hide_AutoMode_Menu(this->ui);
}

void BlackLine::on_close_handmode_menu_btn_clicked()
{
    hide_HandMode_Menu(this->ui);
}

void BlackLine::on_chose_folder_handmode_btn_clicked()
{
    choseFolder();
}

void BlackLine::on_chose_folder_automode_btn_clicked()
{
    choseFolder();
}
