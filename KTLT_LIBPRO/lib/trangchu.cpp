#include "trangchu.h"
#include "ui_trangchu.h"

trangchu::trangchu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::trangchu)
{
    ui->setupUi(this);
}

trangchu::~trangchu()
{
    delete ui;
}

void trangchu::on_pushButton_2_clicked()
{
    dang_ki=new dangki(this);
    dang_ki->show();
}

void trangchu::on_pushButton_3_clicked()
{
    dang_nhap=new dangnhap(this);
    dang_nhap->show();
}

void trangchu::on_timsach_clicked()
{
    tim_sach=new timsach(this);
    tim_sach->show();
}
