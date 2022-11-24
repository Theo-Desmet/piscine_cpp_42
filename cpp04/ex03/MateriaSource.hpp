/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:27:56 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/23 11:10:23 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_CPP04_EX03_MATERIASOURCE_H
#define MATERIA_CPP04_EX03_MATERIASOURCE_H

#include <iostream>

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
	public:
		MateriaSource( void );
		MateriaSource( MateriaSource const & cpy );

		~MateriaSource();

		MateriaSource & operator=( MateriaSource const & cpy );

		AMateria * getCopy( size_t i ) const;

		virtual void learnMateria(AMateria * source);
		virtual AMateria* createMateria(std::string const & type);

	private:
		AMateria *	_copy[4];
};

#endif
