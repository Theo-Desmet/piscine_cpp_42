/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:14:15 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/07 11:33:48 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB( std::string name) : _name(name) {
	this->_weapon = NULL;
}

HumanB::~HumanB( void ) {}

void	HumanB::setWeapon(Weapon & weapon) {
	this->_weapon = &weapon;
}

std::string HumanB::getName( void ) const{
	return (this->_name);
}

void	HumanB::attack ( void ) const{
	std::cout << getName() << " attacks with their ";
	if (!this->_weapon)
		std::cout << "hands" << std::endl;
	else
		std::cout << this->_weapon->getType() << std::endl;
}
