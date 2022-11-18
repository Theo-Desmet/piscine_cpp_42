/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:18:31 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/18 16:04:37 by tdesmet          ###   ########.fr       */
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
	{
	const Animal* meta = new Animal();
	const Animal* i = new Dog();
	const Animal* j = new Cat();

	std::cout << std::endl;
	std::cout << "type of Animal* i = new Dog()" << std::endl;
	std::cout << i->getType() << " 🐕" << std::endl;
	std::cout << "type of Animal* j = new Cat()" << std::endl;
	std::cout << j->getType() << " 🐈" << std::endl;

	std::cout << std::endl;
	std::cout << "Animal* i = new Dog() make song" << std::endl;
	i->makeSound();
	std::cout << "Animal* j = new Cat() make song" << std::endl;
	j->makeSound();
	std::cout << "Animal* meta = new Animal() make song" << std::endl;
	meta->makeSound();

	std::cout << std::endl;
	delete (meta);
	delete (i);
	delete (j);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	}
	{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* j = new WrongCat();
	const WrongCat* wCat = new WrongCat();

	std::cout << std::endl;
	std::cout << "type of WrongAnimal* j = new WrongCat()" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << "type of WrongCat* wCat = new WrongCat()" << std::endl;
	std::cout << wCat->getType() << " " << std::endl;

	std::cout << std::endl;
	std::cout << "WrongAnimal* i = new WrongCat() make song" << std::endl;
	j->makeSound();
	std::cout << "WrongCat* wCat = new WrongCat() make song" << std::endl;
	wCat->makeSound();
	std::cout << "WrongAnimal* meta = new WrongAnimal() make song" << std::endl;
	meta->makeSound();

	std::cout << std::endl;
	delete (meta);
	delete (wCat);
	delete (j);
	}

	return (0);
}
