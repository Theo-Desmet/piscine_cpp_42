/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 08:56:21 by tdesmet           #+#    #+#             */
/*   Updated: 2022/12/12 15:54:41 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <vector>

class Span {
	public:
		Span( void );
		Span( unsigned int size );
		Span( Span const & cpy );

		~Span( void );

		unsigned int getSize( void ) const;

		void			addNumber( int n );
		void			addNumber( std::vector<int>::iterator begin,
							std::vector<int>::iterator end);
		unsigned int	shortestSpan( void );
		unsigned int	longestSpan( void );

		class OutRangeSpan : public std::exception {
			char const * what() const throw() {
				return ("exception throw: index out of range of span");
			}
		};

		class EmptySpan : public std::exception {
			char const * what() const throw() {
				return ("exception throw: not enought element in span");
			}
		};

	private:
		unsigned int const	_size;
		std::vector<int>	_span;
};
