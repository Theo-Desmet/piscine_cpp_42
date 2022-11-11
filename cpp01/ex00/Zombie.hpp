/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:08:48 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/09 09:03:32 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAINZ_EX00_ZOMBIE_H
#define BRAINZ_EX00_ZOMBIE_H

#include <iostream>

class Zombie {

	public:
		Zombie( std::string name );
		~Zombie( void );

		void		announce( void );
		void		setName( std::string name );
		std::string	getName( void ) const;

	private:

		std::string _name;
};

#endif
