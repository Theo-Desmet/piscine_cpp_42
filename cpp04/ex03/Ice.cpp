/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 09:31:49 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/22 11:22:54 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"

Ice::Ice() : AMateria("\033[1;34mice\033[1;0m") {}

Ice::Ice(Ice const & cpy) : AMateria(cpy) {}



Ice::~Ice() {}



Ice &	Ice::operator=(Ice const & cpy) {
	this->_type = cpy.getType;
}




Ice *	Ice::clone() const {
	return (new Ice(*this));
}

void	Ice::use(ICharacter & target) {
	std::cout << this->_type << "*  shoot an ice bolt at "
		<< target.getName() << " *" << std::endl;
}
