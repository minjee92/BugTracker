#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QWidget>

namespace Ui {
class MainPage;
}

class MainPage : public QWidget
{
    Q_OBJECT
public:
    enum AUTHORITY
    {
        ADMIN = 0,
        MANAGER,
        DEV,
        TESTER,
        NONE
    };


    explicit MainPage(enum AUTHORITY _authority = ADMIN, QWidget *parent = nullptr);
    ~MainPage();


    void initializeAsAdmin();
    void initializeAsManager();
    void initializeAsDeveloper();
    void initializeAsTester();

signals:
    void logout();

private slots:
    void on_pb_home_clicked();

    void on_pb_manage_users_clicked();

    void on_pb_my_projects_clicked();

    void on_pb_my_tickets_clicked();

    void on_pb_Profile_clicked();

    void on_pb_logout_clicked();

private:
    enum PAGE_INDEX
    {
        HOME = 0,
        MANAGE_USERS,
        MY_PROJECT,
        MY_TICKET,
        PROFILE
    };

private:
    Ui::MainPage *ui;

    enum AUTHORITY m_eAuthority = NONE;


};

#endif // MAINPAGE_H
