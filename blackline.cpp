#include "blackline.h"
#include "ui_blackline.h"

BlackLine::BlackLine(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BlackLine)
{
    ui->setupUi(this);
}

BlackLine::~BlackLine()
{
    delete ui;
}
