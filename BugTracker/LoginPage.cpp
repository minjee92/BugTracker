#include "LoginPage.h"
#include "ui_Login.h"
#include "mainwindow.h"

#include <QMessageBox>

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    // Sets the current page to the login page and intialize the login page
    initializeLoginPage();
    ui->stackedWidget->setCurrentIndex(PAGE_INDEX::LOGIN_PAGE);

}

Login::~Login()
{
    delete ui;
}

void Login::on_login_pb_fogot_pw_clicked()
{
    ui->stackedWidget->setCurrentIndex(PAGE_INDEX::PASSWORD_PAGE);
}

void Login::on_login_pb_create_account_clicked()
{
    ui->stackedWidget->setCurrentIndex(PAGE_INDEX::SIGNUP_PAGE);
}

void Login::on_login_pb_demo_page_clicked()
{
    ui->stackedWidget->setCurrentIndex(PAGE_INDEX::DEMO_PAGE);
}

void Login::on_login_pb_login_clicked()
{
    //Server is not update
    //2022-05-22
    QMessageBox::information(this,"Information","The server is not responding..");

}


void Login::on_signup_pb_create_account_clicked()
{
    //Server is not update
    //2022-05-22
    QMessageBox::information(this,"Information","The server is not responding..");
    ui->stackedWidget->setCurrentIndex(PAGE_INDEX::LOGIN_PAGE);
    // set cursor focusing to login page first edit widget
    ui->login_edit_email->setFocus();
    initializeSignUpPage();
}

void Login::on_demo_pb_admin_clicked()
{
    m_IsDemo = true;
    m_eAuthority = ADMIN;
    emit LoginAsDemo();
}

void Login::on_demo_pb_manager_clicked()
{
    m_IsDemo = true;
    m_eAuthority = MANAGER;
    emit LoginAsDemo();
}

void Login::on_demo_pb_dev_clicked()
{
    m_IsDemo = true;
    m_eAuthority = DEVELOPER;
    emit LoginAsDemo();
}

void Login::on_demo_pb_tester_clicked()
{
    m_IsDemo = true;
    m_eAuthority = TESTER;
    emit LoginAsDemo();
}

void Login::on_demo_pb_signIn_clicked()
{
    initializeLoginPage();
    ui->stackedWidget->setCurrentIndex(LOGIN_PAGE);

    // set cursor focusing to login page first edit widget
    ui->login_edit_email->setFocus();
}

void Login::on_pw_pb_change_pw_clicked()
{
    //Server is not update
    //2022-05-22
    QMessageBox::information(this,"Information","The server is not responding..");
    ui->stackedWidget->setCurrentIndex(PAGE_INDEX::LOGIN_PAGE);
    // set cursor focusing to login page first edit widget
    ui->login_edit_email->setFocus();
    initializePasswordPage();
}

void Login::initializeLoginPage()
{
    ui->login_edit_email->clear();
    ui->login_edit_password->clear();
}

void Login::initializeSignUpPage()
{
    ui->signup_edit_email->clear();
    ui->signup_edit_firstName->clear();
    ui->signup_edit_lastName->clear();
    ui->signup_edit_phone->clear();
    ui->signup_edit_pw->clear();
    ui->signup_edit_pw_confirm->clear();
}

void Login::initializePasswordPage()
{
    ui->pw_edit_phone->clear();
    ui->pw_edit_new_pw->clear();
    ui->pw_edit_new_pw_confirm->clear();
}



