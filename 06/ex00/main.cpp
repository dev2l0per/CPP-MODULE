/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 14:28:32 by juyang            #+#    #+#             */
/*   Updated: 2021/04/20 14:28:32 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Converter.hpp"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error : Invalid Argument" << std::endl;
		return (0);
	}

	Converter converter;
	converter.convert(std::string(argv[1]));

	return (0);
}
