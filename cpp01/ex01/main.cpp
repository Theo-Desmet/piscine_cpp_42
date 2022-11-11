/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:42:22 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/09 09:09:12 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main()
{
	Zombie*	horde0 = zombieHorde(0, "theo");
	if (horde0)
		horde0->announce();

	Zombie*	horde1 = zombieHorde(1, "bastien");
	if (horde1)
		horde1->announce();

	Zombie*	horde10 = zombieHorde(10, "julot");
	if (horde10)
		horde10->announce();

	std::cout <<"****************************************" << std::endl;
	for (int i = 0; i < 10; i++) {
		horde10[i].announce();
	}
	std::cout <<"****************************************" << std::endl;

	delete [] horde0;
	delete [] horde1;
	delete [] horde10;
	return (0);
}
