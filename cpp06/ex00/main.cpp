/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 08:45:01 by tdesmet           #+#    #+#             */
/*   Updated: 2022/12/06 10:16:14 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctype.h>
#include <limits.h>
#include <float.h>

enum _type {DEFAULT, CHAR, INT, FLOAT, DOUBLE, FOO};

bool	check_is_number(std::string arg) {
	std::size_t	i = 0;
	bool		virgul = 0;

	if ((arg.at(0) == '+' || arg.at(0) == '-')) {
		i++;
	}
	while (i < arg.size()) {
		if (!isdigit(arg.at(i))) {
			if (arg.at(i) == 'f' && i + 1 == arg.size() && virgul) {
				return (1);
			} else if (arg.at(i) == '.' && !virgul) {
				virgul = 1;
			} else {
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int		research_is_char(std::string arg) {
	if (!isdigit(arg.at(0))) { //check not digit cas
		if (arg.size() == 1) {
			return (CHAR);
		} else if (arg == "nanf" || arg == "-inff" || arg == "+inff") {
			return (FLOAT);
		} else if (arg == "nan" || arg == "-inf" || arg == "+inf") {
			return (DOUBLE);
		} else if ((arg.at(0) == '+' || arg.at(0) == '-')
				&& (isdigit(arg.at(1)) || arg.at(1) == '.')){
			return (DEFAULT);
		} else if (arg.at(0) == '.' && (isdigit(arg.at(1)) || arg.at(1) == 'f')) {
			return (DEFAULT);
		} else {
			return (FOO);
		}
	}
	return (DEFAULT);
}

int		research_is_float(std::string arg) {
	if (!check_is_number(arg)){
		return (FOO);
	}
	if (arg.find(".") == std::string::npos) {
		if (arg.size() > 11 || atoll(arg.c_str()) > INT_MAX
				|| (arg.at(0) == '-' && atoll(arg.c_str()) < INT_MIN)) {
			return (DOUBLE);
		} else {
			return (INT);
		}
	} else if (arg.find(".") != std::string::npos
			&& arg.find("f") != std::string::npos) {
		return (FLOAT);
	} else if (arg.find(".") != std::string::npos
			&& arg.find("f") == std::string::npos){
		return (DOUBLE);
	}

	return (FOO);
}

int		search_type(std::string arg) {
	int	type = DEFAULT;

	type = research_is_char(arg);
	if (type == DEFAULT) {
		type = research_is_float(arg);
	}
	return (type);
}

void	conv_char(char char_val) {
	if (isprint(char_val)) {
		std::cout << "\033[1;32mchar: \033[1;0m"
			<< "\'" << char_val << "\'"<< std::endl;
	} else {
		std::cout << "\033[1;32mchar: \033[1;0mnon displayable" << std::endl;
	}
	std::cout << "\033[1;33mint: \033[1;0m"
		<< static_cast<int>(char_val) << std::endl;
	std::cout << "\033[1;34mfloat: \033[1;0m"
		<< static_cast<float>(char_val) << "f" << std::endl;
	std::cout << "\033[1;35mdouble: \033[1;0m"
		<< static_cast<double>(char_val) << std::endl;
}

void	conv_int(int int_val) {
	if (int_val < 0 || int_val > SCHAR_MAX) {
		std::cout << "\033[1;32mchar: \033[1;0mimpossible" << std::endl;
	} else if (isprint(int_val)) {
		std::cout << "\033[1;32mchar: \033[1;0m"
			<< "\'" << static_cast<char>(int_val) << "\'"<< std::endl;
	} else {
		std::cout << "\033[1;32mchar: \033[1;0mnon displayable" << std::endl;
	}

	std::cout << "\033[1;33mint: \033[1;0m"
		<< static_cast<int>(int_val) << std::endl;
	std::cout << "\033[1;34mfloat: \033[1;0m"
		<< static_cast<float>(int_val) << "f" << std::endl;
	std::cout << "\033[1;35mdouble: \033[1;0m"
		<< static_cast<double>(int_val) << std::endl;
}

void	conv_float(float float_val) {
	if (float_val != float_val || float_val < 0 || float_val > SCHAR_MAX) {
		std::cout << "\033[1;32mchar: \033[1;0mimpossible" << std::endl;
	} else if (isprint(float_val)) {
		std::cout << "\033[1;32mchar: \033[1;0m"
			<< "\'" << static_cast<char>(float_val) << "\'"<< std::endl;
	} else {
		std::cout << "\033[1;32mchar: \033[1;0mnon displayable" << std::endl;
	}

	if (static_cast<long long>(float_val)
				< static_cast<long long>(INT_MIN)
			|| static_cast<long long>(float_val)
				> static_cast<long long>(INT_MAX)) {
		std::cout << "\033[1;33mint: \033[1;0mimpossible" << std::endl;
	} else {
		std::cout << "\033[1;33mint: \033[1;0m"
			<< static_cast<int>(float_val) << std::endl;
	}

	std::cout << "\033[1;34mfloat: \033[1;0m"
		<< static_cast<float>(float_val) << "f" << std::endl;
	std::cout << "\033[1;35mdouble: \033[1;0m"
		<< static_cast<double>(float_val) << std::endl;
}

void	conv_double(double double_val) {
	if (double_val != double_val || double_val < 0 || double_val > SCHAR_MAX) {
		std::cout << "\033[1;32mchar: \033[1;0mimpossible" << std::endl;
	} else if (isprint(double_val)) {
		std::cout << "\033[1;32mchar: \033[1;0m"
			<< "\'" << static_cast<char>(double_val) << "\'"<< std::endl;
	} else {
		std::cout << "\033[1;32mchar: \033[1;0mnon displayable" << std::endl;
	}

	if (static_cast<long long>(double_val)
				< static_cast<long long>(INT_MIN)
			|| static_cast<long long>(double_val)
				> static_cast<long long>(INT_MAX)) {
		std::cout << "\033[1;33mint: \033[1;0mimpossible" << std::endl;
	} else {
		std::cout << "\033[1;33mint: \033[1;0m"
			<< static_cast<int>(double_val) << std::endl;
	}

	if (double_val != double_val) {
		std::cout << "\033[1;34mfloat: \033[1;0mnanf" << std::endl;
	} else if (double_val < -FLT_MAX) {
		std::cout << "\033[1;34mfloat: \033[1;0m-inff" << std::endl;

	} else if (double_val > FLT_MAX) {
		std::cout << "\033[1;34mfloat: \033[1;0m+inff" << std::endl;

	} else {
		std::cout << "\033[1;34mfloat: \033[1;0m"
			<< static_cast<float>(double_val) << "f" << std::endl;
	}

	std::cout << "\033[1;35mdouble: \033[1;0m"
		<< static_cast<double>(double_val) << std::endl;
}

int	main(int argc, char ** argv) {
	std::cout << std::fixed;
	if (argc != 2) {
		std::cout << "Error: invalide number of argument: ./cast <arg>" << std::endl;
		return (0);
	}

	std::string arg = argv[1];
	if (arg.empty()) {
		std::cout << "Error: empty argument: ./cast <arg>" << std::endl;
		return (0);
	}

	int		type;
	int		int_val;
	char	char_val;
	float	float_val;
	double	double_val;

	type = search_type(arg);
	switch(type) {
		case(CHAR):
			char_val = static_cast<char>(arg.at(0));
			conv_char(char_val);
			break ;
		case(INT):
			int_val = static_cast<int>(atoi(arg.c_str()));
			conv_int(int_val);
			break ;
		case(FLOAT):
			float_val = static_cast<float>(atof(arg.c_str()));
			conv_float(float_val);
			break ;
		case(DOUBLE):
			double_val = static_cast<double>(atof(arg.c_str()));
			conv_double(double_val);
			break ;
		default:
			return (0);
			break ;
	}

	return (0);
}
