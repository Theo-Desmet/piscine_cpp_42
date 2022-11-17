/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 08:54:49 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/17 08:25:50 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	_name("ClapTrap"),_hit_points(10),  _energy_point(10), _attack_damage(0) {
		std::cout << "ClapTrap named " << this->_name;
		std::cout << " created with default constructor" << std::endl;
		return ;
	}

ClapTrap::ClapTrap(std::string name) :
	_name(name),_hit_points(10),  _energy_point(10), _attack_damage(0) {
		std::cout << "ClapTrap named " << name;
		std::cout << " created with string constructor" << std::endl;
		return ;
	}

ClapTrap::ClapTrap( ClapTrap const & cpy ) :
	_name(cpy.getName()), _hit_points(cpy.getHitPoints()),
	_energy_point(cpy.getEnergy()), _attack_damage(cpy.getDamage()) {
		std::cout << "ClapTrap named " << cpy.getName();
		std::cout << " created with constructor by copy" << std::endl;
		return ;
	}



ClapTrap::~ClapTrap() {
		std::cout << "ClapTrap named " << this->_name
			<< " called destructor" << std::endl;
		return ;
}



ClapTrap &	ClapTrap::operator=(ClapTrap const & cpy) {
	std::cout << "ClapTrap named " << this->_name
		<< " become "<< cpy.getName()
		<< " by copy by assignation" << std::endl;
	this->_name = cpy.getName();
	this->_energy_point = cpy.getEnergy();
	this->_attack_damage = cpy.getDamage();
	return (*this);
}



std::string		ClapTrap::getName() const {
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoints() const {
	return (this->_hit_points);
}

unsigned int	ClapTrap::getEnergy() const {
	return (this->_energy_point);
}

unsigned int	ClapTrap::getDamage() const {
	return (this->_attack_damage);
}



void	ClapTrap::attack(std::string const & target) {
	if (target.empty()) {
		std::cout << "target not found" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " : ";
	if (this->_energy_point <= 0) {
		std::cout << "attacks abort, no energy" << std::endl;
		return ;
	}
	std::cout << target << " take "
		<< this->_attack_damage << " points of damage" << std::endl;
	this->_energy_point--;
	return ;
}

void	ClapTrap::beRepaired(unsigned int ammount) {
	std::cout << this->_name << " want to repart: ";
	if (this->_energy_point <= 0) {
		std::cout << "repart abort, no energy" << std::endl;
		return ;
	}
	std::cout << this->_name << " repared "
		<< ammount << " hit points" << std::endl;
	this->_energy_point--;
	this->_hit_points += ammount;
	return ;
}

void	ClapTrap::takeDamage(unsigned int ammount) {
	std::cout << this->_name
		<< " take " << ammount << " points of damage" << std::endl;
	if (_hit_points > ammount) {
		this->_hit_points -= ammount;
		return ;
	}
	this->_hit_points = 0;
	return ;
}



std::ostream &	operator<<(std::ostream & out, ClapTrap const & rhs) {
	out << "name " << rhs.getName()
		<< ", hp=" << rhs.getHitPoints()
		<< ", energy=" << rhs.getEnergy()
		<< ", damage=" << rhs.getDamage();
	return (out);
}
