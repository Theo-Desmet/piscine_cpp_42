/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:56:06 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/29 10:59:26 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
	Form("PresidentialPardonForm", 25, 5), _target("default") {}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) :
	Form("PresidentialPardonForm", 25, 5) , _target(target){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & cpy) :
	Form(cpy) {}



PresidentialPardonForm::~PresidentialPardonForm() {}



PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & cpy) {
	this->Form::operator=(cpy);
	return (*this);
}



std::string	PresidentialPardonForm::getTarget() const {
	return(this->_target);
}



void	PresidentialPardonForm::action() const {
	std::cout  << this->_target << "have receve an presidential pardon" << std::endl;
}



std::ostream &	operator<<(std::ostream & out, PresidentialPardonForm const & hrs) {
	out << hrs.getName() << ", signed: " << hrs.getSigned()
		<< ", grade signed: " << hrs.getGradeSigned()
		<< ", grade exec: " << hrs.getGradeExec()
		<< ", target: " << hrs.getTarget();
	return (out);
}
