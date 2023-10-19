#include "RPN.hpp"

RPN::RPN() {}
RPN::RPN(RPN &other)
{
    this->stack = other.stack;
}
RPN& RPN::operator=(const RPN &oth)
{
    this->stack = oth.stack;
    return (*this);
}
RPN::~RPN() {}

void RPN::push(int num)
{
    this->stack.push(num);
}

int RPN::my_pop(){
    if (this->stack.empty())
        throw std::runtime_error("There is no element on stack.");
    int number = this->stack.top();
    this->stack.pop();
    return number;
}

void RPN::operate(char ch)
{
    int a = this->my_pop();
    int b = this->my_pop();
    int c;
    switch(ch) {
        case '+':
            c = b + a;
            break;
        case '-':
            c = b - a;
            break;
        case '*':
            c = b * a;
            break;
        case '/':
            c = b / a;
            break;
    }
    this->stack.push(c);
}