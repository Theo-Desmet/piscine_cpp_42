/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:13:11 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/18 15:52:43 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"

Animal::Animal() : _type("\033[1;31mAnimal\033[1;0m") {
	std::cout << "\033[1;31mAnimal\033[1;0m default Constructor called" << std::endl;
}

Animal::Animal(Animal const & cpy) : _type(cpy.getType()) {
	std::cout << "\033[1;31mAnimal\033[1;0m copy Constructor called" << std::endl;
}



Animal::~Animal() {
	std::cout << "\033[1;31mAnimal\033[1;0m default Destructor called" << std::endl;
}



Animal & Animal::operator=(Animal const & cpy) {
	this->_type = cpy.getType();
	std::cout << this->_type << "become" << cpy.getType() << "by assignation" << std::endl;
	return (*this);
}



std::string	Animal::getType() const {
	return (this->_type);
}

void	Animal::makeSound() const {
	std::cout << "\033[1;31mmake some song...maybe\033[1;0m" << std::endl;
	return ;
}



std::ostream & operator<<(std::ostream & out, Animal const & hrs) {
	out << hrs.getType();
	return (out);
}
