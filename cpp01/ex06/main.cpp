/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:22:07 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/09 08:28:34 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int	argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Invalid number of argument: ./harl2.0 <level>" << std::endl;
		return (0);
	}

	Harl	harl;
	std::string level = argv[1];

	if (level.empty())
	{
		std::cout << "Error: argument <level> is empty" << std::endl;
		return (0);
	}
	harl.filter(level);
	return (0);
}
