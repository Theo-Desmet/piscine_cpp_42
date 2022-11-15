/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 07:48:17 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/15 15:05:10 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(float const x, float const y) : _x(x), _y(y) {}

Point::Point(Point const & cpy) : _x(cpy.getX_()), _y(cpy.getY_()) {}



Point::~Point() {}



Point & Point::operator=(Point const & hrs) {
	(void)hrs;
	return (*this);
}



Fixed	Point::getX_() const{
	return (this->_x);
}

Fixed	Point::getY_() const{
	return (this->_y);
}
