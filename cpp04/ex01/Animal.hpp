/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:39:54 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/18 14:11:47 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CPP04_EX00_ANIMAL_H
#define ANIMAL_CPP04_EX00_ANIMAL_H

#include <iostream>

class Animal {
	public:
		Animal( void );
		Animal( Animal const & cpy );

		virtual ~Animal( void );

		Animal & operator=( Animal const & cpy );

		std::string 	getType( void ) const;
		virtual void	makeSound() const;

	protected:
		std::string	_type;
};

std::ostream &	operator<<(std::ostream & out, Animal const & hrs);

#endif

