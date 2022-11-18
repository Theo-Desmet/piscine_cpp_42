/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:13:11 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/18 15:54:27 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->_type = "\033[1;34mDog\033[1;0m";
	std::cout << "\033[1;34mdog\033[1;0m🐕 default Constructor called" << std::endl;
}

Dog::Dog(Dog const & cpy) : Animal(cpy) {
	this->_type = cpy.getType();
	std::cout << "\033[1;34mdog\033[1;0m🐕 copy Constructor called" << std::endl;
}



Dog::~Dog() {
	std::cout << "\033[1;34mdog\033[1;0m🐕 default Destructor called" << std::endl;
}



Dog & Dog::operator=(Dog const & cpy) {
	this->_type = cpy.getType();
	std::cout << this->_type << "become" << cpy.getType() << "by assignation" << std::endl;
	return (*this);
}



std::string	Dog::getType() const {
	return (this->_type);
}

void	Dog::makeSound() const {
	std::cout << "🐕\033[1;34mWoaf Woaf\033[1;0m" << std::endl;
}



std::ostream & operator<<(std::ostream & out, Dog const & hrs) {
	out << hrs.getType();
	return (out);
}
