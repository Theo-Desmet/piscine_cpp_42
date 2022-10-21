/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:35:13 by tdesmet           #+#    #+#             */
/*   Updated: 2022/10/21 16:14:48 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

PhoneBook::PhoneBook(void) {
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

size_t	PhoneBook::Add(size_t i) {
	std::string	line;

	i = (i + 1) % 8;
	std::cout << "First name: ";
	line = fill_line(line);
	std::cout << std::endl;
	contact[i].SetFirstName(line);
	std::cout << "Last name: ";
	line = fill_line(line);
	std::cout << std::endl;
	contact[i].SetLastName(line);
	std::cout << "Nickname: ";
	line = fill_line(line);
	std::cout << std::endl;
	contact[i].SetNickName(line);
	std::cout << "Darckest secret: ";
	line = fill_line(line);
	std::cout << std::endl;
	contact[i].SetSecret(line);
	std::cout << "Phone number: ";
	line = fill_line(line);
	std::cout << std::endl;
	contact[i].SetPhone(line);
	return (i);
}

void	PhoneBook::Search(void) const{
	std::string	name;

	for (size_t j = 0; j < 8; j++) {
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << j;
		std::cout << '|';
		std::cout << std::setfill(' ') << std::setw(10);
		name = contact[j].GetFirstName();
		if (name.size() > 10) {
			name.resize(10);
			name.at(9) = '.';
		}
		std::cout << name << '|';
		std::cout << std::setfill(' ') << std::setw(10);
		name = contact[j].GetLastName();
		if (name.size() > 10) {
			name.resize(10);
			name.at(9) = '.';
		}
		std::cout << name << '|';
		std::cout << std::setfill(' ') << std::setw(10);
		name = contact[j].GetPhone();
		if (name.size() > 10) {
			name.resize(10);
			name.at(9) = '.';
		}
		std::cout << name << '|' << std::endl;
		//name.resize(9, '.');
		//std::cout << name;
	}
}

void	PhoneBook::IndexSearch(size_t i) const {
	std::cout << "\n****************************" << std::endl;
	std:: cout << "First name: " << contact[i].GetFirstName() << std::endl;
	std:: cout << "Last name: " << contact[i].GetLastName() << std::endl;
	std:: cout << "Nickname: " << contact[i].GetNickName() << std::endl;
	std:: cout << "Darkest secret: " << contact[i].GetSecret() << std::endl;
	std:: cout << "Phone number: " << contact[i].GetPhone() << std::endl;
	std::cout << "****************************" << std::endl;
}
