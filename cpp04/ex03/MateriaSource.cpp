/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:43:43 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/24 08:34:50 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() {
	for (size_t i = 0; i < 4; i++) {
		this->_copy[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const & cpy) {
	for (size_t i = 0; i < 4; i++) {
		this->_copy[i] = (cpy.getCopy(i)) ? cpy.getCopy(i)->clone() : NULL ;
	}
}



MateriaSource::~MateriaSource() {
	for (size_t i = 0; i < 4; i++) {
		if (this->_copy[i]) {
			for (size_t j = i + 1; j < 4; j++) {
				if (this->_copy[i] == this->_copy[j]){
					this->_copy[j] = NULL;
				}
			}
			delete _copy[i];
		}
	}

}



MateriaSource & MateriaSource::operator=(MateriaSource const & cpy) {
	for (size_t i = 0; i < 4; i++) {
		this->_copy[i] = (cpy.getCopy(i)) ? cpy.getCopy(i)->clone() : NULL ;
	}
	return (*this);
}



AMateria * MateriaSource::getCopy(size_t i) const {
	return (this->_copy[i]);
}



void		MateriaSource::learnMateria(AMateria * source) {
	if (!source)
		return ;
	for (size_t i = 0; i < 4; i++) {
		if (!this->_copy[i]) {
			this->_copy[i] = source;
			return ;
		}
	}
	return ;
}

AMateria *	MateriaSource::createMateria(std::string const & type) {
	for (size_t i = 0; i < 4; i++) {
		if (this->_copy[i] && this->_copy[i]->getType() == type) {
			return (this->_copy[i]->clone());
		}
	}
	return (NULL);
}
