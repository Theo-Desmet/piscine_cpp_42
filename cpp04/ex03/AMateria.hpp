/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:25:19 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/23 11:04:06 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_CPP04_EX03_AMATERIA_H
#define MATERIA_CPP04_EX03_AMATERIA_H

#include <iostream>

#include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected:
		std::string	_type;

	public:
		AMateria( void );
		AMateria( std::string const & type );
		AMateria( AMateria const & cpy );

		virtual	~AMateria( void );

		AMateria & operator=( AMateria const & );

		std::string const & getType( void ) const;

		virtual AMateria * clone( void ) const = 0;
		virtual void use( ICharacter & target );
};

#endif
