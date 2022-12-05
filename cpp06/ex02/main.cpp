/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:12:46 by tdesmet           #+#    #+#             */
/*   Updated: 2022/12/05 14:53:42 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *	generate(void) {
	int	rng;

	srand(time(NULL));
	rng = rand() % 3;

	switch(rng) {
		case 0:
			return (new(A));
			break ;
		case 1:
			return (new(B));
			break ;
		case 2:
			return (new(C));
			break ;
		default:
			return (NULL);
			break ;
	}
}

void	identity(Base * p) {
	std::cout << "\033[1;37m***** search identity whit pointer *****\033[1;0m" << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << "class is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "class is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "class is C" << std::endl;
	else
		std::cout << "unknow Class type" << std::endl;
}

void	identity(Base & p) {
	std::cout << "\033[1;37m***** search identity whit pointer *****\033[1;0m" << std::endl;
	if (dynamic_cast<A*>(&p))
		std::cout << "class is A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "class is B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "class is C" << std::endl;
	else
		std::cout << "unknow Class type" << std::endl;
}

int main() {
	Base *	ptr = generate();
	Base *	temp = generate();
	Base &	reff = *temp;

	identity(ptr);
	identity(reff);

	delete(ptr);
	delete(temp);

	return (0);
}
