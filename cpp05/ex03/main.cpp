/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 08:58:53 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/29 16:29:23 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int main() {
	std::cout << "\033[1;37m********** test valide init ************* \033[1;0m" << std::endl;
	Intern	intern;
	Form * buff[3];
	std::cout << "try to create ShrubberyCreationForm(\"\033[1;33mjardin\033[1;0m\")" << std::endl;
	try {
		buff[0] = intern.makeForm("Shrubbery creation" ,"\033[1;33mjardin\033[1;0m");
		std::cout << buff[0] << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "try to create RobotomyRequestForm(\"\033[1;35mnorminet\033[1;0m\"" << std::endl;
	try {
		buff[1] = intern.makeForm("robotomy request" ,"\033[1;35mnorminet\033[1;0m");
		std::cout << buff[1] << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "try to create PresidentialPardonForm(\"\033[1;34msomeone\033[1;0m\")" << std::endl;
	try {
		buff[2] = intern.makeForm("presidential pardon" ,"\033[1;34msomeone\033[1;0m");
		std::cout << buff[2] << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;



	std::cout << "\033[1;37m********** create bureaucrat ********** \033[1;0m" << std::endl;
	Bureaucrat michel("\033[1;33mmichel\033[1;0m", 5);
	Bureaucrat jean("\033[1;33mjean\033[1;0m", 150);
	std::cout << "create " << michel << std::endl;
	std::cout << "create " << jean << std::endl << std::endl;




	std::cout << "\033[1;37m********** test invalide exec ********** \033[1;0m" << std::endl;
	std::cout << michel << std::endl;
	std::cout << *buff[0] << std::endl;
	try {
		std::cout << "try to exec " << buff[0]->getName()
			<< " whit " << michel.getName() << " without sign " << std::endl;
		michel.executeForm(*buff[0]);
		std::cout << *buff[0] << std::endl << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << michel.getName() << " try to sign "
			<< buff[0]->getName() << std::endl;
		michel.signForm(*buff[0]);
		std::cout << *buff[0] << std::endl << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << michel.getName() << " try to sign "
			<< buff[0]->getName() << std::endl;
		michel.signForm(*buff[0]);
		std::cout << *buff[0] << std::endl << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << jean << std::endl;
	std::cout << *buff[0] << std::endl;
	try {
		std::cout << "try to exec " << buff[0]->getName()
			<< " whit " << buff[0]->getName() << std::endl;
		jean.executeForm(*buff[0]);
		std::cout << *buff[0] << std::endl << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;



	std::cout << "\033[1;37m********** test valide exec ********** \033[1;0m" << std::endl;
	try {
		michel.signForm(*buff[1]);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		michel.signForm(*buff[2]);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << michel << std::endl;
	std::cout << *buff[0] << std::endl;
	try {
		std::cout << "try to exec " << buff[0]->getName()
			<< " whit " << michel.getName() << std::endl;
		michel.executeForm(*buff[0]);
		std::cout << *buff[0] << std::endl << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << michel << std::endl;
	std::cout << *buff[1] << std::endl;
	try {
		std::cout << "try to exec " << buff[1]->getName()
			<< " whit " << michel.getName() << std::endl;
		michel.executeForm(*buff[1]);
		std::cout << *buff[1] << std::endl << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << michel << std::endl;
	std::cout << *buff[2] << std::endl;
	try {
		std::cout << "try to exec " << buff[2]->getName()
			<< " whit " << michel.getName() << std::endl;
		michel.executeForm(*buff[2]);
		std::cout << *buff[2] << std::endl << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	return (0);
}
