/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 19:08:29 by juyang            #+#    #+#             */
/*   Updated: 2021/04/04 19:08:29 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->_name = "";
	this->_type = "";
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	this->_type = "";
	std::cout << this->_name << " is Born!" << std::endl;
}

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
	std::cout << this->_name << " is Born!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " is Dead!" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

std::string	Zombie::get_name(void)
{
	return (this->_name);
}

std::string Zombie::get_type(void)
{
	return (this->_type);
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}

void	Zombie::set_type(std::string type)
{
	this->_type = type;
}
