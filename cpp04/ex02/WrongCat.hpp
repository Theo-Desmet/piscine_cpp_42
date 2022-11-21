/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:39:54 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/18 15:04:21 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CPP04_EX00_WRONGCAT_H
#define ANIMAL_CPP04_EX00_WRONGCAT_H

#include <iostream>

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat( void );
		WrongCat( WrongCat const & cpy );

		~WrongCat( void );

		WrongCat & operator=( WrongCat const & cpy );

		std::string	getType( void ) const;
		void		makeSound() const;
};

std::ostream &	operator<<(std::ostream & out, WrongCat const & hrs);

#endif

