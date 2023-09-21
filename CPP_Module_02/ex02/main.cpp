#include "Fixed.hpp"

int main(void)
{
    Fixed a(10);
    Fixed c(5);
    Fixed const b(Fixed(5.05f) * Fixed(2));

    bool val = a < b;

    Fixed div =  a / c ;
    Fixed toplam = a + c;

    std::cout << val << std::endl;
    std::cout << div << std::endl;
    std::cout << toplam << std::endl;




    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;



    std::cout << b << std::endl;

    std::cout << Fixed::max(a, b) << std::endl;

    return (0);
}