/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:13:11 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/18 16:00:21 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	this->_type = "\033[1;33mWrongCat\033[1;0m";
	std::cout << "\033[1;33mWrongCat\033[1;0m🐈 default Constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & cpy) : WrongAnimal(cpy) {
	this->_type = cpy.getType();
	std::cout << "\033[1;33mWrongCat\033[1;0m🐈 copy Constructor called" << std::endl;
}



WrongCat::~WrongCat() {
	std::cout << "\033[1;33mWrongCat\033[1;0m🐈 default Destructor called" << std::endl;
}



WrongCat & WrongCat::operator=(WrongCat const & cpy) {
	this->_type = cpy.getType();
	return (*this);
}



std::string	WrongCat::getType() const {
	return (this->_type);
}

void		WrongCat::makeSound() const {
	std::cout << "🐈\033[1;33mMEOW MEOW N***G\033[1;0m" << std::endl;
}



std::ostream & operator<<(std::ostream & out, WrongCat const & hrs) {
	out << hrs.getType();
	return (out);
}
