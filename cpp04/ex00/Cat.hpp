/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:39:54 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/18 14:10:16 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CPP04_EX00_CAT_H
#define ANIMAL_CPP04_EX00_CAT_H

#include <iostream>

#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat( void );
		Cat( Cat const & cpy );

		~Cat( void );

		Cat & operator=( Cat const & cpy );

		std::string	getType( void ) const;
		void		makeSound() const;
};

std::ostream &	operator<<(std::ostream & out, Cat const & hrs);

#endif

