/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:35:29 by juyang            #+#    #+#             */
/*   Updated: 2021/04/15 18:35:30 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("")
{
	for (int i = 0; i < 4; i++)
		this->_aMateria[i] = NULL;
}

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_aMateria[i] = NULL;
}

Character::Character(Character const &arg) : _name(arg._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (arg._aMateria[i] != NULL)
			this->_aMateria[i] = arg._aMateria[i]->clone();
		else
			this->_aMateria[i] = NULL;
	}
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_aMateria[i] != NULL)
			delete this->_aMateria[i];
	}
}

Character&	Character::operator=(Character const &arg)
{
	this->_name = arg.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->_aMateria[i] != NULL)
			delete this->_aMateria[i];
		if (arg._aMateria[i] != NULL)
			this->_aMateria[i] = arg._aMateria[i]->clone();
		else
			this->_aMateria[i] = NULL;
	}
	
	return (*this);
}

std::string const&	Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *aMateria)
{
	if (aMateria == NULL)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_aMateria[i] == NULL)
		{
			this->_aMateria[i] = aMateria;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (this->_aMateria[idx] == NULL)
		return ;
	delete this->_aMateria[idx];
	this->_aMateria[idx] = NULL;
	for (int i = idx; i < 3; i++)
	{
		this->_aMateria[i] = this->_aMateria[i + 1];
		this->_aMateria[i + 1] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (this->_aMateria[idx] != NULL)
		this->_aMateria[idx]->use(target);
}