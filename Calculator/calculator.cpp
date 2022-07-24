#include "calculator.h"


void Calculator::set_operator(char in_operator_ = '\0')
{
    operator_ = in_operator_;
}

char Calculator::get_operator()
{
    return operator_;
}

void Calculator::set_l_val(double left_value_)
{
    l_val_ = left_value_;
}

double Calculator::l_val()
{
    return l_val_;
}

void Calculator::set_r_val(double right_value_)
{
    r_val_ = right_value_;
}

double Calculator::r_val()
{
    return r_val_;
}

double Calculator::calculate()
{
    double result = 0;

    if (!operator_ || operator_ == '\0')
    {
        std::cout << "Called Calculator::calculate with invalid operator" << std::endl;
        return 0;
    }
    switch (operator_)
    {
    case '+':
        result = l_val() + r_val();
        break;
    case '-':
        result = l_val() - r_val();
        break;
    case '*':
    case 'x':
    case 'X':
        result = l_val() * r_val();
        break;
    case '/':
        result = l_val() / r_val();
        break;
    default:
        std::cout << "Unsupported operator found :: "<< operator_ << std::endl;
        break;
    }
    pushHistory(result);
    return result;
}

void Calculator::pushHistory(double in_value_) {
    if ( history_next_slot_ >= kMaxHistorySize ) {
        std::cout << "Pushing failed due to history full" << std::endl;
        return;
    }
    history_[history_next_slot_] = in_value_;
    history_next_slot_++;
}

double Calculator::popHistory(int in_index_ = -1) {
    if (history_next_slot_ <= 0) {
        // there is no history yet
        return 0;
    }
    return history_[--history_next_slot_];
}

void Calculator::reset() {
    set_l_val(0);
    set_r_val(0);
    set_operator();
}

void Calculator::resetAll() {
    reset();
}
