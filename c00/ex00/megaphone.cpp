/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:41:06 by tdesmet           #+#    #+#             */
/*   Updated: 2022/10/20 09:05:27 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv) {
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (size_t i = 1; i < argc; i++) {
		std::string str = argv[i];
		for (size_t j = 0; j < str.size(); j++) {
			str.at(j) = std::toupper(str.at(j));
		}
		std::cout << str;
	}
	std::cout << std::endl;
}






























































