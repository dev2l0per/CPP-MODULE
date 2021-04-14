/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:03:48 by juyang            #+#    #+#             */
/*   Updated: 2021/04/06 16:03:48 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

std::string	FragTrap::_skillList[5] = {
	"FireBall!",
	"IceBlast!",
	"ElectricShock!",
	"StormWind!",
	"StoneEdge!"
};

FragTrap::FragTrap() : ClapTrap()
{
	this->setHitPoints(100);
	this->setMaxHitPoints(100);
	this->setEnergyPoints(100);
	this->setMaxEnergyPoints(100);
	this->setLevel(1);
	this->setName(std::string("FR4G-TP"));
	this->setMeleeAttackDamage(30);
	this->setRangedAttackDamage(20);
	this->setArmorDamageReduction(5);

	std::cout << "FRAG TRAP DEFAULT CONSTRUCTOR IS CALLED!" << std::endl;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setMaxHitPoints(100);
	this->setEnergyPoints(100);
	this->setMaxEnergyPoints(100);
	this->setLevel(1);
	this->setMeleeAttackDamage(30);
	this->setRangedAttackDamage(20);
	this->setArmorDamageReduction(5);

	std::cout << "FRAG TRAP NAME CONSTRUCTOR IS CALLED!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &arg) : ClapTrap(arg)
{
	std::cout << "FRAG TRAP COPY CONSTRUCTOR IS CALLED!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FRAG TRAP DESTRUCTOR IS CALLED!" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &arg)
{
	this->setHitPoints(arg.getHitPoints());
	this->setMaxHitPoints(arg.getMaxHitPoints());
	this->setEnergyPoints(arg.getEnergyPoints());
	this->setMaxEnergyPoints(arg.getMaxEnergyPoints());
	this->setLevel(arg.getLevel());
	this->setMeleeAttackDamage(arg.getMeleeAttackDamage());
	this->setRangedAttackDamage(arg.getRangedAttackDamage());
	this->setArmorDamageReduction(arg.getArmorDamageReduction());
	return (*this);
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->getEnergyPoints() < 25)
	{
		std::cout << this->getName() << " not enough energy point." << std::endl;
	}
	else
	{
		this->setEnergyPoints(this->getEnergyPoints() - 25);
		std::cout << "FR4G-TP <" << this->getName() << "> used " << this->_skillList[rand() % 5] << " to " << target << std::endl;
	}
}
