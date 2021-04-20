/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Myclass.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 15:25:27 by juyang            #+#    #+#             */
/*   Updated: 2021/04/19 15:25:28 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Myclass.hpp"

Myclass::Myclass(void) : Victim()
{

}

Myclass::Myclass(std::string const &name) : Victim(name)
{
	std::cout << "Myclass is Created." << std::endl;
}

Myclass::Myclass(Myclass const &arg) : Victim(arg)
{
	std::cout << "Myclass is Created." << std::endl;
}

Myclass::~Myclass(void)
{
	std::cout << "Myclass is Deleted." << std::endl;
}

Myclass&	Myclass::operator=(Myclass const &arg)
{
	this->setName(arg.getName());

	return (*this);
}

void	Myclass::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a pink pony! (Myclass)" << std::endl;
}

std::ostream&	operator<<(std::ostream &os, Myclass const &arg)
{
	os << "I'm " << arg.getName() << " and I like otters! (Myclass)" << std::endl;
	return (os);
}
