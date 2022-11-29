/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 08:58:53 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/29 13:14:27 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int main() {
	std::cout << "\033[1;37m********** test valide init ************* \033[1;0m" << std::endl;
	std::cout << "try to create ShrubberyCreationForm(\"\033[1;33mjardin\033[1;0m\")" << std::endl;
	try {
		ShrubberyCreationForm	shrubbery("\033[1;33mjardin\033[1;0m");
		std::cout << shrubbery << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "try to create RobotomyRequestForm(\"\033[1;35mnorminet\033[1;0m\"" << std::endl;
	try {
		RobotomyRequestForm	robotomy("\033[1;35mnorminet\033[1;0m");
		std::cout << robotomy << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "try to create PresidentialPardonForm(\"\033[1;34msomeone\033[1;0m\")" << std::endl;
	try {
		PresidentialPardonForm	presidential("\033[1;34msomeone\033[1;0m");
		std::cout << presidential << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;



	ShrubberyCreationForm	jardin("\033[1;34mjardin\033[1;0m");
	RobotomyRequestForm		norminet("\033[1;32mnorminet\033[1;0m");
	PresidentialPardonForm	someone("\033[1;31msomeone\033[1;0m");
	std::cout << "\033[1;37m********** create bureaucrat ********** \033[1;0m" << std::endl;
	Bureaucrat michel("\033[1;33mmichel\033[1;0m", 5);
	Bureaucrat jean("\033[1;33mjean\033[1;0m", 150);
	std::cout << "create " << michel << std::endl;
	std::cout << "create " << jean << std::endl << std::endl;




	std::cout << "\033[1;37m********** test invalide exec ********** \033[1;0m" << std::endl;
	std::cout << michel << std::endl;
	std::cout << jardin << std::endl;
	try {
		std::cout << "try to exec " << jardin.getName()
			<< " whit " << michel.getName() << " without sign " << std::endl;
		michel.executeForm(jardin);
		std::cout << jardin << std::endl << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << michel.getName() << " try to sign "
			<< jardin.getName() << std::endl;
		michel.signForm(jardin);
		std::cout << jardin << std::endl << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << michel.getName() << " try to sign "
			<< jardin.getName() << std::endl;
		michel.signForm(jardin);
		std::cout << jardin << std::endl << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << jean << std::endl;
	std::cout << jardin << std::endl;
	try {
		std::cout << "try to exec " << jardin.getName()
			<< " whit " << jean.getName() << std::endl;
		jean.executeForm(jardin);
		std::cout << jardin << std::endl << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;



	std::cout << "\033[1;37m********** test valide exec ********** \033[1;0m" << std::endl;
	try {
		michel.signForm(norminet);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		michel.signForm(someone);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << michel << std::endl;
	std::cout << jardin << std::endl;
	try {
		std::cout << "try to exec " << jardin.getName()
			<< " whit " << michel.getName() << std::endl;
		michel.executeForm(jardin);
		std::cout << jardin << std::endl << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << michel << std::endl;
	std::cout << norminet << std::endl;
	try {
		std::cout << "try to exec " << norminet.getName()
			<< " whit " << michel.getName() << std::endl;
		michel.executeForm(norminet);
		std::cout << norminet << std::endl << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << michel << std::endl;
	std::cout << someone << std::endl;
	try {
		std::cout << "try to exec " << someone.getName()
			<< " whit " << michel.getName() << std::endl;
		michel.executeForm(someone);
		std::cout << someone << std::endl << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	return (0);
}
