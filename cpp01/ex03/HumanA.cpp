/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:14:15 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/07 10:48:09 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _name(name), _weapon(weapon) {}

HumanA::~HumanA( void ) {}

std::string HumanA::getName( void ) const{
	return (this->_name);
}

void	HumanA::attack ( void ) const{
	std::cout << getName() << " attacks with their ";
	std::cout << this->_weapon.getType() << std::endl;
}
