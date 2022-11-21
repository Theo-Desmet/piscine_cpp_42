/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:39:54 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/18 15:03:55 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CPP04_EX00_WRONGANIMAL_H
#define ANIMAL_CPP04_EX00_WRONGANIMAL_H

#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal( void );
		WrongAnimal( WrongAnimal const & cpy );

		virtual ~WrongAnimal( void );

		WrongAnimal & operator=( WrongAnimal const & cpy );

		std::string 	getType( void ) const;
		void	makeSound() const;

	protected:
		std::string	_type;
};

std::ostream &	operator<<(std::ostream & out, WrongAnimal const & hrs);

#endif

