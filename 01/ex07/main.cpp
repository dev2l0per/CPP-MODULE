/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 20:53:44 by juyang            #+#    #+#             */
/*   Updated: 2021/04/04 20:53:46 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int		main(int argc, char **argv)
{

	if (argc != 4)
		std::cout << "INVALID ARGUMENT" << std::endl;
	else
	{
		std::string	filename(argv[1]);
		std::string	s1(argv[2]);
		std::string	s2(argv[3]);
		std::ifstream	fin(filename, std::ios::in);
		std::ofstream	fout(filename + ".replace", std::ios::trunc | std::ios::out);
		std::string	line;

		if (!fin.is_open() || !fout.is_open())
		{
			std::cout << "FILE OPEN ERROR" << std::endl;
			return (0);
		}
		while (std::getline(fin, line))
		{
			size_t	pos;
			pos = line.find(s1);
			while (pos != std::string::npos)
			{
				line.replace(pos, s1.length(), s2);
				pos = line.find(s1, pos + s2.length());
			}
			fout << line;
			if (!fin.eof())
				fout << std::endl;
		}
	}
	return (0);
}
