/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:14:49 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/07 10:51:38 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
# include "Weapon.hpp"

class	HumanB {

	public:
		HumanB( std::string name);
		~HumanB( void );

		std::string getName( void ) const;
		void 		setWeapon( Weapon & );
		void 		attack( void ) const;

	private:
		std::string	_name;
		Weapon *	_weapon;
};

#endif
