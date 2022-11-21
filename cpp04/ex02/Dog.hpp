/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:39:54 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/21 14:06:36 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CPP04_EX00_DOG_H
#define ANIMAL_CPP04_EX00_DOG_H

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog( void );
		Dog( Dog const & cpy );

		~Dog( void );

		Dog & operator=( Dog const & cpy );

		std::string	getType( void ) const;
		Brain &		getBrain( void ) const;

		void		makeSound( void ) const;

	private:
		Brain *	_brain;
};

std::ostream &	operator<<(std::ostream & out, Dog const & hrs);

#endif

