/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:52:10 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/25 15:31:29 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <iostream>

#include "Form.hpp"

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string const target );
		RobotomyRequestForm( RobotomyRequestForm const & cpy );

		~RobotomyRequestForm( void );

		RobotomyRequestForm &	operator=( RobotomyRequestForm const & cpy );
	private:
		std::string _target;
};

std::ostream &	operator<<(std::ostream & out, RobotomyRequestForm const & hrs);

#endif
