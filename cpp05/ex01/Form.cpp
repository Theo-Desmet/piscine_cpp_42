/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:56:06 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/30 08:28:20 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <stdexcept>

#include "Form.hpp"

Form::Form() :
	_name("default_name"),
	_grade_sign(50),
	_grade_exec(20),
	_signed(0) {}

Form::Form(std::string const  name, int const grade_signed, int const grade_exec) :
	_name(name),
	_grade_sign(grade_signed),
	_grade_exec(grade_exec),
	_signed(0) {
	if (grade_signed < 1)
		throw (Form::GradeTooHighException());
	if (grade_signed > 150)
		throw (Form::GradeTooLowException());
	if (grade_exec < 1)
		throw (Form::GradeTooHighException());
	if (grade_exec > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(Form const & cpy) :
	_name(cpy.getName()),
	_grade_sign(cpy.getGradeSigned()),
	_grade_exec(cpy.getGradeExec()) {}



Form::~Form() {}



Form & Form::operator=(Form const & cpy) {
	this->_signed = cpy.getSigned();
	return (*this);
}



std::string	Form::getName() const {
	return (this->_name);
}

int			Form::getGradeSigned() const {
	return (this->_grade_sign);
}

int			Form::getGradeExec() const {
	return (this->_grade_exec);
}

bool		Form::getSigned() const {
	return (this->_signed);
}



void	Form::beSigned(Bureaucrat michel) {
	if (this->_signed)
		throw Form::FormAlreadySignedException();
	if (michel.getGrade() > this->_grade_sign)
		throw Form::GradeTooLowException();
	this->_signed = 1;
}



std::ostream &	operator<<(std::ostream & out, Form const & hrs) {
	out << hrs.getName() << ", signed: " << hrs.getSigned()
		<< ", grade signed: " << hrs.getGradeSigned()
		<< ", grade exec: " << hrs.getGradeExec();
	return (out);
}
