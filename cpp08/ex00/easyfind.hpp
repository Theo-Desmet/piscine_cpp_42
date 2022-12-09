/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:39:34 by tdesmet           #+#    #+#             */
/*   Updated: 2022/12/09 16:29:46 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>

template <typename T>
bool	easyfind(T &a, int to_find) {
	return (std::find(a.begin(), a.end(), to_find) != a.end());
}
