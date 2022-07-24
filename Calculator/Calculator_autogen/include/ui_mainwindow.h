/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout;
    QPushButton *AllClear;
    QPushButton *nu_1;
    QPushButton *nu_6;
    QPushButton *nu_5;
    QPushButton *Period;
    QPushButton *nu_7;
    QPushButton *Calculate;
    QPushButton *nu_4;
    QPushButton *nu_2;
    QPushButton *nu_8;
    QPushButton *nu_9;
    QPushButton *nu_0;
    QPushButton *nu_3;
    QPushButton *Divide;
    QPushButton *Multiply;
    QPushButton *Subtract;
    QPushButton *Add;
    QPushButton *Clear;
    QMenuBar *menubar;
    QMenu *menuSimple_Calculator;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 9, 781, 541));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(18);
        lineEdit->setFont(font);

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        AllClear = new QPushButton(verticalLayoutWidget);
        AllClear->setObjectName(QString::fromUtf8("AllClear"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(AllClear->sizePolicy().hasHeightForWidth());
        AllClear->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(AllClear, 0, 3, 1, 1);

        nu_1 = new QPushButton(verticalLayoutWidget);
        nu_1->setObjectName(QString::fromUtf8("nu_1"));
        sizePolicy2.setHeightForWidth(nu_1->sizePolicy().hasHeightForWidth());
        nu_1->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(nu_1, 2, 0, 1, 1);

        nu_6 = new QPushButton(verticalLayoutWidget);
        nu_6->setObjectName(QString::fromUtf8("nu_6"));
        sizePolicy2.setHeightForWidth(nu_6->sizePolicy().hasHeightForWidth());
        nu_6->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(nu_6, 1, 2, 1, 1);

        nu_5 = new QPushButton(verticalLayoutWidget);
        nu_5->setObjectName(QString::fromUtf8("nu_5"));
        sizePolicy2.setHeightForWidth(nu_5->sizePolicy().hasHeightForWidth());
        nu_5->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(nu_5, 1, 1, 1, 1);

        Period = new QPushButton(verticalLayoutWidget);
        Period->setObjectName(QString::fromUtf8("Period"));
        sizePolicy2.setHeightForWidth(Period->sizePolicy().hasHeightForWidth());
        Period->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(Period, 3, 1, 1, 1);

        nu_7 = new QPushButton(verticalLayoutWidget);
        nu_7->setObjectName(QString::fromUtf8("nu_7"));
        sizePolicy2.setHeightForWidth(nu_7->sizePolicy().hasHeightForWidth());
        nu_7->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(nu_7, 0, 0, 1, 1);

        Calculate = new QPushButton(verticalLayoutWidget);
        Calculate->setObjectName(QString::fromUtf8("Calculate"));
        sizePolicy2.setHeightForWidth(Calculate->sizePolicy().hasHeightForWidth());
        Calculate->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(Calculate, 3, 2, 1, 2);

        nu_4 = new QPushButton(verticalLayoutWidget);
        nu_4->setObjectName(QString::fromUtf8("nu_4"));
        sizePolicy2.setHeightForWidth(nu_4->sizePolicy().hasHeightForWidth());
        nu_4->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(nu_4, 1, 0, 1, 1);

        nu_2 = new QPushButton(verticalLayoutWidget);
        nu_2->setObjectName(QString::fromUtf8("nu_2"));
        sizePolicy2.setHeightForWidth(nu_2->sizePolicy().hasHeightForWidth());
        nu_2->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(nu_2, 2, 1, 1, 1);

        nu_8 = new QPushButton(verticalLayoutWidget);
        nu_8->setObjectName(QString::fromUtf8("nu_8"));
        sizePolicy2.setHeightForWidth(nu_8->sizePolicy().hasHeightForWidth());
        nu_8->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(nu_8, 0, 1, 1, 1);

        nu_9 = new QPushButton(verticalLayoutWidget);
        nu_9->setObjectName(QString::fromUtf8("nu_9"));
        sizePolicy2.setHeightForWidth(nu_9->sizePolicy().hasHeightForWidth());
        nu_9->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(nu_9, 0, 2, 1, 1);

        nu_0 = new QPushButton(verticalLayoutWidget);
        nu_0->setObjectName(QString::fromUtf8("nu_0"));
        sizePolicy2.setHeightForWidth(nu_0->sizePolicy().hasHeightForWidth());
        nu_0->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(nu_0, 3, 0, 1, 1);

        nu_3 = new QPushButton(verticalLayoutWidget);
        nu_3->setObjectName(QString::fromUtf8("nu_3"));
        sizePolicy2.setHeightForWidth(nu_3->sizePolicy().hasHeightForWidth());
        nu_3->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(nu_3, 2, 2, 1, 1);

        Divide = new QPushButton(verticalLayoutWidget);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        sizePolicy2.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(Divide, 0, 4, 1, 1);

        Multiply = new QPushButton(verticalLayoutWidget);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        sizePolicy2.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(Multiply, 1, 4, 1, 1);

        Subtract = new QPushButton(verticalLayoutWidget);
        Subtract->setObjectName(QString::fromUtf8("Subtract"));
        sizePolicy2.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(Subtract, 2, 4, 1, 1);

        Add = new QPushButton(verticalLayoutWidget);
        Add->setObjectName(QString::fromUtf8("Add"));
        sizePolicy2.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(Add, 3, 4, 1, 1);

        Clear = new QPushButton(verticalLayoutWidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        sizePolicy2.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(Clear, 1, 3, 2, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuSimple_Calculator = new QMenu(menubar);
        menuSimple_Calculator->setObjectName(QString::fromUtf8("menuSimple_Calculator"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuSimple_Calculator->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        AllClear->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        nu_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        nu_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        nu_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Period->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        nu_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Calculate->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        nu_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        nu_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        nu_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        nu_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        nu_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        nu_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        Multiply->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        Subtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        menuSimple_Calculator->setTitle(QCoreApplication::translate("MainWindow", "Simple Calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
