/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:31:13 by tdesmet           #+#    #+#             */
/*   Updated: 2022/12/06 14:39:12 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>

template <typename T>
class Array {
	public:
		Array( void ) : _size(0), _buff(new T[0]) {}

		Array( unsigned int n ) {
			if (n < 0)
				;
			this->_size = n;
			this->_buff = new T[n];
		}

		Array( Array const & cpy ) {
			this->_size = cpy.size();
			for (unsigned int i = 0; i < this->_size; i++) {
				this->_buff[i] = cpy.getBuff()[i];
			}
		}



		~Array( void ) {
			delete (this->_buff);
		}



		Array & operator=( Array const & cpy ) {
			this->_size = cpy.size();
			delete (this->_buff);
			for (unsigned int i = 0; i < this->_size; i++) {
				this->_buff[i] = cpy.getBuff()[i];
			}
		}



		T *				getBuff( void ) const {
			return (this->_buff);
		}



		unsigned int	size( void ) const {
			return (this->_size);
		}



		class outRangeBuff : public std::exception {
			public:
				const char* what() const throw() {
					return ("invalide index use");
				}
		};

	private:
		unsigned int	_size;
		T *				_buff;
};
