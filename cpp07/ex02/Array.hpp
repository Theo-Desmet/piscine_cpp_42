/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:31:13 by tdesmet           #+#    #+#             */
/*   Updated: 2022/12/09 10:03:15 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

template <typename T>
class Array {
	public:
		Array( void ) : _size(0), _buff(new T[0]) {}

		Array( unsigned int n ) : _size(n), _buff(new T[n]) {}

		Array( Array const & cpy ) {
			this->_size = cpy.size();
			this->_buff = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++) {
				this->_buff[i] = cpy._buff[i];
			}
		}



		~Array( void ) {
			delete []this->_buff;
		}



		Array & operator=( Array const & cpy ) {
			this->_size = cpy.size();
			delete []this->_buff;
			this->_buff = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++) {
				this->_buff[i] = cpy._buff[i];
			}

			return (*this);
		}

		T &		operator[](unsigned int i) {
			if (i > this->_size)
				throw outRangeBuff();
			return (this->_buff[i]);
		}



		T *				getBuff( void ) const {
			return (this->_buff);
		}



		unsigned int	size( void ) const {
			return (this->_size);
		}

		void			show( void ) {
			std::cout << "size: " << this->_size << " , array: {";
			for (size_t i = 0; i < this->_size; i++) {
				std::cout << this->_buff[i];
				if (i < 3)
					std::cout << ", ";
			}
			std::cout << "}" << std::endl;
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
