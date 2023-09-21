#include "Fixed.hpp"

Fixed::Fixed()
{
    fixedNum = 0;
    cout << "Default constructor called" << endl;
}

Fixed::~Fixed()
{
    cout << "Destructor called" << endl;
}

Fixed::Fixed(const Fixed &other)
{
    cout << "Copy constructor called" << endl;
    fixedNum = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
    cout << "Copy assigment operator called" << endl;
    this->fixedNum = other.getRawBits();
    return *this;
}

int Fixed::getRawBits() const
{
    cout << "getRawBits member function called" << endl;
    return (fixedNum);
}

void Fixed::setRawBits(const int fixedValue)
{
    cout << "setRawBits member function called" << endl;
    this->fixedNum = fixedValue;
}