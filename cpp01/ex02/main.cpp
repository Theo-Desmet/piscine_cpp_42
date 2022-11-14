/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:06:45 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/14 08:07:45 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "\033[1;33mmemory address of string: " << &str << std::endl;
	std::cout << "content of string: " << str << std::endl << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1;32mmemory address of ref: " << &stringREF << std::endl;
	std::cout << "content reference of ref: " << stringREF << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1;31mmemory address of ptr: " << stringPTR << std::endl;
	std::cout << "content point by ptr: " << *stringPTR << std::endl;
	std::cout << "\033[1;0m";
}
