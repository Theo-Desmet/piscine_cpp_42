/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 10:32:19 by tdesmet           #+#    #+#             */
/*   Updated: 2022/12/12 16:11:58 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <vector>
#include <limits.h>

#include "Span.hpp"

Span::Span() : _size(0) {}

Span::Span(unsigned int size) : _size(size) {}

Span::Span(Span const & cpy) : _size(cpy._size), _span(cpy._span) {}



Span::~Span() {}



unsigned int	Span::getSize() const {
	return (this->_size);
}



void			Span::addNumber(int n) {
	if (this->_span.size() ==  this->_size)
		throw OutRangeSpan();
	_span.push_back(n);
}

void			Span::addNumber(std::vector<int>::iterator begin,
					std::vector<int>::iterator end) {
	if (std::distance(begin, end) + this->_span.size() >  this->_size)
		throw OutRangeSpan();
	_span.insert(this->_span.end(), begin, end);
}

unsigned int	Span::shortestSpan() {
	if (this->_span.size() < 2)
		throw EmptySpan();

	int	min = INT_MAX;
	std::sort(_span.begin(), _span.end());
	for (size_t i = 0; i < this->_span.size() - 1; i++) {
		if (min > this->_span.at(i + 1) - this->_span.at(i))
			min = this->_span.at(i + 1) - this->_span.at(i);
	}

	return (min);
}

unsigned int	Span::longestSpan() {
	if (this->_span.size() < 2)
		throw EmptySpan();

	std::sort(_span.begin(), _span.end());
	return (*std::max_element(this->_span.begin(), this->_span.end())
			- *std::min_element(this->_span.begin(), this->_span.end()));
}
