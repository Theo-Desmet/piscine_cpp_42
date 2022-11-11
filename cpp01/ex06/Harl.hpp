/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:25:17 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/09 09:29:59 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL2_0_EX06_HARL_H
#define HARL2_0_EX06_HARL_H

#include <iostream>

class Harl
{
	public:
		Harl( void );
		~Harl( void );

		void	complain( std::string level );
		void	filter( std::string level );

	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

};

#endif
