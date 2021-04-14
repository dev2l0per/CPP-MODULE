/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:52:16 by juyang            #+#    #+#             */
/*   Updated: 2021/04/14 18:52:17 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
}

Sorcerer::Sorcerer(std::string const &name, std::string const &title) : _name(name), _title(title)
{
	std::cout << this->getName() << ", " << this->getTitle() << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &arg)
{
	this->_name = arg.getName();
	this->_title = arg.getTitle();

	std::cout << this->getName() << ", " << this->getTitle() << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->getName() << ", " << this->getTitle() << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer&	Sorcerer::operator=(Sorcerer const &arg)
{
	this->setName(arg.getName());
	this->setTitle(arg.getTitle());
	return (*this);
}

std::string Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string Sorcerer::getTitle(void) const
{
	return (this->_title);
}

void	Sorcerer::setName(std::string const &name)
{
	this->_name = name;
}

void	Sorcerer::setTitle(std::string const &title)
{
	this->_title = title;
}

void	Sorcerer::polymorph(Victim const &arg) const
{
	arg.getPolymorphed();
}

std::ostream&	operator<<(std::ostream &os, Sorcerer const &arg)
{
	os << "I am " << arg.getName() << ", " << arg.getTitle() << ", and I like ponies!" << std::endl;
	return (os);
}