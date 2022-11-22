/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:29:00 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/22 16:27:17 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_CPP04_EX03_CHARACTER_H
#define MATERIA_CPP04_EX03_CHARACTER_H

#include <iostream>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
	public:
		Character( void );
		Character( std::string const name );
		Character( Character const & cpy );

		~Character( void );

		Character & operator=( Character const & cpy );

		std::string const & getName( void ) const;

		void equip( AMateria * m );
		void unequip( int idx );
		void use( int idx, ICharacter & target );

	private:
		std::string	_name;
		AMateria *	_inv[4];
};

#endif
