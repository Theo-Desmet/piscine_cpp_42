/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:22:07 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/08 17:10:15 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	harl;

	std::cout << "/***************************************/" << std::endl;
	std::cout << "call DEBUG fonction" << std::endl;
	harl.complain("DEBUG");
	std::cout << "/***************************************/" << std::endl;
	std::cout << "call INFO fonction" << std::endl;
	harl.complain("INFO");
	std::cout << "/***************************************/" << std::endl;
	std::cout << "call WARNING fonction" << std::endl;
	harl.complain("WARNING");
	std::cout << "/***************************************/" << std::endl;
	std::cout << "call ERROR fonction" << std::endl;
	harl.complain("ERROR");
	std::cout << "/***************************************/" << std::endl;
	std::cout << "call FOO fonction" << std::endl;
	harl.complain("FOO");
	std::cout << "/***************************************/" << std::endl;
	return (0);
}
