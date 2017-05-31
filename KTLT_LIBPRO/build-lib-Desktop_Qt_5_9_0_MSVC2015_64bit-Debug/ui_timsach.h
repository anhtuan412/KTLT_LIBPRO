/********************************************************************************
** Form generated from reading UI file 'timsach.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMSACH_H
#define UI_TIMSACH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_timsach
{
public:
    QGroupBox *groupBox;
    QLabel *label_6;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_12;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_7;

    void setupUi(QDialog *timsach)
    {
        if (timsach->objectName().isEmpty())
            timsach->setObjectName(QStringLiteral("timsach"));
        timsach->resize(992, 531);
        groupBox = new QGroupBox(timsach);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 20, 961, 501));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 60, 55, 16));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 50, 451, 151));
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 30, 141, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout->addWidget(label_10);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout->addWidget(label_9);

        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout->addWidget(label_11);

        label_12 = new QLabel(verticalLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout->addWidget(label_12);

        verticalLayoutWidget_2 = new QWidget(groupBox_2);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(180, 30, 261, 111));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout_2->addWidget(lineEdit_4);

        lineEdit = new QLineEdit(verticalLayoutWidget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(40, 240, 901, 241));
        horizontalLayoutWidget = new QWidget(groupBox_3);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 30, 881, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        label_8 = new QLabel(horizontalLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout->addWidget(label_8);

        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        label_7 = new QLabel(horizontalLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout->addWidget(label_7);


        retranslateUi(timsach);

        QMetaObject::connectSlotsByName(timsach);
    } // setupUi

    void retranslateUi(QDialog *timsach)
    {
        timsach->setWindowTitle(QApplication::translate("timsach", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("timsach", "T\303\254m s\303\241ch", Q_NULLPTR));
        label_6->setText(QString());
        groupBox_2->setTitle(QApplication::translate("timsach", "M\341\273\245c t\303\254m s\303\241ch", Q_NULLPTR));
        label_10->setText(QApplication::translate("timsach", "T\303\254m theo ID s\303\241ch:", Q_NULLPTR));
        label_9->setText(QApplication::translate("timsach", "T\303\254m theo t\303\252n s\303\241ch:", Q_NULLPTR));
        label_11->setText(QApplication::translate("timsach", "T\303\254m theo t\303\252n t\303\241c gi\341\272\243:", Q_NULLPTR));
        label_12->setText(QApplication::translate("timsach", "T\303\254m theo th\341\273\203 lo\341\272\241i:", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("timsach", "Th\303\264ng tin s\303\241ch", Q_NULLPTR));
        label->setText(QApplication::translate("timsach", "ID s\303\241ch", Q_NULLPTR));
        label_2->setText(QApplication::translate("timsach", "T\303\252n s\303\241ch", Q_NULLPTR));
        label_3->setText(QApplication::translate("timsach", "T\303\241c gi\341\272\243", Q_NULLPTR));
        label_4->setText(QApplication::translate("timsach", "N\304\203m xu\341\272\245t b\341\272\243n", Q_NULLPTR));
        label_8->setText(QApplication::translate("timsach", "Th\341\273\203 lo\341\272\241i", Q_NULLPTR));
        label_5->setText(QApplication::translate("timsach", "S\341\273\221 l\306\260\341\273\243ng", Q_NULLPTR));
        label_7->setText(QApplication::translate("timsach", "T\303\254nh tr\341\272\241ng", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class timsach: public Ui_timsach {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMSACH_H
