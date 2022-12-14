/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 09:31:49 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/23 12:05:25 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure const & cpy) : AMateria(cpy) {}



Cure::~Cure() {}



Cure &	Cure::operator=(Cure const & cpy) {
	this->_type = cpy.getType();
	return (*this);
}




Cure *	Cure::clone() const {
	return (new Cure(*this));
}

void	Cure::use(ICharacter & target) {
	std::cout << this->_type << "*  heals " << target.getName()
		<< "'s wounds *" << std::endl;
}
