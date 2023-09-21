#include "Fixed.hpp"

Fixed::Fixed() 
{
    fixedNum = 0;
    cout << "Default constructor called" << endl;
}

Fixed::Fixed(const Fixed &other)
{
    cout << "Copy constructor called" << endl;
    *this = other;
}

Fixed::Fixed(const int value)
{
    cout << "Int constructor called" << endl;
    fixedNum = value << fractionalBits;
}

Fixed::Fixed(const float value)
{
    cout << "Float constructor called" << endl;
    fixedNum = roundf(value * (1 << fractionalBits));
}

Fixed::~Fixed()
{
    cout << "Destructor called" << endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    cout << "Copy assignment operator called" << endl;
    
    if (this != &other)
        fixedNum = other.getRawBits();
    return *this;
}

int Fixed::getRawBits() const
{
    return fixedNum;
}

void Fixed::setRawBits(int const raw)
{
    fixedNum = raw;
}

float Fixed::toFloat() const
{
    return (float)fixedNum / (1 << fractionalBits);
}

int Fixed::toInt() const
{
    return fixedNum >> fractionalBits;
}

ostream &operator<<(ostream &os, const Fixed &fixed)
{
    os << fixed.toFloat();
    return os;
}