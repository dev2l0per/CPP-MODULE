/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:35:18 by juyang            #+#    #+#             */
/*   Updated: 2021/04/15 18:35:18 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{

}

Cure::Cure(Cure const &arg) : AMateria(arg)
{

}

Cure::~Cure(void)
{

}

Cure&	Cure::operator=(Cure const &arg)
{
	AMateria::operator=(arg);
	
	return (*this);
}

AMateria*	Cure::clone(void) const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}