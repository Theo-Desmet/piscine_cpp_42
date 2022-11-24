/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 09:31:45 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/23 15:22:56 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_CPP04_EX03_ICE_H
#define MATERIA_CPP04_EX03_ICE_H

#include <iostream>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
    public:
        Ice( void );
        Ice( Ice const & cpy );

        virtual ~Ice( void );

        Ice & operator=( Ice const & cpy);

        Ice * clone( void ) const;
        void use( ICharacter & target );
};

#endif
