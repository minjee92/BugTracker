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
    ui->mainStack->setCurrentIndex(LOGIN_PAGE);
    // 혹은
    //Logout();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::LoggedInAsDemo()
{
    int value = static_cast<int>(m_pLogin->loginAuthority());
    m_eCurrentAuthority = static_cast<enum AUTHORITY>(value);

    deleteLoginPage();
    createMainPage();
    ui->mainStack->setCurrentIndex(MAIN_PAGE);

}

void MainWindow::Logout()
{
    deleteMainPage();
    createLoginPage();
    ui->mainStack->setCurrentIndex(LOGIN_PAGE);
}

void MainWindow::createLoginPage()
{
    if(m_pLogin != nullptr)
    {
        delete m_pLogin;
        m_pLogin = nullptr;
    }

    //로그인 위젯 생성
    m_pLogin = new Login(this);

    //메인윈도우 로그인 페이지 위치에 로그인 위젯 배치
    QVBoxLayout* layout = static_cast<QVBoxLayout*>(ui->login_page->layout());
    layout->addWidget(m_pLogin);

    //메인윈도우와 로그인 페이지 시그날,슬롯 연결
    //데모버전으로 로그인 시 이벤트 연결
    connect(m_pLogin,&Login::LoginAsDemo,this,&MainWindow::LoggedInAsDemo);

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

void MainWindow::createMainPage()
{
    if(m_pMain != nullptr)
    {
        delete m_pMain;
        m_pMain = nullptr;
    }

    //로그인 위젯 생성
    m_pMain = new MainPage(this);

    //메인윈도우 로그인 페이지 위치에 로그인 위젯 배치
    QVBoxLayout* layout = static_cast<QVBoxLayout*>(ui->main_page->layout());
    layout->addWidget(m_pMain);
}

void MainWindow::deleteMainPage()
{
    if(m_pMain != nullptr)
    {
        QVBoxLayout* layout = static_cast<QVBoxLayout*>(ui->main_page->layout());
        layout->removeWidget((QWidget*)m_pMain);
        delete m_pMain;
        m_pMain = nullptr;
    }
}

