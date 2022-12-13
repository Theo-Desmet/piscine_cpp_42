/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 08:46:42 by tdesmet           #+#    #+#             */
/*   Updated: 2022/12/13 13:49:22 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <list>

#include "MutantStack.hpp"

void	test_def()
{
	std::cout << "\033[1;35m***** test default MutantStack *****\033[1;0m" << std::endl;
	std::cout << "create default MutantStack" << std::endl;
	MutantStack<int> mst;
	for (size_t i = 0; i < 4; i++){
		mst.push(i);
	}

	std::cout << "create const_iterator" << std::endl;
	MutantStack<int>::const_iterator cit = mst.cbegin();
	MutantStack<int>::const_iterator cite = mst.cend();
	while (cit != cite) {
		std::cout << *cit << " ";
		cit++;
	}
	std::cout << std::endl;
	std::cout << "create iterator" << std::endl;
	MutantStack<int>::iterator it = mst.begin();
	MutantStack<int>::iterator ite = mst.end();
	while (it != ite) {
		std::cout << *it << " ";
		it++;
	}

	std::cout << std::endl;
	it = mst.begin();
	std::cout << "change content of stack white iterator" << std::endl;
	while (it != ite) {
		*it += 2;
		std::cout << *it << " ";
		it++;
	}

	std::cout << std::endl;
	std::cout << "create reverse_iterator" << std::endl;
	MutantStack<int>::reverse_iterator rit = mst.rbegin();
	MutantStack<int>::reverse_iterator rite = mst.rend();
	while (rit != rite) {
		std::cout << *rit << " ";
		rit++;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	return ;
}

void	test_deque()
{
	std::cout << "\033[1;34m***** test deque MutantStack *****\033[1;0m" << std::endl;
	std::cout << "create default MutantStack" << std::endl;
	MutantStack<int, std::deque<int> > mst;
	for (size_t i = 0; i < 4; i++){
		mst.push(i);
	}

	std::cout << "create const_iterator" << std::endl;
	MutantStack<int, std::deque<int> >::const_iterator cit = mst.cbegin();
	MutantStack<int, std::deque<int> >::const_iterator cite = mst.cend();
	while (cit != cite) {
		std::cout << *cit << " ";
		cit++;
	}
	std::cout << std::endl;
	std::cout << "create iterator" << std::endl;
	MutantStack<int, std::deque<int> >::iterator it = mst.begin();
	MutantStack<int, std::deque<int> >::iterator ite = mst.end();
	while (it != ite) {
		std::cout << *it << " ";
		it++;
	}

	std::cout << std::endl;
	it = mst.begin();
	std::cout << "change content of stack white iterator" << std::endl;
	while (it != ite) {
		*it += 2;
		std::cout << *it << " ";
		it++;
	}

	std::cout << std::endl;
	std::cout << "create reverse_iterator" << std::endl;
	MutantStack<int, std::deque<int> >::reverse_iterator rit = mst.rbegin();
	MutantStack<int, std::deque<int> >::reverse_iterator rite = mst.rend();
	while (rit != rite) {
		std::cout << *rit << " ";
		rit++;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	return ;
}

void	test_vector()
{
	std::cout << "\033[1;33m***** test vector MutantStack *****\033[1;0m" << std::endl;
	std::cout << "create default MutantStack" << std::endl;
	MutantStack<int, std::vector<int> > mst;
	for (size_t i = 0; i < 4; i++){
		mst.push(i);
	}

	std::cout << "create const_iterator" << std::endl;
	MutantStack<int, std::vector<int> >::const_iterator cit = mst.cbegin();
	MutantStack<int, std::vector<int> >::const_iterator cite = mst.cend();
	while (cit != cite) {
		std::cout << *cit << " ";
		cit++;
	}
	std::cout << std::endl;
	std::cout << "create iterator" << std::endl;
	MutantStack<int, std::vector<int> >::iterator it = mst.begin();
	MutantStack<int, std::vector<int> >::iterator ite = mst.end();
	while (it != ite) {
		std::cout << *it << " ";
		it++;
	}

	std::cout << std::endl;
	it = mst.begin();
	std::cout << "change content of stack white iterator" << std::endl;
	while (it != ite) {
		*it += 2;
		std::cout << *it << " ";
		it++;
	}

	std::cout << std::endl;
	std::cout << "create reverse_iterator" << std::endl;
	MutantStack<int, std::vector<int> >::reverse_iterator rit = mst.rbegin();
	MutantStack<int, std::vector<int> >::reverse_iterator rite = mst.rend();
	while (rit != rite) {
		std::cout << *rit << " ";
		rit++;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	return ;
}

void	test_list()
{
	std::cout << "\033[1;32m***** test list MutantStack *****\033[1;0m" << std::endl;
	std::cout << "create default MutantStack" << std::endl;
	MutantStack<int, std::list<int> > mst;
	for (size_t i = 0; i < 4; i++){
		mst.push(i);
	}

	std::cout << "create const_iterator" << std::endl;
	MutantStack<int, std::list<int> >::const_iterator cit = mst.cbegin();
	MutantStack<int, std::list<int> >::const_iterator cite = mst.cend();
	while (cit != cite) {
		std::cout << *cit << " ";
		cit++;
	}
	std::cout << std::endl;
	std::cout << "create iterator" << std::endl;
	MutantStack<int, std::list<int> >::iterator it = mst.begin();
	MutantStack<int, std::list<int> >::iterator ite = mst.end();
	while (it != ite) {
		std::cout << *it << " ";
		it++;
	}

	std::cout << std::endl;
	it = mst.begin();
	std::cout << "change content of stack white iterator" << std::endl;
	while (it != ite) {
		*it += 2;
		std::cout << *it << " ";
		it++;
	}

	std::cout << std::endl;
	std::cout << "create reverse_iterator" << std::endl;
	MutantStack<int, std::list<int> >::reverse_iterator rit = mst.rbegin();
	MutantStack<int, std::list<int> >::reverse_iterator rite = mst.rend();
	while (rit != rite) {
		std::cout << *rit << " ";
		rit++;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	return ;
}

int main()
{
	test_def();
	test_deque();
	test_list();
	test_vector();

	return (0);
}
