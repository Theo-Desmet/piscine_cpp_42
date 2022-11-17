/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 08:54:49 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/17 15:02:16 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
		this->_hit_points = 100;
		this->_energy_point = 50;
		this->_attack_damage = 20;
		std::cout << "ScavTrap named " << this->_name;
		std::cout << " created with default constructor" << std::endl;
		return ;
	}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
		this->_hit_points = 100;
		this->_energy_point = 50;
		this->_attack_damage = 20;
		std::cout << "ScavTrap named " << this->_name;
		std::cout << " created with string constructor" << std::endl;
		return ;
	}

ScavTrap::ScavTrap( ScavTrap const & cpy ) : ClapTrap(cpy) {
		std::cout << "ScavTrap named " << this->_name;
		std::cout << " created with constructor by copy" << std::endl;
		return ;
	}



ScavTrap::~ScavTrap() {
		std::cout << "ScavTrap named " << this->_name
			<< " called destructor" << std::endl;
		return ;
}



ScavTrap &	ScavTrap::operator=(ScavTrap const & cpy) {
	std::cout << "ScavTrap named " << this->_name
		<< " become "<< cpy.getName()
		<< " by copy by assignation" << std::endl;
	this->_name = cpy.getName();
	this->_energy_point = cpy.getEnergy();
	this->_attack_damage = cpy.getDamage();
	return (*this);
}



void	ScavTrap::attack(std::string const & target) {
	if (target.empty()) {
		std::cout << "target not found" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << " : ";
	if (this->_energy_point <= 0) {
		std::cout << "attacks abort, no energy" << std::endl;
		return ;
	}
	std::cout << target << " take "
		<< this->_attack_damage << " points of damage" << std::endl;
	this->_energy_point--;
	return ;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap pass in guardGate state" <<std::endl;
}


std::ostream &	operator<<(std::ostream & out, ScavTrap const & rhs) {
	out << "name " << rhs.getName()
		<< ", hp=" << rhs.getHitPoints()
		<< ", energy=" << rhs.getEnergy()
		<< ", damage=" << rhs.getDamage();
	return (out);
}
