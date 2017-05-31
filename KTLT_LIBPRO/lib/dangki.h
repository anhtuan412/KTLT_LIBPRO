#ifndef DANGKI_H
#define DANGKI_H

#include <QDialog>

namespace Ui {
class dangki;
}

class dangki : public QDialog
{
    Q_OBJECT

public:
    explicit dangki(QWidget *parent = 0);
    ~dangki();

private:
    Ui::dangki *ui;
};

#endif // DANGKI_H
