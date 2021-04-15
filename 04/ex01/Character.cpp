/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:16:45 by juyang            #+#    #+#             */
/*   Updated: 2021/04/14 20:16:45 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{

}

Character::Character(std::string const &name)
{
	this->_name = name;
	this->_AP = 40;
	this->_currentWeapon = NULL;
}

Character::Character(Character const &arg)
{
	this->_name = arg.getName();
	this->_AP = arg.getAP();
	this->_currentWeapon = arg.getCurrentWeapon();
}

Character::~Character(void)
{

}

void	Character::recoverAP(void)
{
	this->_AP = this->_AP + 10;
	if (this->_AP > 40)
		this->_AP = 40;
}

void	Character::equip(AWeapon *weapon)
{
	this->_currentWeapon = weapon;
}

void	Character::attack(Enemy *enemy)
{
	if (this->getCurrentWeapon() != NULL)
	{
		if (this->_AP - this->getCurrentWeapon()->getAPCost() >= 0)
		{
			this->_AP = this->_AP - this->getCurrentWeapon()->getAPCost();
			std::cout << this->getName() << " attacks " << enemy->getType() << " with " << this->getCurrentWeapon()->getName() << std::endl;
			this->getCurrentWeapon()->attack();
			enemy->takeDamage(this->getCurrentWeapon()->getDamage());

			if (enemy->getHP() <= 0)
				delete enemy;
		}
		else
		{
			std::cout << "Not Enough AP!" << std::endl;
		}
	}
	else
	{
		std::cout << "No Equip Weapon!" << std::endl;
	}
	
}

std::string const&	Character::getName(void) const
{
	return (this->_name);

}

int const&	Character::getAP(void) const
{
	return (this->_AP);
}

AWeapon*	Character::getCurrentWeapon(void) const
{
	return (this->_currentWeapon);
}

std::ostream&	operator<<(std::ostream &os, Character const &arg)
{
	if (arg.getCurrentWeapon() != NULL)
		os << arg.getName() << " has " << arg.getAP() << " AP and wields a " << arg.getCurrentWeapon()->getName() << std::endl;
	else
		os << arg.getName() << " has " << arg.getAP() << " AP and is unarmed" << std::endl;

	return (os);
}