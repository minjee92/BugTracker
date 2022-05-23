#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Login.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


/*!
 * \brief The MainWindow class
 * \details MainWindow for Bug Tracker Program
 * \author Lee Minjee
 * \date 2022-05-22
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /*!
     * \brief The Authority enum
     * \details
     */
    enum Authority
    {
        ADMIN = 0,
        MANAGER,
        DEVELOPER,
        TESTER
    };

    /*!
     * \brief MainWindow
     * \param parent nullptr
     */
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    /*!
     * \brief   m_eCurrentAuthority
     * \details
     */
    enum Authority m_eCurrentAuthority = ADMIN;
private slots:


private:
    /*!
     * \brief initialize
     * \details initialize mainwindow class , 메인 윈도우 초기설정
     */
    void initialize();
    void initialzieAsAdmin();
    void initialzieAsManager();
    void initialzieAsDeveloper();
    void initialzieAsTester();

    /* 로그인 페이지 설정 함수들 */
    /*!
     * \brief createLoginPage
     * \details 로그인 페이지 생성함수. 로그인 화면이 필요할 경우 항상 새로이 생성함. (로그인 성공 후에는 굳이 필요하지 않으므로)
     */
    void createLoginPage();
    /*!
     * \brief deleteLoginPage
     * \details 로그인 페이지 삭제함수. 로그인이 완료되면 불필요한 로그인 페이지를 삭제하기 위함.
     */
    void deleteLoginPage();

    Login* m_pLogin = nullptr;

};
#endif // MAINWINDOW_H
