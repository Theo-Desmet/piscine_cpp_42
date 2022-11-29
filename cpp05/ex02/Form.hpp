/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:52:10 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/29 10:47:39 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form( void );
		Form( std::string const name, int const grade_signed, int const grade_exec );
		Form( Form const & cpy );

		~Form( void );

		Form &	operator=( Form const & cpy );

		std::string	getName( void ) const;
		bool		getSigned( void ) const;
		bool		setSigned( bool const i );
		int			getGradeSigned( void ) const;
		int			getGradeExec( void ) const;

		void	beSigned( Bureaucrat michel );
		void	execute( Bureaucrat const & executor ) const;
		virtual void	action( void ) const = 0;

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

		class FormAlreadySignedException : public std::exception {
			public:
				const char * what() const throw() {
					return ("\033[1;31mExcpetion call: Form already signed\033[1;0m");
				}
		};

		class ExecWithoutSignedException : public std::exception {
			public:
				const char * what() const throw() {
					return ("\033[1;31mExcpetion call: Form not signed before exec\033[1;0m");
				}
		};

	private:
		std::string const	_name;
		int	const			_grade_sign;
		int	const			_grade_exec;
		bool				_signed;
};

std::ostream &	operator<<(std::ostream & out, Form const & hrs);

#endif
