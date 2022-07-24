#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateResultWindow(std::string data){
    ui->lineEdit->setText(QString::fromStdString(data));
}



void MainWindow::on_Calculate_clicked()
{
    if (calculator.l_val() && !temp_value_holder_.empty()){
        calculator.set_r_val(std::stod(temp_value_holder_));
    }
    double result = calculator.calculate();
    if (int(result) == result)
    {
        temp_value_holder_ = std::to_string(int(result));

    }
    else {
        temp_value_holder_ = std::to_string(result);
    }
    updateResultWindow(temp_value_holder_);
}


void MainWindow::on_nu_0_clicked()
{
    temp_value_holder_.append("0");
    updateResultWindow(temp_value_holder_);
}


void MainWindow::on_nu_1_clicked()
{
    temp_value_holder_.append("1");
    updateResultWindow(temp_value_holder_);
}


void MainWindow::on_nu_2_clicked()
{
    temp_value_holder_.append("2");
    updateResultWindow(temp_value_holder_);

}


void MainWindow::on_nu_3_clicked()
{
    temp_value_holder_.append("3");
    updateResultWindow(temp_value_holder_);
}


void MainWindow::on_nu_4_clicked()
{
    temp_value_holder_.append("4");
    updateResultWindow(temp_value_holder_);

}


void MainWindow::on_nu_5_clicked()
{
    temp_value_holder_.append("5");
    updateResultWindow(temp_value_holder_);
}


void MainWindow::on_nu_6_clicked()
{
    temp_value_holder_.append("6");
    updateResultWindow(temp_value_holder_);
}


void MainWindow::on_nu_7_clicked()
{
    temp_value_holder_.append("7");
    updateResultWindow(temp_value_holder_);
}


void MainWindow::on_nu_8_clicked()
{
    temp_value_holder_.append("8");
    updateResultWindow(temp_value_holder_);
}


void MainWindow::on_nu_9_clicked()
{
    temp_value_holder_.append("9");
    updateResultWindow(temp_value_holder_);
}


void MainWindow::on_Period_clicked()
{
    if (temp_value_holder_.find("."))
        temp_value_holder_.append(".");
    updateResultWindow(temp_value_holder_);
}


void MainWindow::on_Clear_clicked()
{
    calculator.reset();
    temp_value_holder_.clear();
    updateResultWindow(temp_value_holder_);
}


void MainWindow::on_AllClear_clicked()
{
    calculator.resetAll();
    temp_value_holder_.clear();
    updateResultWindow(temp_value_holder_);
}


void MainWindow::on_Add_clicked()
{
    if (temp_value_holder_.empty()) {
        calculator.set_l_val(calculator.popHistory(0));
    }
    else {
        calculator.set_l_val(std::stod(temp_value_holder_));
        temp_value_holder_.clear();
    }
    calculator.set_operator('+');
    updateResultWindow(temp_value_holder_);
}


void MainWindow::on_Divide_clicked()
{
    if (temp_value_holder_.empty()) {
        calculator.set_l_val(calculator.popHistory(0));
    }
    else {
        calculator.set_l_val(std::stod(temp_value_holder_));
        temp_value_holder_.clear();
    }
    calculator.set_operator('/');
    updateResultWindow(temp_value_holder_);
}


void MainWindow::on_Multiply_clicked()
{
    if (temp_value_holder_.empty()) {
        calculator.set_l_val(calculator.popHistory(0));
    }
    else {
        calculator.set_l_val(std::stod(temp_value_holder_));
        temp_value_holder_.clear();
    }
    calculator.set_operator('*');
    updateResultWindow(temp_value_holder_);
}


void MainWindow::on_Subtract_clicked()
{
    if (temp_value_holder_.empty()) {
        calculator.set_l_val(calculator.popHistory(0));
    }
    else {
        calculator.set_l_val(std::stod(temp_value_holder_));
        temp_value_holder_.clear();
    }
    calculator.set_operator('-');
    updateResultWindow(temp_value_holder_);
}

