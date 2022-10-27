/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:42:22 by tdesmet           #+#    #+#             */
/*   Updated: 2022/10/27 11:26:36 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main()
{
	Zombie		zombie1("zombie1");
	zombie1.announce();

	Zombie *	zombie2 = newZombie("zombie2");
	zombie2->announce();

	randomChump("zombie3");
	delete(zombie2);
	return (0);
}
