#include "timsach.h"
#include "ui_timsach.h"

timsach::timsach(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::timsach)
{
    ui->setupUi(this);
}

timsach::~timsach()
{
    delete ui;
}
