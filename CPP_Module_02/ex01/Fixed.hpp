#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::ostream;

class Fixed
{
private:
    int fixedNum;
    static const int fractionalBits = 8;

public:
    Fixed(void);
    Fixed(const Fixed &other);
    Fixed(const int value);
    Fixed(const float value);
    ~Fixed(void);

    Fixed &operator=(const Fixed &other);

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;
};

ostream &operator<<(ostream &os, const Fixed &fixed);

#endif