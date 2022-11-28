/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                           :+:      :+:    :+:   */
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

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string const target );
		PresidentialPardonForm( PresidentialPardonForm const & cpy );

		~PresidentialPardonForm( void );

		PresidentialPardonForm &	operator=( PresidentialPardonForm const & cpy );
	private:
		std::string _target;
};

std::ostream &	operator<<(std::ostream & out, PresidentialPardonForm const & hrs);

#endif
