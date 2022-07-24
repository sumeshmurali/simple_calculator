#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include "calculator.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Calculator calculator;
    std::string temp_value_holder_;

private slots:
    void on_Calculate_clicked();

    void on_nu_0_clicked();

    void on_nu_1_clicked();

    void on_nu_2_clicked();

    void on_nu_3_clicked();

    void on_nu_4_clicked();

    void on_nu_5_clicked();

    void on_nu_6_clicked();

    void on_nu_7_clicked();

    void on_nu_8_clicked();

    void on_nu_9_clicked();

    void on_Period_clicked();


    void on_Clear_clicked();

    void on_AllClear_clicked();

    void on_Add_clicked();

    void on_Divide_clicked();

    void on_Multiply_clicked();

    void on_Subtract_clicked();

private:
    Ui::MainWindow *ui;
    void updateResultWindow(std::string data);

};
#endif // MAINWINDOW_H
