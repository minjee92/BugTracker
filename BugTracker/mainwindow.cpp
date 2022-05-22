#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initialize();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initialize()
{
    switch (m_eCurrentAuthority)
    {
        case Authority::ADMIN:      initialzieAsAdmin();        break;
        case Authority::MANAGER:    initialzieAsManager();      break;
        case Authority::DEVELOPER:  initialzieAsDeveloper();    break;
        case Authority::TESTER:     initialzieAsTester();       break;
    }
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

