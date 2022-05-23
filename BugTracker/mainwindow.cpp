#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //메인윈도우 실행시 로그인 화면부터 출력함
    createLoginPage();
    //initialize();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::initialize()
{
//    switch (m_eCurrentAuthority)
//    {
//        case Authority::ADMIN:      initialzieAsAdmin();        break;
//        case Authority::MANAGER:    initialzieAsManager();      break;
//        case Authority::DEVELOPER:  initialzieAsDeveloper();    break;
//        case Authority::TESTER:     initialzieAsTester();       break;
//    }
}

void MainWindow::initialzieAsAdmin()
{

}

void MainWindow::initialzieAsManager()
{

}

void MainWindow::initialzieAsDeveloper()
{

}

void MainWindow::initialzieAsTester()
{

}

void MainWindow::createLoginPage()
{
    if(m_pLogin != nullptr)
    {
        delete m_pLogin;
        m_pLogin = nullptr;
    }

    m_pLogin = new Login(this);
    QVBoxLayout* layout = static_cast<QVBoxLayout*>(ui->login_page->layout());
    layout->addWidget(m_pLogin);

}

void MainWindow::deleteLoginPage()
{
    if(m_pLogin != nullptr)
    {
        QVBoxLayout* layout = static_cast<QVBoxLayout*>(ui->login_page->layout());
        layout->removeWidget((QWidget*)m_pLogin);
        delete m_pLogin;
        m_pLogin = nullptr;
    }
}

