#ifndef FORMA_H
#define FORMA_H

#include <QWidget>

namespace Ui {
class FormA;
}

class FormA : public QWidget
{
    Q_OBJECT

public:
    explicit FormA(QWidget *parent = 0);
    ~FormA();

private:
    Ui::FormA *ui;
};

#endif // FORMA_H
