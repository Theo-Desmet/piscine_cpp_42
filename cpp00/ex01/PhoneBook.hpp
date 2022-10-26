/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 09:03:18 by tdesmet           #+#    #+#             */
/*   Updated: 2022/10/26 09:05:47 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "header.h"

class PhoneBook {

	public:
		PhoneBook(void);
		~PhoneBook(void);
		size_t	add(size_t i);
		void	search(void) const;
		void	indexSearch(size_t i) const;

	private:
		Contact contact[8];
};
