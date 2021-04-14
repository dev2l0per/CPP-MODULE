/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:04:13 by juyang            #+#    #+#             */
/*   Updated: 2021/04/06 16:04:14 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

std::string	ScavTrap::_challenge[5] = {
	"Kill One",
	"Kill Two",
	"Kill Three",
	"Kill Four",
	"Kill Five"
};

ScavTrap::ScavTrap() : ClapTrap()
{
	this->setHitPoints(100);
	this->setMaxHitPoints(100);
	this->setEnergyPoints(50);
	this->setMaxEnergyPoints(50);
	this->setLevel(1);
	this->setName(std::string("SC4V-TP"));
	this->setMeleeAttackDamage(20);
	this->setRangedAttackDamage(15);
	this->setArmorDamageReduction(3);
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setMaxHitPoints(100);
	this->setEnergyPoints(50);
	this->setMaxEnergyPoints(50);
	this->setLevel(1);
	this->setMeleeAttackDamage(20);
	this->setRangedAttackDamage(15);
	this->setArmorDamageReduction(3);
}

ScavTrap::ScavTrap(ScavTrap const &arg) : ClapTrap(arg)
{
}

ScavTrap::~ScavTrap()
{

}

ScavTrap	&ScavTrap::operator=(ScavTrap const &arg)
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

void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP <" << this->getName() << "> attacks <" << target << "> at range, causing <" << this->getRangedAttackDamage() << "> points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP <" << this->getName() << "> attacks <" << target << "> at melee, causing <" << this->getMeleeAttackDamage() << "> points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	this->setHitPoints(this->getHitPoints() - amount + this->getArmorDamageReduction());
	if (this->getHitPoints() < 0)
		this->setHitPoints(0);
	std::cout << "SC4V-TP <" << this->getName() << "> took " << amount << " Damage. his HP is " << this->getHitPoints() << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->setHitPoints(this->getHitPoints() + amount);
	if (this->getHitPoints() > this->getMaxHitPoints())
		this->setHitPoints(this->getMaxHitPoints());
	std::cout << "SC4V-TP <" << this->getName() << "> was repaired " << amount << ". his HP is " << this->getHitPoints() << std::endl;
}

void	ScavTrap::challengeNewComer(void) const
{
	std::cout << "SC4V-TP <" << this->getName() << "> has new Challenge! (" << this->_challenge[rand() % 5] << ")" << std::endl;
}
