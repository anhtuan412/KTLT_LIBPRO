/********************************************************************************
** Form generated from reading UI file 'dangnhap.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DANGNHAP_H
#define UI_DANGNHAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dangnhap
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *dangnhap)
    {
        if (dangnhap->objectName().isEmpty())
            dangnhap->setObjectName(QStringLiteral("dangnhap"));
        dangnhap->resize(763, 511);
        groupBox = new QGroupBox(dangnhap);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(180, 190, 371, 221));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(32, 52, 86, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(32, 83, 52, 16));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(130, 50, 137, 22));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 80, 137, 22));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 120, 93, 28));

        retranslateUi(dangnhap);

        QMetaObject::connectSlotsByName(dangnhap);
    } // setupUi

    void retranslateUi(QDialog *dangnhap)
    {
        dangnhap->setWindowTitle(QApplication::translate("dangnhap", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("dangnhap", "\304\220\304\203ng nh\341\272\255p", Q_NULLPTR));
        label->setText(QApplication::translate("dangnhap", "T\303\252n \304\221\304\203ng nh\341\272\255p", Q_NULLPTR));
        label_2->setText(QApplication::translate("dangnhap", "M\341\272\255t kh\341\272\251u", Q_NULLPTR));
        pushButton->setText(QApplication::translate("dangnhap", "\304\220\304\203ng nh\341\272\255p", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dangnhap: public Ui_dangnhap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DANGNHAP_H
