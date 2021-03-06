#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWidget>
#include "DataManager.h"

namespace Ui {
class Login;
}
/*!
 * \brief The Login class
 * \details Login page
 * \author Lee minjee
 */
class Login : public QWidget
{
    Q_OBJECT

public:
    /*!
     * \brief The AUTHORITY enum
     * \enum AUTHORITY
     * \details Authority type of this program
     */
    enum AUTHORITY {
        ADMIN = 0,  //administor
        MANAGER,    //manager
        DEVELOPER,  //developer
        TESTER      //tester
    };

    /*!
     * \brief The PAGE_INDEX enum
     */
    enum PAGE_INDEX
    {
        LOGIN_PAGE = 0,
        SIGNUP_PAGE,
        DEMO_PAGE,
        PASSWORD_PAGE
    };

    explicit Login(QWidget *parent = nullptr);
    ~Login();

    /*!
     * \brief isDemo
     * \details This fucntion is checked it is login as demo mode.
     * \return bool if is deme version return true,
     */
    bool isDemo() const;

    /*!
     * \brief loginAuthority
     * \details
     * \return enum AUTHORITY
     */
    enum AUTHORITY loginAuthority() const;

  signals :
    void LoginAsDemo();

  private slots:
    /* Login page events */
    void on_login_pb_fogot_pw_clicked();

    void on_login_pb_create_account_clicked();

    void on_login_pb_demo_page_clicked();

    void on_login_pb_login_clicked();


    /* signup page events */
    void on_signup_pb_create_account_clicked();


    /* demo page events */
    void on_demo_pb_admin_clicked();

    void on_demo_pb_manager_clicked();

    void on_demo_pb_dev_clicked();

    void on_demo_pb_tester_clicked();

    void on_demo_pb_signIn_clicked();


    /* changing password page events */
    void on_pw_pb_change_pw_clicked();


private:
    /*  Pages Initialzition settings functions */
    /*!
     * \brief initializeLoginPage
     * \details Initialize the login page.
     */
    void initializeLoginPage();
    /*!
     * \brief initializeSignUpPage
     */
    void initializeSignUpPage();
    /*!
     * \brief initializePasswordPage
     */
    void initializePasswordPage();

private:
    Ui::Login *ui;

    bool m_IsDemo = false;
    enum AUTHORITY m_eAuthority = ADMIN;


};

#endif // LOGINPAGE_H
