/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:13:11 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/21 14:07:44 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal(), _brain(new Brain()) {
	this->_type = "\033[1;34mDog\033[1;0m";
	std::cout << "\033[1;34mdog\033[1;0m🐕 default Constructor called" << std::endl;
}

Dog::Dog(Dog const & cpy) : Animal(cpy), _brain(new Brain(*cpy._brain)) {
	this->_type = cpy.getType();
	std::cout << "\033[1;34mdog\033[1;0m🐕 copy Constructor called" << std::endl;
}



Dog::~Dog() {
	delete this->_brain;
	std::cout << "\033[1;34mdog\033[1;0m🐕 default Destructor called" << std::endl;
}



Dog & Dog::operator=(Dog const & cpy) {
	this->_type = cpy.getType();
	this->_brain = new Brain(*cpy._brain);
	std::cout << this->_type << "become" << cpy.getType() << "by assignation" << std::endl;
	return (*this);
}



std::string	Dog::getType() const {
	return (this->_type);
}

Brain &		Dog::getBrain() const {
	return (*this->_brain);
}



void	Dog::makeSound() const {
	std::cout << "🐕\033[1;34mWoaf Woaf\033[1;0m" << std::endl;
}



std::ostream & operator<<(std::ostream & out, Dog const & hrs) {
	out << hrs.getType();
	return (out);
}
