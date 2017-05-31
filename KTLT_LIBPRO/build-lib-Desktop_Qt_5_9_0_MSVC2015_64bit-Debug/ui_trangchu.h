/********************************************************************************
** Form generated from reading UI file 'trangchu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANGCHU_H
#define UI_TRANGCHU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_trangchu
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *timsach;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *trangchu)
    {
        if (trangchu->objectName().isEmpty())
            trangchu->setObjectName(QStringLiteral("trangchu"));
        trangchu->resize(958, 626);
        centralWidget = new QWidget(trangchu);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 30, 271, 141));
        label->setPixmap(QPixmap(QString::fromUtf8("../../thuvien.jpg")));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(50, 270, 311, 91));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 380, 291, 101));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(710, 430, 241, 80));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(480, 260, 421, 151));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 170, 881, 61));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);

        timsach = new QPushButton(widget);
        timsach->setObjectName(QStringLiteral("timsach"));

        horizontalLayout->addWidget(timsach);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        horizontalLayout->addWidget(pushButton_7);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(710, 0, 195, 30));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        trangchu->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(trangchu);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 958, 26));
        trangchu->setMenuBar(menuBar);
        mainToolBar = new QToolBar(trangchu);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        trangchu->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(trangchu);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        trangchu->setStatusBar(statusBar);

        retranslateUi(trangchu);

        QMetaObject::connectSlotsByName(trangchu);
    } // setupUi

    void retranslateUi(QMainWindow *trangchu)
    {
        trangchu->setWindowTitle(QApplication::translate("trangchu", "trangchu", Q_NULLPTR));
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("trangchu", "S\303\241ch m\306\260\341\273\243n nhi\341\273\201u nh\341\272\245t:", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("trangchu", "S\303\241ch m\341\273\233i:", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("trangchu", "S\341\273\221 l\306\260\341\273\243ng th\303\240nh vi\303\252n", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("trangchu", "Th\303\264ng b\303\241o m\341\273\233i", Q_NULLPTR));
        pushButton->setText(QApplication::translate("trangchu", "Trang ch\341\273\247", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("trangchu", "Gi\341\273\233i thi\341\273\207u", Q_NULLPTR));
        timsach->setText(QApplication::translate("trangchu", "T\303\254m s\303\241ch", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("trangchu", "M\306\260\341\273\243n-tr\341\272\243 s\303\241ch", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("trangchu", "H\341\273\227 tr\341\273\243", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("trangchu", "\304\220\304\203ng k\303\255", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("trangchu", "\304\220\304\203ng nh\341\272\255p", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class trangchu: public Ui_trangchu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANGCHU_H
