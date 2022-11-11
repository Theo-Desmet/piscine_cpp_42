#include <iostream>
#include <cmath>

#include "Fixed.hpp"


Fixed::Fixed() : _number(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const nb ) {
	std::cout << "Int constructor called" << std::endl;
	this->_number = nb << this->_width;
	return ;
}

Fixed::Fixed( float const nb ) {
	std::cout << "Float constructor called" << std::endl;
	this->_number = roundf(nb * float((1 << this->_width)));
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

Fixed &	Fixed::operator=(Fixed const & rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_number  = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const{
	return (this->_number);
}

int		Fixed::getWidth() const{
	return (this->_width);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_number = raw;
	return ;
}

int		Fixed::toInt() const{
	return (this->_number >> Fixed::getWidth());
}

float		Fixed::toFloat() const{
	return ((float)this->_number / (float)(1 << this->_width));
}

std::ostream & operator<<(std::ostream & out, Fixed const & rhs) {
	out << rhs.toFloat();
	return (out);
}
