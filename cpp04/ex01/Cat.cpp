/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:13:11 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/21 14:04:12 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal(), _brain(new Brain()) {
	this->_type = "\033[1;33mcat\033[1;0m";
	std::cout << "\033[1;33mcat\033[1;0m🐈 default Constructor called" << std::endl;
}

Cat::Cat(Cat const & cpy) : Animal(cpy), _brain(new Brain(*cpy._brain)){
	this->_type = cpy.getType();
	std::cout << "\033[1;33mcat\033[1;0m🐈 copy Constructor called" << std::endl;
}



Cat::~Cat() {
	delete _brain;
	std::cout << "\033[1;33mcat\033[1;0m🐈 default Destructor called" << std::endl;
}



Cat & Cat::operator=(Cat const & cpy) {
	this->_type = cpy.getType();
	this->_brain = new Brain(*cpy._brain);
	std::cout << this->_type << "become" << cpy.getType() << "by assignation" << std::endl;
	return (*this);
}



std::string	Cat::getType() const {
	return (this->_type);
}

Brain &	Cat::getBrain() const {
	return (*this->_brain);
}

void		Cat::makeSound() const {
	std::cout << "🐈\033[1;33mMeow meow\033[1;0m" << std::endl;
}



std::ostream & operator<<(std::ostream & out, Cat const & hrs) {
	out << hrs.getType();
	return (out);
}
