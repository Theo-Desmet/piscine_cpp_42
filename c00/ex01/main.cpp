/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:09:26 by tdesmet           #+#    #+#             */
/*   Updated: 2022/10/21 16:22:55 by tdesmet          ###   ########.fr       */
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

int main()
{
	size_t i = -1;
	int			index;
	std::string line;
	PhoneBook	Book;

	while (1) {
		std::cout << "\n****************************" << std::endl;
		std::cout << "ADD: to add a new contact" << std::endl;
		std::cout << "SEARCH: print contacts" << std::endl;
		std::cout << "EXIT: exit the programe" << std::endl;
		std::cout << "****************************" << std::endl;
		std::cout << "->";
		line = fill_line(line);
		if (std::cin.eof())
			break ;
		if (!line.compare("ADD"))
			i = Book.Add(i);
		if (!line.compare("SEARCH")) {
			Book.Search();
			std::cout << "\nGive the index of your contact\n->";
			std::cin >> index;
			if (std::cin.fail())
				std::cout << "\nYour selection is not a int" << std::endl;
			else if (index < 0 || index > 7)
				std::cout << "\nYour selection is not a valide index" << std::endl;
			else
				Book.IndexSearch(index);
			std::cin.clear();
		}
		if (!line.compare("EXIT"))
			break ;
	}
	return (0);
}
