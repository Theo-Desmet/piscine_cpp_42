/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:16:47 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/07 10:34:05 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ) {}

Weapon::Weapon( std::string name ) : _type(name) {}

Weapon::~Weapon( void ) {}

std::string	const & Weapon::getType( void ) const{
	return (this->_type);
}

void		Weapon::setType( std::string type) {
	this->_type = type;
}
