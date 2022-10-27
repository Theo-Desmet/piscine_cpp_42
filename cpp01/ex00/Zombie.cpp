/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:23:32 by tdesmet           #+#    #+#             */
/*   Updated: 2022/10/27 10:31:50 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

Zombie::Zombie( std::string name ) {
	setName(name);
}

Zombie::~Zombie() {
	std::cout << getName() << " is destroy" << std::endl;
}

void		Zombie::announce( void ) {
	std::cout << getName() <<": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void		Zombie::setName(std::string name) {
	this->_name = name;
}

std::string	Zombie::getName( void ) const{
	return (this->_name);
}
