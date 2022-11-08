/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:14:49 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/07 10:51:12 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
# include "Weapon.hpp"

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
