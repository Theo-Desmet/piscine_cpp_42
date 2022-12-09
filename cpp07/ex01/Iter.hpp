/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 09:46:21 by tdesmet           #+#    #+#             */
/*   Updated: 2022/12/09 08:28:42 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void	iter(T * buff, unsigned int size, void (*f)(T &)) {
	for (unsigned int i = 0; i < size; i++) {
		(*f)(buff[i]);
	}

	return ;
}
