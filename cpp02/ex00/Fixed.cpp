#include <iostream>

#include "Fixed.hpp"


Fixed::Fixed() : _number(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & fixed) {
	std::cout << "copy constructor called" << std::endl;
	this->_number = fixed.getRawBits();
	return ;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_number  = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_number);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_number = raw;
	return ;
}
