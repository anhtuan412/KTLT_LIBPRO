#include "dangki.h"
#include "ui_dangki.h"

dangki::dangki(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dangki)
{
    ui->setupUi(this);
}

dangki::~dangki()
{
    delete ui;
}
