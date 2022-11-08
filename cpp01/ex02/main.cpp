/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:06:45 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/07 08:06:53 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "memory address of ptr: " << stringPTR << std::endl;
	std::cout << "content point by ptr: " << *stringPTR << std::endl;
	std::cout << std::endl;
	std::cout << "memory address of ptr: " << &stringPTR << std::endl;
	std::cout << "content reference of ref: " << stringREF << std::endl;
}
