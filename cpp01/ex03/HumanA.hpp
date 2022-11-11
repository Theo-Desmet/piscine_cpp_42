/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:14:49 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/09 09:12:27 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_EX03_HUMANA_H
#define WEAPON_EX03_HUMANA_H

#include "Weapon.hpp"

class	HumanA {

	public:
		HumanA( std::string name, Weapon& weapon );
		~HumanA( void );

		std::string getName( void ) const;
		void 		attack( void ) const;

	private:
		std::string	_name;
		Weapon &	_weapon;
};

#endif
