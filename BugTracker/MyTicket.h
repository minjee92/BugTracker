#ifndef MYTICKET_H
#define MYTICKET_H

#include <QWidget>

namespace Ui {
class MyTicket;
}

class MyTicket : public QWidget
{
    Q_OBJECT

public:
    explicit MyTicket(QWidget *parent = nullptr);
    ~MyTicket();

private:
    Ui::MyTicket *ui;
};

#endif // MYTICKET_H
