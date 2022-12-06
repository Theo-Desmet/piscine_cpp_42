/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 09:08:55 by tdesmet           #+#    #+#             */
/*   Updated: 2022/12/06 09:29:01 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void	swap(T &a, T &b) {
	T c = a;
	a = b;
	b = c;
}

template <typename T>
T		min(T a, T b) {
	return ((a < b) ? a : b);
}

template <typename T>
T		max(T a, T b) {
	return ((a > b) ? a : b);
}
