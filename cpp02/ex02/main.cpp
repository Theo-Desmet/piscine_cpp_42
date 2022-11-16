#include "Fixed.hpp"

#include <iostream>

int main( void ) {
	Fixed a, c;
	Fixed b = 2;

	std::cout << "\033[1;33mtest incrementation :\033[1;0m"<< std::endl;
	std::cout << "a = 0 : a = " << a << std::endl;
	std::cout << "++a = 0.00390625 : a = " << ++a << std::endl;
	std::cout << "a = 0.00390625 : a = " << a << std::endl;
	std::cout << "a++ = 0.00390625 : a = " << a++ << std::endl;
	std::cout << "a = 0.0078125 : a = " << a << std::endl <<std::endl;

	std::cout << "--a = 0.00390625 : a = " << --a << std::endl;
	std::cout << "a = 0.00390625 : a = " << a << std::endl;
	std::cout << "a-- = 0.00390625 : a = " << a-- << std::endl;
	std::cout << "a = 0 : a = " << a << std::endl << std::endl;

	std::cout << "++ ++a = 0.0078125 : a = " << ++ ++a << std::endl;
	std::cout << "a = 0.0078125 : a = " << a << std::endl;
	std::cout << "-- --a = 0 : a = " << -- --a << std::endl;
	std::cout << "a = 0 : a = " << a << std::endl << std::endl;



	std::cout << "\033[1;33mtest calcul :\033[1;0m"<< std::endl;
	std::cout << "a = 0 : a = " << a << std::endl;
	a = a + 1;
	std::cout << "a = a + 1 = 1 : a = " << a << std::endl;
	a = a * 2;
	std::cout << "a = a * 2 = 2 : a = " << a << std::endl;
	a = a / 2;
	std::cout << "a = a * 2 = 1 : a = " << a << std::endl;
	a = a - 1;
	std::cout << "a = a * 2 = 0 : a = " << a << std::endl << std::endl;

	std::cout << "b = 2 : b = " << b << std::endl;
	b = b + 2 + b;
	std::cout << "b = b + 2 + b = 6 : b = " << b << std::endl;
	b = b * 2 * b;
	std::cout << "b = b * 2 * b = 72 : b = " << b << std::endl;
	b = b / 2 / b;
	std::cout << "b = b / 2 / b = 0.5 : b = " << b << std::endl;
	b = b - 2 - b;
	std::cout << "b = b - 2 - b = - 2 : b = " << b << std::endl;
	b = b * 2 * b / b + b - b;
	std::cout << "b = b * 2 * b / b + b - b = -4 : b = " << b << std::endl << std::endl;



	c = b;
	std::cout << "\033[1;33mtest comp :\033[1;0m"<< std::endl;
	std::cout << "a = 0, b = -4, c = -4" << std::endl;
	if (a < b) {
		std::cout << "a < b : TRUE"<< std::endl;
	} else {
		std::cout << "a < b : FALSE"<< std::endl;
	}
	if (a > b) {
		std::cout << "a > b : TRUE"<< std::endl;
	} else {
		std::cout << "a > b : FALSE"<< std::endl;
	}
	if (a <= b) {
		std::cout << "a <= b : TRUE"<< std::endl;
	} else {
		std::cout << "a <= b : FALSE"<< std::endl;
	}
	if (a >= b) {
		std::cout << "a >= b : TRUE"<< std::endl;
	} else {
		std::cout << "a >= b : FALSE"<< std::endl;
	}
	if (a != b) {
		std::cout << "a != b : TRUE"<< std::endl;
	} else {
		std::cout << "a != b : FALSE"<< std::endl;
	}
	if (a == b) {
		std::cout << "a == b : TRUE"<< std::endl << std::endl;
	} else {
		std::cout << "a == b : FALSE"<< std::endl << std::endl;
	}

	if (b >= c) {
		std::cout << "b >= c : TRUE"<< std::endl;
	} else {
		std::cout << "b >= c : FALSE"<< std::endl;
	}
	if (b <= c) {
		std::cout << "b <= c : TRUE"<< std::endl;
	} else {
		std::cout << "b <= c : FALSE"<< std::endl;
	}
	if (b == c) {
		std::cout << "b == c : TRUE"<< std::endl << std::endl;
	} else {
		std::cout << "b == c : FALSE"<< std::endl << std::endl;
	}

	std::cout << "\033[1;33mtest min/max :\033[1;0m"<< std::endl;
	std::cout << "a = 0, b = -4, c = -4" << std::endl;
	std::cout << "min(a, b) = -4 : min =" << Fixed::min(a, b) << std::endl;
	std::cout << "max(a, b) = 0 : max =" << Fixed::max(a, b) << std::endl;
	std::cout << "min(b, c) = -4 : min =" << Fixed::min(b, c) << std::endl;
	std::cout << "max(b, c) = -4 : max =" << Fixed::max(b, c) << std::endl;
	return 0;
}
