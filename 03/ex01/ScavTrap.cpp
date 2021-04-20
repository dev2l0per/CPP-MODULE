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

ScavTrap::ScavTrap()
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_name = std::string("SC4V-TP");
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;

	std::cout << "Scav Trap DEFAULT Constructor Called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;

	std::cout << "Scav Trap NAME Constructor Called!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &arg)
{
	this->_hitPoints = arg.getHitPoints();
	this->_maxHitPoints = arg.getMaxHitPoints();
	this->_energyPoints = arg.getEnergyPoints();
	this->_maxEnergyPoints = arg.getMaxEnergyPoints();
	this->_level = arg.getLevel();
	this->_name = arg.getName();
	this->_meleeAttackDamage = arg.getMeleeAttackDamage();
	this->_rangedAttackDamage = arg.getRangedAttackDamage();
	this->_armorDamageReduction = arg.getArmorDamageReduction();

	std::cout << "Scav Trap COPY Constructor Called!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav Trap Destructor Called!" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &arg)
{
	this->_hitPoints = arg.getHitPoints();
	this->_maxHitPoints = arg.getMaxHitPoints();
	this->_energyPoints = arg.getEnergyPoints();
	this->_maxEnergyPoints = arg.getMaxEnergyPoints();
	this->_level = arg.getLevel();
	this->_name = arg.getName();
	this->_meleeAttackDamage = arg.getMeleeAttackDamage();
	this->_rangedAttackDamage = arg.getRangedAttackDamage();
	this->_armorDamageReduction = arg.getArmorDamageReduction();
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
	this->_hitPoints = this->_hitPoints - amount + this->_armorDamageReduction;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "SC4V-TP <" << this->getName() << "> took " << amount << " Damage. his HP is " << this->getHitPoints() << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints = this->_hitPoints + amount;
	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	std::cout << "SC4V-TP <" << this->getName() << "> was repaired " << amount << ". his HP is " << this->getHitPoints() << std::endl;
}

void	ScavTrap::challengeNewcomer(void) const
{
	std::cout << "SC4V-TP <" << this->getName() << "> has new Challenge! (" << this->_challenge[rand() % 5] << ")" << std::endl;
}

int		ScavTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

int		ScavTrap::getMaxHitPoints(void) const
{
	return (this->_maxHitPoints);
}

int		ScavTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int		ScavTrap::getMaxEnergyPoints(void) const
{
	return (this->_maxEnergyPoints);
}

int		ScavTrap::getLevel(void) const
{
	return (this->_level);
}

std::string	ScavTrap::getName(void) const
{
	return (this->_name);
}

int		ScavTrap::getMeleeAttackDamage(void) const
{
	return (this->_meleeAttackDamage);
}

int		ScavTrap::getRangedAttackDamage(void) const
{
	return (this->_rangedAttackDamage);
}

int		ScavTrap::getArmorDamageReduction(void) const
{
	return (this->_armorDamageReduction);
}
