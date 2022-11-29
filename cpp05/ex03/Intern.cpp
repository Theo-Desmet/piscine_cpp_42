/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:13:33 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/29 16:11:04 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(Intern const & cpy) {
	(void)cpy;
}

Intern::~Intern() {}

Intern & Intern::operator=(Intern const & cpy) {
	(void)cpy;
	return (*this);
}

Form * makeForm(std::string form, std::string target) {
	std::string form_name[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"};

	std::size_t	i = 0;
	for (i = 0; i < 3; i++) {
		if (form == form_name[i])
			break;
	}
	Form *	temp;
	switch(i) {
		case 0:
			temp = new ShrubberyCreationForm(target);
			break;
		case 1:
			temp = new RobotomyRequestForm(target);
			break;
		case 2:
			temp = new PresidentialPardonForm(target);
			break;
		default:
			throw Intern::FormNameNotFound();
			break;
	}
	std::cout << "Intern creates " << temp->getName() << std::endl;

	return (temp);
}
