/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 08:39:21 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/17 09:28:11 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CPP03_EX00_CLAPTRAP_H
#define CLAPTRAP_CPP03_EX00_CLAPTRAP_H

#define RED "\033[1;31mred\033[1;0m"
#define GREEN "\033[1;32mgreen\033[1;0m"
#define YELLOW "\033[1;33myellow\033[1;0m"
#define BLUE "\033[1;34mblue\033[1;0m"
#define MAGENTA "\033[1;35mmagenta\033[1;0m"
#define CYAN "\033[1;36mcyan\033[1;0m"

#include <iostream>

class ClapTrap {
	public:
		ClapTrap( void );
		ClapTrap( std::string const name );
		ClapTrap( ClapTrap const & cpy );

		virtual ~ClapTrap( void );

		ClapTrap & operator=( ClapTrap const & cpy );

		std::string		getName( void ) const;
		unsigned int	getHitPoints( void ) const;
		unsigned int	getEnergy( void ) const;
		unsigned int	getDamage( void ) const;

		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );

	protected:
		std::string 		_name;
		unsigned int		_hit_points;
		unsigned int		_energy_point;
		unsigned int		_attack_damage;
};

std::ostream & operator<<(std::ostream & out, ClapTrap const & hrs);

#endif
