/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:52:10 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/29 10:56:06 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_H
#define ROBOTOMY_REQUEST_FORM_H

#include <iostream>

#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string const target );
		RobotomyRequestForm( RobotomyRequestForm const & cpy );

		~RobotomyRequestForm( void );

		RobotomyRequestForm &	operator=( RobotomyRequestForm const & cpy );

		std::string	getTarget( void ) const;

		void	action( void ) const;

	private:
		std::string _target;
};

std::ostream &	operator<<(std::ostream & out, RobotomyRequestForm const & hrs);

#endif
