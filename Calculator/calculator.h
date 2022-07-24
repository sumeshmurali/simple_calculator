#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <string>

const int kMaxHistorySize = 100;

class Calculator
{
public:
    // set or update operator
    void set_operator(char operator_);
    // get operator
    char get_operator();
    // set left operand value
    void set_l_val(double left_value_);
    // get left operand value
    double l_val();
    // set right operand value
    void set_r_val(double right_value_);
    // get right operand value
    double r_val();
    // calculates the results ( l_val_ operator_ r_val_)
    double calculate();
    // reset calculator
    void reset();
    // reset calculator with history cleared
    void resetAll();
    // remove result from history
    double popHistory(int in_index_);
    // add result to history
    void pushHistory(double in_value_);

private:
    char operator_;
    double l_val_, r_val_;
    double history_[kMaxHistorySize];
    int history_next_slot_ = 0;
};


#endif
