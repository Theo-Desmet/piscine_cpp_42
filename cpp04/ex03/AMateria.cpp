/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 08:16:54 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/22 09:14:38 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ICharacter.hpp"
#include "AMateria.hpp"

AMateria::AMateria() : _type("Materia Default") {
	std::cout << "Create class AMateria" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type) {
	std::cout << "Create class AMateria" << std::endl;
}

AMateria::AMateria(AMateria const & cpy) : _type(cpy.getType()) {
	std::cout << "Create class AMateria" << std::endl;
}



AMateria::~AMateria() {
	std::cout << "call destructor of AMateria" << std::endl;
}



AMateria & AMateria::operator=(AMateria const & cpy) {
	this->_type = cpy._type;
	return (*this);
}



std::string const & AMateria::getType() const {
	return (this->_type);
}



void	AMateria::use(ICharacter & target) {
	std::cout << this->_type << ":* default use by "
		<< target.getName() << " *" << std::endl;
}
