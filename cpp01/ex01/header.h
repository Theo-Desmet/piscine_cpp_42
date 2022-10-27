/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:14:11 by tdesmet           #+#    #+#             */
/*   Updated: 2022/10/27 12:03:11 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <iostream>
# include "Zombie.hpp"

Zombie *	newZombie( std::string name );
Zombie *	zombieHorde( int N, std::string name );
void        randomChump( std::string name );

#endif