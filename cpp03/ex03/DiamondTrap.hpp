/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 08:39:21 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/17 14:20:30 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CPP03_EX01_DAIMONDTRAP_H
#define CLAPTRAP_CPP03_EX01_DAIMONDTRAP_H

#define RED "\033[1;31mred\033[1;0m"
#define GREEN "\033[1;32mgreen\033[1;0m"
#define YELLOW "\033[1;33myellow\033[1;0m"
#define BLUE "\033[1;34mblue\033[1;0m"

#include <iostream>

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap( void );
		DiamondTrap( std::string const name );
		DiamondTrap( DiamondTrap const & cpy );

		~DiamondTrap( void );

		DiamondTrap & operator=( DiamondTrap const & cpy );

		std::string getName( void ) const;

		void	attack( const std::string& target );
		void	whoAmI( void );

	private:
		std::string	_name;
};

std::ostream & operator<<(std::ostream & out, DiamondTrap const & hrs);

#endif
