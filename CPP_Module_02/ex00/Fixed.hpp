#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

class Fixed
{
	private:
		int fixedNum;
		static const int fractionalBits = 8;
	public:
		Fixed();
		Fixed(const Fixed &other); // fixed'in adresini other'a veriyor
		~Fixed();
		Fixed	&operator=(const Fixed &other);
		int		getRawBits(void) const;
		void	setRawBits(int const fixedNum);
};