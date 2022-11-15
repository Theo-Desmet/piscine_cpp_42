/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 08:37:45 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/15 15:42:59 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

float	norm(Point const a, Point const b, Point const point) {
	return(((a.getX_().toFloat() - point.getX_().toFloat())
			* (b.getY_().toFloat() - point.getY_().toFloat()))
			- ((a.getY_().toFloat() - point.getY_().toFloat())
			* (b.getX_().toFloat() - point.getX_().toFloat())));
}

bool	bsp( Point const a, Point const b, Point const c, Point const point) {
	float norm1, norm2, norm3;

	norm1 = norm(a, b, point);
	norm2 = norm(b, c, point);
	norm3 = norm(c, a, point);

	if ((norm1 > 0 && norm2 > 0 && norm3 > 0)
			|| (norm1 < 0 && norm2 < 0 && norm3 < 0))
		return (1);
	return (0);
}
