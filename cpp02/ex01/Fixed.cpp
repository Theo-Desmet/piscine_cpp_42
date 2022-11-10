#include <iostream>
#include <cmath>

#include "Fixed.hpp"


Fixed::Fixed() : _number(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const nb ) : _number(nb << Fixed::getWidth()){
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( float const nb ) : _number(static_cast<int>(roundf(nb)) << Fixed::getWidth()) {
	std::cout << "Float constructor called" << std::endl;
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

int	Fixed::getWidth() const{
	return (this->_width);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_number = raw;
	return ;
}
