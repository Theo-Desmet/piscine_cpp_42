/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                           :+:      :+:    :+:   */
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

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string const target );
		ShrubberyCreationForm( ShrubberyCreationForm const & cpy );

		~ShrubberyCreationForm( void );

		ShrubberyCreationForm &	operator=( ShrubberyCreationForm const & cpy );
	private:
		std::string _target;
};

std::ostream &	operator<<(std::ostream & out, ShrubberyCreationForm const & hrs);

#endif
