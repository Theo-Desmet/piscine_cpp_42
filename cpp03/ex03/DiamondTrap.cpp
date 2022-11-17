/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 08:54:49 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/17 14:21:56 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :
	ClapTrap("default_clap_name"), ScavTrap(), FragTrap(), _name("Diamond"){
		this->_hit_points = FragTrap::getHitPoints();
		this->_energy_point = ScavTrap::getEnergy();
		this->_attack_damage = FragTrap::getDamage();
		std::cout << "DiamondTrap named " << this->_name;
		std::cout << " created with default constructor" << std::endl;
		return ;
	}

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name + "_Clap_name"), ScavTrap(), FragTrap(), _name(name) {
		this->_hit_points = FragTrap::getHitPoints();
		this->_energy_point = ScavTrap::getEnergy();
		this->_attack_damage = FragTrap::getDamage();
		std::cout << "DiamondTrap named " << this->_name;
		std::cout << " created with string constructor" << std::endl;
		return ;
	}

DiamondTrap::DiamondTrap( DiamondTrap const & cpy ) :
	ClapTrap(cpy), ScavTrap(), FragTrap() {
		this->_name = cpy.getName();
		this->_hit_points = cpy.getHitPoints();
		this->_energy_point = cpy.getEnergy();
		this->_attack_damage = cpy.getDamage();
		std::cout << "DiamondTrap named " << this->_name;
		std::cout << " created with constructor by copy" << std::endl;
		return ;
	}



DiamondTrap::~DiamondTrap() {
		std::cout << "DiamondTrap named " << this->_name
			<< " called destructor" << std::endl;
		return ;
}



DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & cpy) {
	std::cout << "DiamondTrap named " << this->_name
		<< " become "<< cpy.getName()
		<< " by copy by assignation" << std::endl;
	this->_name = cpy.getName();
	this->_energy_point = cpy.getEnergy();
	this->_attack_damage = cpy.getDamage();
	return (*this);
}



std::string	DiamondTrap::getName() const {
	return (this->_name);
}



void	DiamondTrap::attack(std::string const & target) {
	if (target.empty()) {
		std::cout << "target not found" << std::endl;
		return ;
	}
	std::cout << "DiamondTrap " << this->_name << " attacks " << target << " : ";
	if (this->_energy_point <= 0) {
		std::cout << "attacks abort, no energy" << std::endl;
		return ;
	}
	std::cout << target << " take "
		<< this->_attack_damage << " points of damage" << std::endl;
	this->_energy_point--;
	return ;
}

void	DiamondTrap::whoAmI() {
	std::cout << "Diamond mame: "<< this->_name
		<< ", ClapTrap name: " << ClapTrap::_name << std::endl;
}


std::ostream &	operator<<(std::ostream & out, DiamondTrap const & rhs) {
	out << "name " << rhs.getName()
		<< ", hp=" << rhs.getHitPoints()
		<< ", energy=" << rhs.getEnergy()
		<< ", damage=" << rhs.getDamage();
	return (out);
}
