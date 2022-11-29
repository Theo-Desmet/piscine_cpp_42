/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:56:06 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/29 11:01:39 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
	Form("RobotomyRequestForm", 72, 45), _target("default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) :
	Form("RobotomyRequestForm", 72, 45) , _target(target){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & cpy) :
	Form(cpy) {}



RobotomyRequestForm::~RobotomyRequestForm() {}



RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & cpy) {
	this->Form::operator=(cpy);
	return (*this);
}



std::string	RobotomyRequestForm::getTarget() const {
	return (this->_target);
}



void	RobotomyRequestForm::action() const {
	std::srand(std::time(NULL));
	int	rng = std::rand() % 2;

	std::cout  << "* Sound of drill *" << std::endl;
	if (rng)
		std::cout << this->_target << " become a robot" << std::endl;
	else
		std::cout << this->_target << " rest human" << std::endl;
}



std::ostream &	operator<<(std::ostream & out, RobotomyRequestForm const & hrs) {
	out << hrs.getName() << ", signed: " << hrs.getSigned()
		<< ", grade signed: " << hrs.getGradeSigned()
		<< ", grade exec: " << hrs.getGradeExec()
		<< ", target: " << hrs.getTarget();
	return (out);
}
