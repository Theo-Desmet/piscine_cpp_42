/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:39:54 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/21 14:04:18 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CPP04_EX00_CAT_H
#define ANIMAL_CPP04_EX00_CAT_H

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat( void );
		Cat( Cat const & cpy );

		~Cat( void );

		Cat & operator=( Cat const & cpy );

		std::string		getType( void ) const;
		Brain &	getBrain( void ) const;

		void	makeSound() const;

	private:
		Brain *	_brain;
};

std::ostream &	operator<<(std::ostream & out, Cat const & hrs);

#endif

