/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:48:03 by tdesmet           #+#    #+#             */
/*   Updated: 2022/12/12 16:41:56 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <time.h>

#include "Span.hpp"

int main()
{
	std::cout << "\033[1;37m***** test small span *****\033[1;0m" << std::endl;
	std::cout << "create span size 10 and fill 5 val" << std::endl;
	Span sp = Span(10);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "shortest: " <<  sp.shortestSpan() << std::endl;
	std::cout << "longest: " << sp.longestSpan() << std::endl;

	std::cout << "fill span white 5 new rng val" << std::endl;
	srand(time(NULL));
	for (unsigned int i = 0; i < 5; i++) {
		sp.addNumber(rand() % 100);
	}
	std::cout << "shortest: " <<  sp.shortestSpan() << std::endl;
	std::cout << "longest: " << sp.longestSpan() << std::endl;



	std::cout << std::endl << "\033[1;37m***** test big span *****\033[1;0m" << std::endl;
	std::cout << "create span size 10.000 and fill 10.000 val" << std::endl;
	std::vector<int>	v;
	Span 				big_sp(10000);
	for (size_t i = 0; i < 10000; i++) {
		v.push_back(i);
	}
	big_sp.addNumber(v.begin(),v .end());
	std::cout << "shortest: " <<  big_sp.shortestSpan() << std::endl;
	std::cout << "longest: " << big_sp.longestSpan() << std::endl;



	std::cout << std::endl << "\033[1;37m***** test exception *****\033[1;0m" << std::endl;
	try {
		std::cout << "test out range index" << std::endl;
		Span test;
		test.addNumber(1);
	} catch (std::exception const & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "test not enought val" << std::endl;
		Span test(1);
		test.addNumber(1);
		test.shortestSpan();
	} catch (std::exception const & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
