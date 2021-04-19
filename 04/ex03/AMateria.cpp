/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:34:59 by juyang            #+#    #+#             */
/*   Updated: 2021/04/15 18:35:00 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria(void)
{
	this->_type = "";
	this->_xp = 0;
}

AMateria::AMateria(std::string const &arg) : _type(arg), _xp(0)
{
	
}

AMateria::AMateria(AMateria const &arg) : _type(arg._type), _xp(arg._xp)
{

}

AMateria::~AMateria(void)
{

}

AMateria&	AMateria::operator=(AMateria const &arg)
{
	this->_type = arg.getType();
	this->_xp = arg.getXP();

	return (*this);
}

std::string const&	AMateria::getType(void) const
{
	return (this->_type);
}

unsigned int	AMateria::getXP(void) const
{
	return (this->_xp);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp = this->_xp + 10;
}