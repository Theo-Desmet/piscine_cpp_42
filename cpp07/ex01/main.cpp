/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:42:25 by tdesmet           #+#    #+#             */
/*   Updated: 2022/12/09 08:28:26 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

#include "Iter.hpp"

void	increase(int &nb) {
	nb++;
}

void	to_upper(std::string & str) {
	for (size_t i = 0; i < str.size(); i++) {
		str[i] = toupper(str[i]);
	}

	return ;
}

int main() {
	int			buff_int[4] = {0, 1, 2, 3};

	std::cout << "\033[1;37m***** test int *****\033[1;0m" << std::endl;
	for (size_t i = 0; i < 4; i++) {
		std::cout << "buff[" << i << "]: " << buff_int[i] << std::endl;
	}
	iter(buff_int, 4,increase);
	std::cout << "\033[1;32mcall iter whit increase\033[1;0m" << std::endl;
	for (size_t i = 0; i < 4; i++) {
		std::cout << "buff[" << i << "]: " << buff_int[i] << std::endl;
	}



	std::string	buff_string[4] = {"aled", "oskour", "g peur", "bebou"};

	std::cout << "\033[1;37m***** test string *****\033[1;0m" << std::endl;
	for (size_t i = 0; i < 4; i++) {
		std::cout << "buff[" << i << "]: " << buff_string[i] << std::endl;
	}
	iter(buff_string, 4,to_upper);
	std::cout << "\033[1;32mcall iter whit to_upper\033[1;0m" << std::endl;
	for (size_t i = 0; i < 4; i++) {
		std::cout << "buff[" << i << "]: " << buff_string[i] << std::endl;
	}
}
