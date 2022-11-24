/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 09:31:45 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/23 15:23:09 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_CPP04_EX03_CURE_H
#define MATERIA_CPP04_EX03_CURE_H

#include <iostream>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
    public:
        Cure( void );
        Cure( Cure const & cpy );

        virtual ~Cure( void );

        Cure & operator=( Cure const & cpy);

        Cure * clone( void ) const;
        void use( ICharacter & target );
};

#endif
