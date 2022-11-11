/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:15:21 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/11 08:09:36 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main() {
  std::cout << "\033[1;33m";
  {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
  }
  std::cout << "\033[1;32m" << std::endl;
  {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
  }
  std::cout << "\033[1;31m" << std::endl;
  {
    Weapon club = Weapon("crude spiked club");
    HumanB billy("billy");
    billy.attack();
    billy.setWeapon(club);
    billy.attack();
  }
  std::cout << "\033[1;0m";
  return 0;
}
