/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:33:21 by juyang            #+#    #+#             */
/*   Updated: 2021/04/15 16:33:22 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : _count(0), _unit(NULL)
{

}

Squad::Squad(Squad const &arg)
{
	this->_count = arg._count;
	this->_unit = new ISpaceMarine	*[arg._count];
	for (int i = 0; i < arg._count; i++)
	{
		this->_unit[i] = arg._unit[i]->clone();
	}
}

Squad::~Squad(void)
{
	if (this->_unit != NULL)
	{
		for (int i = 0; i < this->_count; i++)
			delete this->_unit[i];
		delete[] this->_unit;
	}
}

Squad&	Squad::operator=(Squad const &arg)
{
	this->_count = arg._count;
	this->_unit = new ISpaceMarine	*[arg._count];
	for (int i = 0; i < arg._count; i++)
	{
		this->_unit[i] = arg._unit[i]->clone();
	}

	return (*this);
}

int		Squad::getCount(void) const
{
	return (this->_count);
}

ISpaceMarine*	Squad::getUnit(int n) const
{
	if (n < 0 || n >= this->_count)
		return (NULL);
	else
		return (this->_unit[n]);
}

int		Squad::push(ISpaceMarine *marine)
{
	if (marine != NULL)
	{
		if (this->_unit != NULL)
		{
			ISpaceMarine	**temp = new ISpaceMarine *[this->_count + 1];
			for (int i = 0; i < this->_count; i++)
			{
				temp[i] = this->_unit[i];
			}
			temp[this->_count++] = marine; 
			delete[] this->_unit;
			this->_unit = temp;
		}
		else
		{
			this->_unit = new ISpaceMarine *[1];
			this->_unit[0] = marine;
			this->_count++;
		}
		
	}

	return (this->_count);
}