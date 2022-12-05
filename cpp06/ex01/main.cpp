/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 08:44:04 by tdesmet           #+#    #+#             */
/*   Updated: 2022/12/05 09:58:20 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

uintptr_t	serialize(Data * ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}


Data *	deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

int main() {
	std::cout << "\033[1;37m***** init data *****\033[1;0m" << std::endl;
	Data data;
	data.first_name = "theo";
	data.last_name = "desmet";
	data.phone_number = +3310613100730;
	data.age = 21;
	data.weight = 72.5;

	std::cout << "data address: " << &data << std::endl;
	std::cout << "first name: " << data.first_name << std::endl;
	std::cout << "last name: " << data.last_name << std::endl;
	std::cout << "phone_number: " << data.phone_number << std::endl;
	std::cout << "age: " << data.age << std::endl;
	std::cout << "weight: " << data.weight << std::endl;

	std::cout << std::endl << "\033[1;37m***** serialize data *****\033[1;0m" << std::endl;
	uintptr_t data_serialized = serialize(&data);
	std::cout << "serialized data: " << data_serialized << std::endl;
	std::cout << std::endl << "\033[1;37m***** deserialize data *****\033[1;0m" << std::endl;
	Data * out_data = deserialize(data_serialized);
	std::cout << "data address: " << out_data << std::endl;

	std::cout << std::endl << "\033[1;37m***** show new data *****\033[1;0m" << std::endl;
	std::cout << "data address: " << out_data << std::endl;
	std::cout << "first name: " << out_data->first_name << std::endl;
	std::cout << "last name: " << out_data->last_name << std::endl;
	std::cout << "phone_number: " << out_data->phone_number << std::endl;
	std::cout << "age: " << out_data->age << std::endl;
	std::cout << "weight: " << out_data->weight << std::endl;

	return (0);
}
