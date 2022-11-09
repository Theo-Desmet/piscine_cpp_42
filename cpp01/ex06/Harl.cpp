/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:31:37 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/09 08:38:13 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void	Harl::complain(std::string level)
{
	std::string level_buf[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (size_t i = 0; i < 4 ; i++)
	{
		if (level == level_buf[i])
			(this->*ptr[i])();
	}
}

void	Harl::filter(std::string level)
{
	std::string level_buf[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::size_t	i = 0;

	for (i; i < 4 ; i++)
	{
		if (level == level_buf[i])
			break;
	}
	switch(i)
	{
		case 0:
			Harl::debug();
			Harl::info();
			Harl::warning();
			Harl::error();
			break;
		case 1:
			Harl::info();
			Harl::warning();
			Harl::error();
			break;
		case 2:
			Harl::warning();
			Harl::error();
			break;
		case 3:
			Harl::error();
			break;
		default:
			break;
	}

}

void	Harl::debug(void)
{
	std::cout <<  "\033[1;34m[ DEBUG ]" << std::endl;
	std::cout <<  "this a debug message\033[1;0m" << std::endl << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout <<  "\033[1;33m[ INFO ]" << std::endl;
	std::cout <<  "this a info message\033[1;0m" << std::endl << std::endl;
	return ;
}
void	Harl::warning(void)
{
	std::cout <<  "\033[1;32m[ WARNING ]" << std::endl;
	std::cout <<  "this a warning message\033[1;0m" << std::endl << std::endl;
	return ;
}
void	Harl::error(void)
{
	std::cout <<  "\033[1;31m[ ERROR ]" << std::endl;
	std::cout <<  "this a error message\033[1;0m" << std::endl << std::endl;
	return ;
}
