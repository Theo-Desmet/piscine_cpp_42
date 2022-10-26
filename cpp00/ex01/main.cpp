/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:09:26 by tdesmet           #+#    #+#             */
/*   Updated: 2022/10/26 09:30:21 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

std::string fill_line(std::string line) {
	 do {
		line.clear();
		if (!std::getline(std::cin, line)) {
			std::cout << "Error in getline";
			 break ;
		}
	 } while (line.empty());
	 return (line);
}

void	header(void) {
	std::cout << "\n****************************" << std::endl;
	std::cout << "ADD: to add a new contact" << std::endl;
	std::cout << "SEARCH: print contacts" << std::endl;
	std::cout << "EXIT: exit the programe" << std::endl;
	std::cout << "****************************" << std::endl;
	std::cout << "->";
}

void	print_contact(PhoneBook Book) {
	int			index;

	std::cout << "\nGive the index of your contact\n->";
	std::cin >> index;
	if (std::cin.fail())
		std::cout << "\nYour selection is not a int" << std::endl;
	else if (index < 0 || index > 7)
		std::cout << "\nYour selection is not a valide index" << std::endl;
	else
		Book.indexSearch(index);
}

int main()
{
	size_t i = -1;
	std::string line;
	PhoneBook	Book;

	while (1) {
		std::cin.clear();
		header();
		std::cin >> line;
		if (std::cin.eof())
			break ;
		if (!line.compare("EXIT"))
			break ;
		if (!line.compare("ADD"))
			i = Book.add(i);
		if (!line.compare("SEARCH")) {
			Book.search();
			print_contact(Book);
		}
	}
	return (0);
}
