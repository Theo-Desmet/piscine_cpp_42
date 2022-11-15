/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 07:35:06 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/15 15:00:56 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSP_CPP02_EX03_POINT_H
#define BSP_CPP02_EX03_POINT_H

#include "Fixed.hpp"

class Point {
	public:
		Point( void );
		Point( float const x, float const y );
		Point( Point const & cpy );

		~Point( void );

		Point & operator=( Point const & hrs );

		Fixed	getX_( void ) const;
		Fixed	getY_( void ) const;

	private:
		Fixed const _x;
		Fixed const _y;

};

#endif
