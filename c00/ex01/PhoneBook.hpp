/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 09:03:18 by tdesmet           #+#    #+#             */
/*   Updated: 2022/10/21 15:44:47 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "header.h"

class PhoneBook {

	public:
		PhoneBook(void);
		~PhoneBook(void);
		size_t	Add(size_t i);
		void	Search(void) const;
		void	IndexSearch(size_t i) const;

	private:
		Contact contact[8];
};
