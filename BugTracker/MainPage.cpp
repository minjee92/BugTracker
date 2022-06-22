#include "MainPage.h"
#include "ui_MainPage.h"

MainPage::MainPage(AUTHORITY _authority, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainPage)
{
    ui->setupUi(this);

    m_eAuthority = _authority;

    switch (m_eAuthority) {
    case ADMIN:     initializeAsAdmin();        break;
    case MANAGER:   initializeAsManager();      break;
    case DEV:       initializeAsDeveloper();    break;
    case TESTER:    initializeAsTester();       break;
    default:
        break;
    }
}

MainPage::~MainPage()
{
    delete ui;
}

void MainPage::initializeAsAdmin()
{
    ui->stackedWidget->setCurrentIndex(HOME);
}

void MainPage::initializeAsManager()
{
    ui->stackedWidget->setCurrentIndex(HOME);
    ui->pb_manage_users->hide();
    ui->pb_manage_users->setEnabled(false);
}

void MainPage::initializeAsDeveloper()
{
    ui->stackedWidget->setCurrentIndex(HOME);
    ui->pb_manage_users->hide();
    ui->pb_manage_users->setEnabled(false);
}

void MainPage::initializeAsTester()
{
    ui->stackedWidget->setCurrentIndex(HOME);
    ui->pb_manage_users->hide();
    ui->pb_manage_users->setEnabled(false);
}

void MainPage::on_pb_home_clicked()
{
    ui->stackedWidget->setCurrentIndex(HOME);
}


void MainPage::on_pb_manage_users_clicked()
{
    ui->stackedWidget->setCurrentIndex(MANAGE_USERS);
}


void MainPage::on_pb_my_projects_clicked()
{
    ui->stackedWidget->setCurrentIndex(MY_PROJECT);
}


void MainPage::on_pb_my_tickets_clicked()
{
    ui->stackedWidget->setCurrentIndex(MY_TICKET);
}


void MainPage::on_pb_Profile_clicked()
{
    ui->stackedWidget->setCurrentIndex(PROFILE);
}


void MainPage::on_pb_logout_clicked()
{
    emit logout();
}

