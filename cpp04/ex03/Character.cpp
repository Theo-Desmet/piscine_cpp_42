/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 09:20:39 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/24 09:09:05 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string const name) : _name(name) {
	for (size_t i = 0; i < 4; i++) {
		_inv[i] = NULL;
	}
}

Character::Character() : _name("default_name") {
	for (size_t i = 0; i < 4; i++) {
		_inv[i] = NULL;
	}
}

Character::Character(Character const & cpy) : _name(cpy.getName()) {
	for (size_t i = 0; i < 4; i++) {
		_inv[i] = (cpy._inv[i]) ? cpy._inv[i]->clone() : NULL;
	}
}



Character::~Character() {
	for (size_t i = 0; i < 4; i++) {
		if (this->_inv[i]) {
			for (size_t j = i + 1; j < 4; j++) {
				if (this->_inv[i] == this->_inv[j]){
					this->_inv[j] = NULL;
				}
			}
			delete _inv[i];
		}
	}
}


Character &	Character::operator=(Character const & cpy) {
	this->_name = cpy.getName();
	for (size_t i = 0; i < 4; i++) {
		this->_inv[i] = (cpy._inv[i]) ? cpy._inv[i]->clone() : NULL;
	}
	return (*this);
}



std::string const & Character::getName(void) const {
	return (this->_name);
}



void Character::equip(AMateria * m) {
	if (!m)
		return;
	for (size_t i = 0; i < 4; i++) {
		if (!this->_inv[i]) {
			this->_inv[i] = m;
			break;
		}
	}
	return ;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3)
		this->_inv[idx] = NULL;
	return ;
}

void Character::use(int idx, ICharacter & target) {
	if (idx >= 0 && idx <= 3 && this->_inv[idx])
		this->_inv[idx]->use(target);
	return ;
}
