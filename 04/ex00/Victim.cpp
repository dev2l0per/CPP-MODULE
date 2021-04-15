/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:52:38 by juyang            #+#    #+#             */
/*   Updated: 2021/04/14 18:52:39 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void)
{

}

Victim::Victim(std::string const &name) : _name(name)
{
	std::cout << "Some random victim called " << this->getName() << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &arg)
{
	this->_name = arg.getName();
	std::cout << "Some random victim called " << this->getName() << " just appeared!" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->getName() << " just died for no apparent reason!" << std::endl;
}

Victim&	Victim::operator=(Victim const &arg)
{
	this->setName(arg.getName());
	return (*this);
}

std::string	Victim::getName(void) const
{
	return (this->_name);
}

void	Victim::setName(std::string const &name)
{
	this->_name = name;
}

void	Victim::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream&	operator<<(std::ostream &os, Victim const &arg)
{
	os << "I'm " << arg.getName() << " and I like otters!" << std::endl;
	return (os);
}