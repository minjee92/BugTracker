#include "UserProfile.h"
#include "ui_UserProfile.h"

UserProfile::UserProfile(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserProfile)
{
    ui->setupUi(this);
}

UserProfile::~UserProfile()
{
    delete ui;
}
