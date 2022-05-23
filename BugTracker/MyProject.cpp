#include "MyProject.h"
#include "ui_MyProject.h"

MyProject::MyProject(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyProject)
{
    ui->setupUi(this);
}

MyProject::~MyProject()
{
    delete ui;
}
