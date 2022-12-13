/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:56:39 by tdesmet           #+#    #+#             */
/*   Updated: 2022/12/13 13:43:50 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
	public:
		MutantStack( void ) : std::stack<T, Container>() {}

		MutantStack( MutantStack<T, Container> const & cpy )
			: std::stack<T, Container>::stack(cpy) {}



		~MutantStack( void ) {}



		MutantStack & operator=(MutantStack<T, Container> const & cpy) {
			if (this != cpy){
				this->MutantStack<T, Container>::stack::operator=(cpy);
			}
			return (*this);
		}



		typedef typename Container::iterator 			iterator;
		typedef typename Container::const_iterator		const_iterator;
		typedef typename Container::reverse_iterator	reverse_iterator;

		iterator	begin() {
			return(this->c.begin());
		}

		iterator	end() {
			return(this->c.end());
		}

		const_iterator	cbegin() {
			return(this->c.begin());
		}

		const_iterator	cend() {
			return (this->c.end());
		}

		reverse_iterator	rbegin() {
			return(this->c.rbegin());
		}

		reverse_iterator	rend() {
			return (this->c.rend());
		}
};
