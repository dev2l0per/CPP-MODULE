/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:33:46 by juyang            #+#    #+#             */
/*   Updated: 2021/04/15 16:33:46 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &arg)
{
	(void)arg;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator&	AssaultTerminator::operator=(AssaultTerminator const &arg)
{
	(void)arg;

	return (*this);
}

ISpaceMarine*	AssaultTerminator::clone(void) const
{
	return new AssaultTerminator(*this);
}

void	AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFTY IT!" << std::endl;
}

void	AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists" << std::endl;
}