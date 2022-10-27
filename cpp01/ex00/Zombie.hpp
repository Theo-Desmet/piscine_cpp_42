/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:08:48 by tdesmet           #+#    #+#             */
/*   Updated: 2022/10/27 10:27:01 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include "header.h"

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
