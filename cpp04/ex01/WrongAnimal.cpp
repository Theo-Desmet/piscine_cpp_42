/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:13:11 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/18 15:51:55 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("\033[1;31mWrongAnimal\033[1;0m") {
	std::cout << "\033[1;31mWrongAnimal\033[1;0m default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & cpy) : _type(cpy.getType()) {
	std::cout << "\033[1;31mWrongAnimal\033[1;0m copy Constructor called" << std::endl;
}



WrongAnimal::~WrongAnimal() {
	std::cout << "\033[1;31mWrongAnimal\033[1;0m default Destructor called" << std::endl;
}



WrongAnimal & WrongAnimal::operator=(WrongAnimal const & cpy) {
	this->_type = cpy.getType();
	return (*this);
}



std::string	WrongAnimal::getType() const {
	return (this->_type);
}

void	WrongAnimal::makeSound() const {
	std::cout << "\033[1;31mmake some song...maybe\033[1;0m" << std::endl;
	return ;
}



std::ostream & operator<<(std::ostream & out, WrongAnimal const & hrs) {
	out << hrs.getType();
	return (out);
}
