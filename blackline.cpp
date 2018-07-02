#include "blackline.h"
#include "ui_blackline.h"
#include <string>

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

BlackLine::BlackLine(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BlackLine)
{
    ui->setupUi(this);
    hide_HandMode_Menu(this->ui);
    hide_AutoMode_Menu(this->ui);
    QPixmap backgroundPic("E:/NCKH/BlackLine/rsc/14287.jpg");
    ui->label_background->setPixmap(backgroundPic);
}

BlackLine::~BlackLine()
{
    delete ui;
}

void BlackLine::on_start_handmode_btn_clicked()
{

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

void BlackLine::on_close_handmode_menu_btn_clicked()
{
    hide_HandMode_Menu(this->ui);
}
