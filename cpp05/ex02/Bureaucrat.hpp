/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:13:30 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/25 15:40:22 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <exception>

#include "Form.hpp"

class Form;

class Bureaucrat {
	public:
		Bureaucrat( void );
		Bureaucrat( std::string const name, int grade );
		Bureaucrat( Bureaucrat const & cpy);

		~Bureaucrat( void );

		Bureaucrat & operator=( Bureaucrat const & spy );

		std::string	getName( void ) const;
		int			getGrade( void ) const;

		void	increaseGrade( int const increase );
		void	decreaseGrade( int const decrease );
		void	signForm( Form & form );

		class GradeTooHighException : public std::exception {
			public:
				const char * what() const throw() {
					return ("\033[1;31mExcpetion call: Grade too high\033[1;0m");
				}
		};

		class GradeTooLowException : public std::exception {
			public:
				const char * what() const throw() {
					return ("\033[1;31mExcpetion call: Grade too Low\033[1;0m");
				}
		};

	private:
		std::string const	_name;
		int		_grade;
};

std::ostream &	operator<<( std::ostream & out, Bureaucrat const & hrs );

#endif
