/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 18:54:57 by juyang            #+#    #+#             */
/*   Updated: 2021/04/03 18:54:59 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set_first_name(std::string first_name)
{
	this->_first_name = first_name;
}

void	Contact::set_last_name(std::string last_name)
{
	this->_last_name = last_name;
}

void	Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
}

void	Contact::set_login(std::string login)
{
	this->_login = login;
}

void	Contact::set_postal_address(std::string postal_address)
{
	this->_postal_address = postal_address;
}

void	Contact::set_email_address(std::string email_address)
{
	this->_email_address = email_address;
}

void	Contact::set_phone_number(std::string phone_number)
{
	this->_phone_number = phone_number;
}

void	Contact::set_birthday_date(std::string birthday_date)
{
	this->_birthday_date = birthday_date;
}

void	Contact::set_favorite_meal(std::string favorite_meal)
{
	this->_favorite_meal = favorite_meal;
}

void	Contact::set_underwear_color(std::string underwear_color)
{
	this->_underwear_color = underwear_color;
}

void	Contact::set_darkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}

std::string	Contact::get_field(std::string data)
{
	if (data == "first name")
		return this->_first_name;
	else if (data == "last name")
		return this->_last_name;
	else if (data == "nickname")
		return this->_nickname;
	else
		return "Invalid Field";
}

void		Contact::init_contact(void)
{
	std::string input;

	std::cout << "Enter Your First Name : ";
	std::cin >> input;
	this->set_first_name(input);
	std::cout << "Enter Your Last Name : ";
	std::cin >> input;
	this->set_last_name(input);
	std::cout << "Enter Your Nickname : ";
	std::cin >> input;
	this->set_nickname(input);
	std::cout << "Enter Your Login : ";
	std::cin >> input;
	this->set_login(input);
	std::cout << "Enter Your Postal Address : ";
	std::cin >> input;
	this->set_postal_address(input);
	std::cout << "Enter Your Email Address : ";
	std::cin >> input;
	this->set_email_address(input);
	std::cout << "Enter Your Phone Number : ";
	std::cin >> input;
	this->set_phone_number(input);
	std::cout << "Enter Your Birthdat Date : ";
	std::cin >> input;
	this->set_birthday_date(input);
	std::cout << "Enter Your Favorite Meal : ";
	std::cin >> input;
	this->set_favorite_meal(input);
	std::cout << "Enter Your Underwear Color : ";
	std::cin >> input;
	this->set_underwear_color(input);
	std::cout << "Enter Your Darkest Secret : ";
	std::cin >> input;
	this->set_darkest_secret(input);
}