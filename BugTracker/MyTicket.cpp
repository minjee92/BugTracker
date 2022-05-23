#include "MyTicket.h"
#include "ui_MyTicket.h"

MyTicket::MyTicket(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyTicket)
{
    ui->setupUi(this);
}

MyTicket::~MyTicket()
{
    delete ui;
}
