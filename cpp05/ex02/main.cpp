/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 08:58:53 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/25 15:59:22 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

int main() {
	std::cout << "\033[1;37m********** test valide init ************* \033[1;0m" << std::endl;
	std::cout << "try to create form(\"\033[1;34mblue_form\033[1;0m\", 10, 20)" << std::endl;
	try {
		ShrubberCreationForm	blue_form("test");
		std::cout << blue_form << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "try to create form(\"\033[1;33mgreen_form\033[1;0m\", 100, 120)" << std::endl;
	try {
		Form	green_form("\033[1;33mgreen_form\033[1;0m", 100, 120);
		std::cout << green_form << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "try to create form(\"\033[1;31mred_form\033[1;0m\", 1, 1)" << std::endl;
	try {
		Form	red_form("\033[1;31mred_form\033[1;0m", 1, 1);
		std::cout << red_form << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;



	std::cout << "\033[1;37m********** test invalide init *********** \033[1;0m" << std::endl;
	std::cout << "try to create form(\"\033[1;34mblue_form\033[1;0m\", 0, 20)" << std::endl;
	try {
		Form	blue_form("\033[1;34mblue_form\033[1;0m", 0, 20);
		std::cout << blue_form << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "try to create form(\"\033[1;34mblue_form\033[1;0m\", 10, 0)" << std::endl;
	try {
		Form	blue_form("\033[1;34mblue_form\033[1;0m", 0, 20);
		std::cout << blue_form << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "try to create form(\"\033[1;33mgreen_form\033[1;0m\", 151, 120)" << std::endl;
	try {
		Form	green_form("\033[1;34mgreen_form\033[1;0m", 151, 120);
		std::cout << green_form << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "try to create form(\"\033[1;33mgreen_form\033[1;0m\", 100, 151)" << std::endl;
	try {
		Form	green_form("\033[1;34mgreen_form\033[1;0m", 100, 151);
		std::cout << green_form << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;



	Form	blue_form("\033[1;34mblue_form\033[1;0m", 20, 20);
	Form	green_form("\033[1;32mgreen_form\033[1;0m", 100, 120);
	Form	red_form("\033[1;31mred_form\033[1;0m", 1, 1);
	std::cout << "\033[1;37m********** create bureaucrat ********** \033[1;0m" << std::endl;
	Bureaucrat michel("\033[1;33mmichel\033[1;0m", 10);
	Bureaucrat jean("\033[1;33mjean\033[1;0m", 50);
	std::cout << "create " << michel << std::endl;
	std::cout << "create " << jean << std::endl << std::endl;




	std::cout << "\033[1;37m********** test sign valide ********** \033[1;0m" << std::endl;
	std::cout << michel << std::endl;
	std::cout << blue_form << std::endl;
	try {
		std::cout << "try to sign form " << blue_form.getName()
			<< " whit " << michel.getName() << std::endl;
		michel.signForm(blue_form);
		std::cout << blue_form << std::endl << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << jean << std::endl;
	std::cout << green_form << std::endl;
	try {
		std::cout << "try to sign form " << green_form.getName()
			<< " whit " << jean.getName() << std::endl;
		michel.signForm(green_form);
		std::cout << green_form << std::endl << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;




	std::cout << "\033[1;37m********** test sign invalide ********** \033[1;0m" << std::endl;
	std::cout << michel << std::endl;
	std::cout << red_form << std::endl;
	try {
		std::cout << "try to sign form " << red_form.getName()
			<< " whit " << michel.getName() << std::endl;
		michel.signForm(red_form);
		std::cout << red_form << std::endl << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << jean << std::endl;
	std::cout << red_form << std::endl;
	try {
		std::cout << "try to sign form " << red_form.getName()
			<< " whit " << jean.getName() << std::endl;
		jean.signForm(red_form);
		std::cout << red_form << std::endl << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
