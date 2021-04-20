/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:35:47 by juyang            #+#    #+#             */
/*   Updated: 2021/04/15 18:35:48 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		this->_aMateria[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const &arg)
{
	for (int i = 0; i < 4; i++)
	{
		if (arg._aMateria[i] != NULL)
			this->_aMateria[i] = arg._aMateria[i]->clone();
		else
			this->_aMateria[i] = NULL;
	}
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_aMateria[i] != NULL)
			delete this->_aMateria[i];
	}
}

void	MateriaSource::learnMateria(AMateria *aMateria)
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

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_aMateria[i] != NULL)
		{
			if (this->_aMateria[i]->getType() == type)
				return (this->_aMateria[i]->clone());
		}
	}
	return NULL;
}