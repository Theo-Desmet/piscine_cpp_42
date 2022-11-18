/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:27:54 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/18 08:30:27 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"

int	main() {
	std::cout << "************** init ***************" << std::endl;
	ClapTrap	foo;
	ClapTrap	red(RED);
	ClapTrap	bar(red);
	foo = bar;

	std::cout << std::endl << "********** test attack ************" << std::endl;
	red.attack("bar");
	red.attack(BLUE);
	red.attack("");

	std::cout << std::endl << "********** test repar/damage ************" << std::endl;
	for (int i = 0; i < 4; i++) {
		std::cout << red << std::endl;
		red.takeDamage(3);
	}
	std::cout << red <<std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout << red << std::endl;
		red.beRepaired(3);
	}
	std::cout << red << std::endl << std::endl;

	std::cout << std::endl << "************ test energy **************" << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << bar << std::endl;
		bar.attack("bar");
	}
	std::cout << bar << std::endl;
	bar.attack("bar");
	std::cout << bar << std::endl;
	bar.beRepaired(0);

	std::cout << std::endl << "********* call destructor **********" << std::endl;
}
