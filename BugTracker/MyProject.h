#ifndef MYPROJECT_H
#define MYPROJECT_H

#include <QWidget>

namespace Ui {
class MyProject;
}

class MyProject : public QWidget
{
    Q_OBJECT

public:
    explicit MyProject(QWidget *parent = nullptr);
    ~MyProject();

private:
    Ui::MyProject *ui;
};

#endif // MYPROJECT_H
