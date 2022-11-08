/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 07:53:41 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/08 14:56:34 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	replace_string(std::string line, std::string s1, std::string s2)
{
	std::size_t found = 0;

	while (1)
	{
		found = line.find(s1, found);
		if (found == std::string::npos)
			break;
		line.erase(found, s1.size());
		line.insert(found, s2);
		found += s2.length();
	}
	return(line);
}

int			main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "invalid number of arguments : <filename> <string1> <string2>" << std::endl;
		return (0);
	}

	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		line;
	std::string		filename = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];

	if (filename.empty() || s1.empty())
	{
		std::cout << "error empty arguments : <filename> <string1> <string2>" << std::endl;
		return (0);
	}
	infile.open(filename, std::ios::in);
	if (!infile.is_open())
	{
		std::cout << "error: " << filename << " can't be open"<<std::endl;
		return (0);
	}
	outfile.open(filename.append(".replace"), std::ios::out);
	if (!outfile.is_open())
	{
		std::cout << "error: " << filename.append(".replace") << " can't be open"<<std::endl;
		return (0);
	}

	while (std::getline(infile, line))
	{
		outfile << replace_string(line, s1, s2) << std::endl;
	}
	return (0);
}
