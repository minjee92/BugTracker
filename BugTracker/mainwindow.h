#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private:
    /*!
     * \brief initialize
     * \details initialize mainwindow class
     */
    void initialize();
    void initialzieAsAdmin();
    void initialzieAsManager();
    void initialzieAsDeveloper();
    void initialzieAsTester();

};
#endif // MAINWINDOW_H
