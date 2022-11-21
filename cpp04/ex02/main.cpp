/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:18:31 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/21 15:52:14 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	Animal *	buff[4];

	std::cout << "create a buffer animal with 2 cat and 2 dog" << std::endl;
	for (int i = 0; i < 4; i++) {
		(i < 2) ? buff[i] = new Dog : buff[i] = new Cat;
	}
	std::cout << std::endl << std::endl;

	std::cout << "check type of buffer animal" << std::endl;
	for (int i = 0; i < 4; i++) {
		std::cout << "buff[" << i << "] = " << buff[i]->getType();
		if (buff[i]->getType() == "\033[1;34mDog\033[1;0m" ) {
			std::cout << " 🐕" << std::endl;
		} else {
			std::cout << " 🐈" << std::endl;
		}
	}
	std::cout << std::endl << std::endl;
	std::cout << "check ideas of animals" << std::endl;
	std::cout << "buff[0] " << buff[0]->getType() << " 🐕 ";
	std::cout <<static_cast<Dog *>(buff[0])->getBrain().getIdeas(0) << std::endl;
	std::cout << "buff[1] " << buff[1]->getType() << " 🐕 ";
	std::cout << static_cast<Dog *>(buff[1])->getBrain().getIdeas(1) << std::endl;
	std::cout << "buff[2] " << buff[2]->getType() << " 🐈 ";
	std::cout << static_cast<Cat *>(buff[2])->getBrain().getIdeas(2) << std::endl;
	std::cout << "buff[3] " << buff[3]->getType() << " 🐈 ";
	std::cout << static_cast<Cat *>(buff[3])->getBrain().getIdeas(3) << std::endl;

	std::cout << std::endl << std::endl;
	for (int i = 0; i < 4; i++) {
		delete buff[i];
	}
	//std::cout << i->getType() << " 🐕" << std::endl;
	//std::cout << j->getType() << " 🐈" << std::endl;

	return (0);
}
