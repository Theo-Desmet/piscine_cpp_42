#include "Fixed.hpp"

#include <iostream>

int main(void) {
	Fixed a;
	Fixed b( a );
	Fixed c;

//	c.setRawBits(1);
//	std::cout << c.getRawBits() << std::endl;
	c = b;
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	
	return (0);
}
