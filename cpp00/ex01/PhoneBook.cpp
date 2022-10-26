/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:35:13 by tdesmet           #+#    #+#             */
/*   Updated: 2022/10/26 09:06:31 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

PhoneBook::PhoneBook(void) {
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

size_t	PhoneBook::add(size_t i) {
	std::string	line;

	i = (i + 1) % 8;
	std::cout << "First name: ";
	line = fill_line(line);
	std::cout << std::endl;
	contact[i].setFirstName(line);
	std::cout << "Last name: ";
	line = fill_line(line);
	std::cout << std::endl;
	contact[i].setLastName(line);
	std::cout << "Nickname: ";
	line = fill_line(line);
	std::cout << std::endl;
	contact[i].setNickName(line);
	std::cout << "Darckest secret: ";
	line = fill_line(line);
	std::cout << std::endl;
	contact[i].setSecret(line);
	std::cout << "Phone number: ";
	line = fill_line(line);
	std::cout << std::endl;
	contact[i].setPhone(line);
	return (i);
}

void	PhoneBook::search(void) const{
	std::string	name;

	for (size_t j = 0; j < 8; j++) {
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << j;
		std::cout << '|';
		std::cout << std::setfill(' ') << std::setw(10);
		name = contact[j].getFirstName();
		if (name.size() > 10) {
			name.resize(10);
			name.at(9) = '.';
		}
		std::cout << name << '|';
		std::cout << std::setfill(' ') << std::setw(10);
		name = contact[j].getLastName();
		if (name.size() > 10) {
			name.resize(10);
			name.at(9) = '.';
		}
		std::cout << name << '|';
		std::cout << std::setfill(' ') << std::setw(10);
		name = contact[j].getPhone();
		if (name.size() > 10) {
			name.resize(10);
			name.at(9) = '.';
		}
		std::cout << name << '|' << std::endl;
		//name.resize(9, '.');
		//std::cout << name;
	}
}

void	PhoneBook::indexSearch(size_t i) const {
	std::cout << "\n****************************" << std::endl;
	std:: cout << "First name: " << contact[i].getFirstName() << std::endl;
	std:: cout << "Last name: " << contact[i].getLastName() << std::endl;
	std:: cout << "Nickname: " << contact[i].getNickName() << std::endl;
	std:: cout << "Darkest secret: " << contact[i].getSecret() << std::endl;
	std:: cout << "Phone number: " << contact[i].getPhone() << std::endl;
	std::cout << "****************************" << std::endl;
}
