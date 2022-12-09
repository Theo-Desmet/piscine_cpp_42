/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:40:50 by tdesmet           #+#    #+#             */
/*   Updated: 2022/12/09 10:14:07 by tdesmet          ###   ########.fr       */
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


// #include <iostream>
// #include "Array.hpp"
// #include <cstdlib>


// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
// 	std::cout << "test" << std::endl;
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

// 	std::cout << "test" << std::endl;
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
// 	std::cout << "test" << std::endl;
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

// 	std::cout << "test" << std::endl;
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
// 	std::cout << "ahhhhhhhhh" << std::endl;
//     return 0;
// }
