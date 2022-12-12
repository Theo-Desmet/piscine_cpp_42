/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:37:50 by tdesmet           #+#    #+#             */
/*   Updated: 2022/12/12 08:48:22 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <deque>

#include "easyfind.hpp"

int main() {
	std::cout << "\033[1;37m***** init containers *****\033[1;0m" << std::endl;
	std::cout << "init container vector <int> of size 42" << std::endl;
	std::vector<int> vector;
	for (size_t i = 0; i < 42; i++) {
		vector.push_back(i);
	}
	std::cout << "init container deque <int> of size 42" << std::endl;
	std::deque<int> deque;
	for (size_t i = 0; i < 42; i++) {
		deque.push_back(i);
	}
	std::cout << "init container list <int> of size 42" << std::endl;
	std::list<int> list;
	for (size_t i = 0; i < 42; i++) {
		list.push_back(i);
	}



	std::cout << std::endl << "\033[1;37m***** test easyfind *****\033[1;0m" << std::endl;
	std::cout << "search 34 in vector" << std::endl;
	std::cout << ((easyfind(vector, 34)) ? "find" : "not find") << std::endl;
	std::cout << "search 64 in vector" << std::endl;
	std::cout << ((easyfind(vector, 64)) ? "find" : "not find") << std::endl;
	std::cout << std::endl;

	std::cout << "search 12 in list" << std::endl;
	std::cout << ((easyfind(list, 12)) ? "find" : "not find") << std::endl;
	std::cout << "search -12 in lsit" << std::endl;
	std::cout << ((easyfind(vector, -12)) ? "find" : "not find") << std::endl;
	std::cout << std::endl;

	std::cout << "search 0 in deque" << std::endl;
	std::cout << ((easyfind(deque, 0)) ? "find" : "not find") << std::endl;
	std::cout << "search 41 in deque" << std::endl;
	std::cout << ((easyfind(deque, 41)) ? "find" : "not find") << std::endl;
	std::cout << std::endl;
}
