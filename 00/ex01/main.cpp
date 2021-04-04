/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:40:50 by juyang            #+#    #+#             */
/*   Updated: 2021/04/03 20:40:51 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	std::string input;
	Phonebook	phonebook;

	while (1)
	{
		phonebook.print_header();
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			Contact new_contact;
			new_contact.init_contact();
			phonebook.add_contact(new_contact);
		}
		else if (input == "SEARCH")
		{
			int		index;

			phonebook.print_phonebook();
			std::cout << "Enter Contact Index : ";
			std::cin >> index;
			phonebook.print_search_header();
			phonebook.search_contact(index);
			std::cout << "|";
			std::cout << std::setfill('-') << std::setw(44);
			std::cout << "|" << std::endl;
		}
		else if (input == "EXIT")
		{
			std::cout << "Juyang's Phonebook Exit" << std::endl;
			break ;
		}
		else
		{
			std::cout << "INVALID COMMAND" << std::endl;
		}
	}
	return (0);
}
