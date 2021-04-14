/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:33:35 by juyang            #+#    #+#             */
/*   Updated: 2021/04/06 16:33:35 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_hitPoints = 0;
	this->_maxHitPoints = 0;
	this->_energyPoints = 0;
	this->_maxEnergyPoints = 0;
	this->_level = 0;
	this->_name = std::string("CL4P-TP");
	this->_meleeAttackDamage = 0;
	this->_rangedAttackDamage = 0;
	this->_armorDamageReduction = 0;

	std::cout << "CLAP TRAP DEFAULT CONSTRUCTOR IS CALLED!" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name)
{
	this->_hitPoints = 0;
	this->_maxHitPoints = 0;
	this->_energyPoints = 0;
	this->_maxEnergyPoints = 0;
	this->_level = 0;
	this->_name = name;
	this->_meleeAttackDamage = 0;
	this->_rangedAttackDamage = 0;
	this->_armorDamageReduction = 0;
	
	std::cout << "CLAP TRAP NAME CONSTRUCTOR IS CALLED!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &arg)
{
	this->_hitPoints = arg.getHitPoints();
	this->_maxHitPoints = arg.getMaxHitPoints();
	this->_energyPoints = arg.getEnergyPoints();
	this->_maxEnergyPoints = arg.getMaxEnergyPoints();
	this->_level = arg.getLevel();
	this->_name = std::string(arg.getName());
	this->_meleeAttackDamage = arg.getMeleeAttackDamage();
	this->_rangedAttackDamage = arg.getRangedAttackDamage();
	this->_armorDamageReduction = arg.getArmorDamageReduction();

	std::cout << "CLAP TRAP COPY CONSTRUCTOR IS CALLED!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CLAP TRAP DESTRUCTOR IS CALLED!" << std::endl;	
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &arg)
{
	this->_hitPoints = arg.getHitPoints();
	this->_maxHitPoints = arg.getMaxHitPoints();
	this->_energyPoints = arg.getEnergyPoints();
	this->_maxEnergyPoints = arg.getMaxEnergyPoints();
	this->_level = arg.getLevel();
	this->_name = std::string(arg.getName());
	this->_meleeAttackDamage = arg.getMeleeAttackDamage();
	this->_rangedAttackDamage = arg.getRangedAttackDamage();
	this->_armorDamageReduction = arg.getArmorDamageReduction();
	return (*this);
}

void	ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "TR4P <" << this->getName() << "> attacks <" << target << "> at range, causing <" << this->getRangedAttackDamage() << "> points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "TR4P <" << this->getName() << "> attacks <" << target << "> at melee, causing <" << this->getMeleeAttackDamage() << "> points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints = this->_hitPoints - amount + this->_armorDamageReduction;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "TR4P <" << this->getName() << "> took " << amount << " Damage. his HP is " << this->getHitPoints() << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints = this->_hitPoints + amount;
	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	std::cout << "TR4P <" << this->getName() << "> was repaired " << amount << ". his HP is " << this->getHitPoints() << std::endl;
}

int		ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

int		ClapTrap::getMaxHitPoints(void) const
{
	return (this->_maxHitPoints);
}

int		ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int		ClapTrap::getMaxEnergyPoints(void) const
{
	return (this->_maxEnergyPoints);
}

int		ClapTrap::getLevel(void) const
{
	return (this->_level);
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int		ClapTrap::getMeleeAttackDamage(void) const
{
	return (this->_meleeAttackDamage);
}

int		ClapTrap::getRangedAttackDamage(void) const
{
	return (this->_rangedAttackDamage);
}

int		ClapTrap::getArmorDamageReduction(void) const
{
	return (this->_armorDamageReduction);
}

void	ClapTrap::setHitPoints(int const hitPoints)
{
	this->_hitPoints = hitPoints;
}

void	ClapTrap::setMaxHitPoints(int const maxHitPoints)
{
	this->_maxHitPoints = maxHitPoints;
}

void	ClapTrap::setEnergyPoints(int const energyPoints)
{
	this->_energyPoints = energyPoints;
}

void	ClapTrap::setMaxEnergyPoints(int const maxEnergyPoints)
{
	this->_maxEnergyPoints = maxEnergyPoints;
}

void	ClapTrap::setLevel(int const level)
{
	this->_level = level;
}

void	ClapTrap::setName(std::string const name)
{
	this->_name = name;
}

void	ClapTrap::setMeleeAttackDamage(int const meleeAttackDamage)
{
	this->_meleeAttackDamage = meleeAttackDamage;
}

void	ClapTrap::setRangedAttackDamage(int const rangedAttackDamage)
{
	this->_rangedAttackDamage = rangedAttackDamage;
}

void	ClapTrap::setArmorDamageReduction(int const armorDamageReduction)
{
	this->_armorDamageReduction = armorDamageReduction;
}