/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:39:54 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/21 11:41:17 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CPP04_EX00_BRAIN_H
#define ANIMAL_CPP04_EX00_BRAIN_H

#include <iostream>

class Brain {
	public:
		Brain( void );
		Brain( Brain const & cpy );

		~Brain( void );

		Brain & operator=( Brain const & cpy );

		std::string 	getIdeas( size_t index ) const;

	private:
		std::string	_ideas[100];
};

std::ostream &	operator<<(std::ostream & out, Brain const & hrs);

#endif
