/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 19:02:01 by juyang            #+#    #+#             */
/*   Updated: 2021/04/03 19:02:01 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	this->_contact_count = 0;
}

Phonebook::~Phonebook()
{
}

void		Phonebook::add_contact(Contact contact)
{
	if (this->_contact_count >= 8)
	{
		std::cout << "Phonebook Full" << std::endl;
		return ;
	}
	this->_Contact[this->_contact_count] = contact;
	this->_contact_count++;
}

void		Phonebook::search_contact(int index)
{
	if (index < 0 || index >= 8 || index >= this->_contact_count)
		std::cout << "INVALID CONTACT" << std::endl;
	else
	{
		std::cout << std::setfill(' ');
		std::cout << "|";
		std::cout << std::setw(10) << index;
		std::cout << "|";
		print_data(this->_Contact[index].get_field("first name"));
		std::cout << "|";
		print_data(this->_Contact[index].get_field("last name"));
		std::cout << "|";
		print_data(this->_Contact[index].get_field("nickname"));
		std::cout << "|" << std::endl;
	}
}

void		Phonebook::print_header(void)
{
	std::cout << "Juyang's Phonebook" << std::endl;
	std::cout << "Enter your Command [ADD, SEARCH, EXIT] : ";	
}

void		Phonebook::print_data(std::string data)
{
	if (data.length() > 10)
		std::cout << data.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << data;
}

void		Phonebook::print_search_header(void)
{
	std::cout << "|";
	std::cout << std::setfill('-') << std::setw(44);
	std::cout << "|" << std::endl;
	std::cout << "|" << std::setfill(' ');
	std::cout << std::setw(10) << std::right << "index" << "|";
	std::cout << std::setw(10) << std::right << "first name" << "|";
	std::cout << std::setw(10) << std::right << "last name" << "|";
	std::cout << std::setw(10) << std::right << "nickname";
	std::cout << "|" << std::endl;
	std::cout << "|";
	std::cout << std::setfill('-') << std::setw(44);
	std::cout << "|" << std::endl;
}

void		Phonebook::print_phonebook(void)
{
	this->print_search_header();
	for (int i = 0; i < this->_contact_count; i++)
	{
		this->search_contact(i);
	}
	std::cout << "|";
	std::cout << std::setfill('-') << std::setw(44);
	std::cout << "|" << std::endl;
}