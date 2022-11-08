/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:16:57 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/07 10:02:59 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class	Weapon {

	public:
		Weapon( void );
		Weapon( std::string	name );
		~Weapon( void );

		std::string const &	getType( void ) const;
		void 				setType( std::string );

	private:
		std::string	_type;

};

#endif
