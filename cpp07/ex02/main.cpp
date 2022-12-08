/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:40:50 by tdesmet           #+#    #+#             */
/*   Updated: 2022/12/08 17:09:12 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Array.hpp"

int main() {
	std::cout << "\033[1;37m***** init Array *****\033[1;0m" << std::endl;
	std::cout << "create int \033[1;34mdef_array\033[1;0m by default" << std::endl;
	Array<int>	def_array;
	def_array.show();

	std::cout << "create int \033[1;32mint_array\033[1;0m of size 4" << std::endl;
	Array<int>	int_array(4);
	for (size_t i = 0; i < 4; i++) {
		int_array[i] = i;
	}
	int_array.show();

	std::cout << "create int \033[1;33mcpy_array\033[1;0m of size 4 by copy" << std::endl;
	Array<int>	cpy_array(int_array);
	cpy_array.show();

	std::cout << "\033[1;34mdef_array\033[1;0m become equal at \033[1;32mint_array\033[1;0m by assignation" << std::endl;
	def_array = cpy_array;
	def_array.show();

	std::cout << "create string \033[1;35mstr_array\033[1;0m of size 4" << std::endl;
	Array<std::string>	str_array(4);
	for (size_t i = 0; i < 4; i++) {
		str_array[i] = "str";
	}
	str_array.show();



	std::cout << std::endl << "\033[1;37m***** test Array *****\033[1;0m" << std::endl;
	std::cout << "modif \033[1;33mcopy_array\033[1;0m with * 10" << std::endl;
	for (size_t i = 0; i < 4; i++) {
		cpy_array[i] = i * 10;
	}
	cpy_array.show();

	std::cout << "modif \033[1;34mdef_array\033[1;0m with * 100" << std::endl;
	for (size_t i = 0; i < 4; i++) {
		def_array[i] = i * 100;
	}
	def_array.show();

	std::cout << "modif \033[1;35mstr_array\033[1;0m with new string" << std::endl;
	for (size_t i = 0; i < 4; i++) {
		str_array[i] = "new_str";
	}
	str_array.show();

	std::cout << "\033[1;34mint_array\033[1;0m check copy" << std::endl;
	int_array.show();
}
