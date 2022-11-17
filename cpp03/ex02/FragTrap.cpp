/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 08:54:49 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/17 08:51:16 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
		this->_name = "FragTrap";
		this->_hit_points = 100;
		this->_energy_point = 100;
		this->_attack_damage = 30;
		std::cout << "FragTrap named " << this->_name;
		std::cout << " created with default constructor" << std::endl;
		return ;
	}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
		this->_name = name;
		this->_hit_points = 100;
		this->_energy_point = 100;
		this->_attack_damage = 30;
		std::cout << "FragTrap named " << this->_name;
		std::cout << " created with string constructor" << std::endl;
		return ;
	}

FragTrap::FragTrap( FragTrap const & cpy ) : ClapTrap(cpy) {
		this->_name = cpy.getName();
		this->_hit_points = cpy.getHitPoints();
		this->_energy_point = cpy.getEnergy();
		this->_attack_damage = cpy.getDamage();
		std::cout << "FragTrap named " << this->_name;
		std::cout << " created with constructor by copy" << std::endl;
		return ;
	}



FragTrap::~FragTrap() {
		std::cout << "FragTrap named " << this->_name
			<< " called destructor" << std::endl;
		return ;
}



FragTrap &	FragTrap::operator=(FragTrap const & cpy) {
	std::cout << "FragTrap named " << this->_name
		<< " become "<< cpy.getName()
		<< " by copy by assignation" << std::endl;
	this->_name = cpy.getName();
	this->_energy_point = cpy.getEnergy();
	this->_attack_damage = cpy.getDamage();
	return (*this);
}



void	FragTrap::attack(std::string const & target) {
	if (target.empty()) {
		std::cout << "target not found" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " attacks " << target << " : ";
	if (this->_energy_point <= 0) {
		std::cout << "attacks abort, no energy" << std::endl;
		return ;
	}
	std::cout << target << " take "
		<< this->_attack_damage << " points of damage" << std::endl;
	this->_energy_point--;
	return ;
}

void	FragTrap::highFiveGuys() {
	std::cout << "FragTrap want to high five" <<std::endl;
}


std::ostream &	operator<<(std::ostream & out, FragTrap const & rhs) {
	out << "name " << rhs.getName()
		<< ", hp=" << rhs.getHitPoints()
		<< ", energy=" << rhs.getEnergy()
		<< ", damage=" << rhs.getDamage();
	return (out);
}
