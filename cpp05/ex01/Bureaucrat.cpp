/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:56:06 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/25 15:44:41 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <stdexcept>

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default_name"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1) {
		throw (Bureaucrat::GradeTooHighException());
	} else if (grade > 150) {
		throw (Bureaucrat::GradeTooLowException());
	}
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & cpy) :
	_name(cpy.getName()), _grade(cpy.getGrade()) {}



Bureaucrat::~Bureaucrat() {}



Bureaucrat & Bureaucrat::operator=(Bureaucrat const & cpy) {
	this->_grade = cpy.getGrade();
	return (*this);
}



std::string	Bureaucrat::getName() const {
	return (this->_name);
}

int			Bureaucrat::getGrade() const {
	return (this->_grade);
}



void	Bureaucrat::increaseGrade(int const increase) {
	if (this->_grade - increase < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	this->_grade -= increase;
}

void	Bureaucrat::decreaseGrade(int const decrease) {
	if (this->_grade + decrease > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	this->_grade += decrease;
}

void	Bureaucrat::signForm(Form & form) {
	try {
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	} catch (std::exception & e) {
		std::cout << this->_name << " couldn't sign " << form.getName()
			<< " because " << e.what() << std::endl;
	}
}


std::ostream &	operator<<(std::ostream & out, Bureaucrat const & hrs) {
	out << hrs.getName() << ", bureaucrat grade: " << hrs.getGrade();
	return (out);
}
