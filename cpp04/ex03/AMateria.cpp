/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 08:16:54 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/23 13:21:00 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ICharacter.hpp"
#include "AMateria.hpp"

AMateria::AMateria() : _type("Materia Default") {}

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria(AMateria const & cpy) : _type(cpy.getType()) {}



AMateria::~AMateria() {}



AMateria & AMateria::operator=(AMateria const & cpy) {
	this->_type = cpy._type;
	return (*this);
}



std::string const & AMateria::getType() const {
	return (this->_type);
}



void	AMateria::use(ICharacter & target) {
	(void)target;
}
