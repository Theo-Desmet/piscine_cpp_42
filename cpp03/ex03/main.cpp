/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:27:54 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/17 14:23:14 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main() {
	std::cout << "************** init ***************" << std::endl;
	ClapTrap	red(RED);
	ScavTrap	blue(BLUE);
	FragTrap	green(GREEN);
	DiamondTrap	yellow(YELLOW);
	DiamondTrap	foo(yellow);
	DiamondTrap	bar;
	bar = foo;

	std::cout << std::endl << "********** test attacks ************" << std::endl;
	red.attack(BLUE);
	blue.attack(GREEN);
	green.attack(RED);
	yellow.attack(GREEN);
	yellow.attack("");
	yellow.attack(YELLOW);

	std::cout << std::endl << "********** test repar/damage ************" << std::endl;
	for (int i = 0; i < 4; i++) {
		std::cout << blue << std::endl;
		blue.takeDamage(40);
	}
	std::cout << blue <<std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout << blue << std::endl;
		blue.beRepaired(3);
	}

	for (int i = 0; i < 4; i++) {
		std::cout << green << std::endl;
		green.takeDamage(40);
	}
	std::cout << green <<std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout << green << std::endl;
		green.beRepaired(3);
	}

	for (int i = 0; i < 4; i++) {
		std::cout << yellow << std::endl;
		yellow.takeDamage(40);
	}
	std::cout << yellow <<std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout << yellow << std::endl;
		yellow.beRepaired(3);
	}

	std::cout << std::endl << "********** test special ************" << std::endl;
	blue.guardGate();
	green.highFiveGuys();
	yellow.whoAmI();
	foo.whoAmI();
	bar.whoAmI();

	std::cout << std::endl << "********* call destructor **********" << std::endl;
}
