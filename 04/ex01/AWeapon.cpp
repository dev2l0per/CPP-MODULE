/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:15:23 by juyang            #+#    #+#             */
/*   Updated: 2021/04/14 20:15:24 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{

}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _damage(damage), _apcost(apcost)
{
	
}

AWeapon::AWeapon(AWeapon const &arg) : _name(arg.getName()), _damage(arg.getDamage()), _apcost(arg.getAPCost())
{

}

AWeapon::~AWeapon(void)
{

}

AWeapon&	AWeapon::operator=(AWeapon const &arg)
{
	this->_name = arg.getName();
	this->_damage = arg.getDamage();
	this->_apcost = arg.getAPCost();
	
	return (*this);
}

std::string	const&	AWeapon::getName() const
{
	return (this->_name);
}

int		AWeapon::getAPCost() const
{
	return (this->_apcost);
}

int		AWeapon::getDamage() const
{
	return (this->_damage);
}