#include "dangnhap.h"
#include "ui_dangnhap.h"

dangnhap::dangnhap(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dangnhap)
{
    ui->setupUi(this);
}

dangnhap::~dangnhap()
{
    delete ui;
}
