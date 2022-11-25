/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 08:58:53 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/25 13:46:49 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	std::cout << "\033[1;37m********** test invalide init *********** \033[1;0m" << std::endl;
	std::cout << "try to create michel(\"\033[1;33mmichel\033[1;0m\", 0)" << std::endl;
	try {
		Bureaucrat	michel("\033[1;33mmichel\033[1;0m", 0);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "try to create michel(\"\033[1;33mjean\033[1;0m\", 151)" << std::endl;
	try {
		Bureaucrat	michel("\033[1;33mjean\033[1;0m", 151);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;



	std::cout << "\033[1;37m********** test valide init ************* \033[1;0m" << std::endl;
	std::cout << "try to create michel(\"\033[1;33mmichel\033[1;0m\", 10)" << std::endl;
	try {
		Bureaucrat	michel("\033[1;33mmichel\033[1;0m", 10);
		std::cout << "\033[1;32mcreate ok\033[1;0m" << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "try to create michel(\"\033[1;33mjean\033[1;0m\", 140)" << std::endl;
	try {
		Bureaucrat	michel("\033[1;33mjean\033[1;0m", 140);
		std::cout << "\033[1;32mcreate ok\033[1;0m" << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	Bureaucrat michel("\033[1;33mmichel\033[1;0m", 10);
	Bureaucrat jean("\033[1;33mjean\033[1;0m", 140);

	std::cout << "\033[1;37m********** test increase grade ********** \033[1;0m" << std::endl;
	std::cout << michel << std::endl;
	try {
		std::cout << "try to increase 9" << std::endl;
		michel.increaseGrade(9);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << michel << std::endl;
	try {
		std::cout << "try to increase 9" << std::endl;
		michel.increaseGrade(9);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << michel << std::endl;
	std::cout << std::endl;



	std::cout << "\033[1;37m********** test decrease grade ********** \033[1;0m" << std::endl;
	std::cout << jean << std::endl;
	try {
		std::cout << "try to decrease 10" << std::endl;
		jean.decreaseGrade(10);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << jean << std::endl;
	try {
		std::cout << "try to decrease 10" << std::endl;
		jean.decreaseGrade(10);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << jean << std::endl;
	std::cout << std::endl;
}
