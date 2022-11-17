/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 08:39:21 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/17 09:29:02 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CPP03_EX01_SCAVTRAP_H
#define CLAPTRAP_CPP03_EX01_SCAVTRAP_H

#define RED "\033[1;31mred\033[1;0m"
#define GREEN "\033[1;32mgreen\033[1;0m"
#define YELLOW "\033[1;33myellow\033[1;0m"
#define BLUE "\033[1;34mblue\033[1;0m"
#define MAGENTA "\033[1;35mmagenta\033[1;0m"
#define CYAN "\033[1;36mcyan\033[1;0m"

#include <iostream>

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap( void );
		ScavTrap( std::string const name );
		ScavTrap( ScavTrap const & cpy );

		~ScavTrap( void );

		ScavTrap & operator=( ScavTrap const & cpy );

		void	attack( const std::string& target );
		void	guardGate( void );
};

std::ostream & operator<<(std::ostream & out, ScavTrap const & hrs);

#endif
