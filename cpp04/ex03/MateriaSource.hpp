/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:27:56 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/22 16:52:34 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_CPP04_EX03_MATERIASOURCE_H
#define MATERIA_CPP04_EX03_MATERIASOURCE_H

#include <iostream>

#include "AMateria.hpp"

class MateriaSource
{
	public:
		MateriaSource( void );
		MateriaSource( MateriaSource const & cpy );

		~MateriaSource() {}

		MateriaSource & operator=( MateriaSource const & );

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria *	_copy;
};

#endif
