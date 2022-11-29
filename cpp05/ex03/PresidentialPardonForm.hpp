/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:52:10 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/29 10:56:39 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_H
#define PRESIDENTIAL_PARDON_FORM_H

#include <iostream>

#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string const target );
		PresidentialPardonForm( PresidentialPardonForm const & cpy );

		~PresidentialPardonForm( void );

		PresidentialPardonForm &	operator=( PresidentialPardonForm const & cpy );

		std::string	getTarget( void ) const;

		void	action( void ) const;

	private:
		std::string _target;
};

std::ostream &	operator<<(std::ostream & out, PresidentialPardonForm const & hrs);

#endif
