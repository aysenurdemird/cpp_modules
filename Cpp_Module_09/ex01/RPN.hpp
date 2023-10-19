#ifndef RPN_HPP
#define RPN_HPP
#include <stack>

class RPN {
    private:
        std::stack<int> stack;
    public:
        RPN();
        RPN(RPN &other);
        RPN &operator=(const RPN &oth);
        ~RPN();
        void push(int num);
        int my_pop();
        void operate(char ch);
};

#endif