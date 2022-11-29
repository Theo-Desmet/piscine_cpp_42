/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:03:44 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/29 16:11:01 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include <iostream>
#include <exception>

#include "Form.hpp"

class Intern {
	public:
		Intern( void );
		Intern( Intern const & cpy );

		~Intern( void );

		Intern & operator=( Intern const & cpy );

		Form *	makeForm(std::string form, std::string target);

		class	FormNameNotFound : public std::exception {
			public:
				const char * what() const throw() {
					return ("\033[1;31mExcpetion call: Form name not found\033[1;0m");
				}
		};
};

#endif
