#ifndef TRANGCHU_H
#define TRANGCHU_H

#include <QMainWindow>
#include"dangki.h"
#include"dangnhap.h"
#include"timsach.h"
namespace Ui {
class trangchu;
}

class trangchu : public QMainWindow
{
    Q_OBJECT

public:
    explicit trangchu(QWidget *parent = 0);
    ~trangchu();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_timsach_clicked();

private:
    Ui::trangchu *ui;
    dangki *dang_ki;
    dangnhap *dang_nhap;
    timsach *tim_sach;
};

#endif // TRANGCHU_H
