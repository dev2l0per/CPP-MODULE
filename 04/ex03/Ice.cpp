/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:35:09 by juyang            #+#    #+#             */
/*   Updated: 2021/04/15 18:35:10 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{

}

Ice::Ice(Ice const &arg) : AMateria(arg)
{

}

Ice::~Ice(void)
{

}

Ice&	Ice::operator=(Ice const &arg)
{
	AMateria::operator=(arg);
	
	return (*this);
}

AMateria*	Ice::clone(void) const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}