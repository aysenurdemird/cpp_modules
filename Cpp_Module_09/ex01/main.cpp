#include "RPN.hpp"
#include <string>
#include <iostream>

bool isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int main (int argc, char **argv)
{
    RPN rpn;
    int i = 0;
    if (argc != 2)
        return 0;
    while(argv[1][i])
    {
        if (!isspace(argv[1][i]))
        {
            if (isOperator(argv[1][i]))
                rpn.operate(argv[1][i]);
            else
            {
                std::string num_str(1, argv[1][i]);
                int number = std::stoi(num_str);
                rpn.push(number);
            }
        }
        i++;
    }
    std::cout << rpn.my_pop() << std::endl;
    return 0;
}