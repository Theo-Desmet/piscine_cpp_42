/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:08:48 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/09 09:06:57 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HORDE_EX01_ZOMBIE_H
#define HORDE_EX01_ZOMBIE_H

#include <iostream>

class Zombie {

	public:
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );

		void		announce( void );
		void		setName( std::string name );
		std::string	getName( void ) const;

	private:

		std::string _name;
};

#endif
