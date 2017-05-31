#ifndef TIMSACH_H
#define TIMSACH_H

#include <QDialog>

namespace Ui {
class timsach;
}

class timsach : public QDialog
{
    Q_OBJECT

public:
    explicit timsach(QWidget *parent = 0);
    ~timsach();

private:
    Ui::timsach *ui;
};

#endif // TIMSACH_H
