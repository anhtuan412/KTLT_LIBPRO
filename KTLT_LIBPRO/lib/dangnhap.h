#ifndef DANGNHAP_H
#define DANGNHAP_H

#include <QDialog>

namespace Ui {
class dangnhap;
}

class dangnhap : public QDialog
{
    Q_OBJECT

public:
    explicit dangnhap(QWidget *parent = 0);
    ~dangnhap();

private:
    Ui::dangnhap *ui;
};

#endif // DANGNHAP_H
