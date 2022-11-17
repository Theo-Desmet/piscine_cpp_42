/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:27:54 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/17 08:26:46 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main() {
	std::cout << "************** init ***************" << std::endl;
	ClapTrap	red(RED);
	ScavTrap	blue(BLUE);
	ScavTrap	foo(blue);
	ScavTrap	bar;
	bar = foo;

	std::cout << std::endl << "********** test attacks ************" << std::endl;
	red.attack("bar");
	red.attack(BLUE);
	blue.attack(RED);
	blue.attack("");
	blue.attack(BLUE);

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

	std::cout << std::endl << "********* call destructor **********" << std::endl;
}
