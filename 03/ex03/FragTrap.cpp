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
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setMaxHitPoints(100);
	this->setEnergyPoints(100);
	this->setMaxEnergyPoints(100);
	this->setLevel(1);
	this->setMeleeAttackDamage(30);
	this->setRangedAttackDamage(20);
	this->setArmorDamageReduction(5);
}

FragTrap::FragTrap(FragTrap const &arg) : ClapTrap(arg)
{
	this->setHitPoints(arg.getHitPoints());
	this->setMaxHitPoints(arg.getMaxHitPoints());
	this->setEnergyPoints(arg.getEnergyPoints());
	this->setMaxEnergyPoints(arg.getMaxEnergyPoints());
	this->setLevel(arg.getLevel());
	this->setMeleeAttackDamage(arg.getMeleeAttackDamage());
	this->setRangedAttackDamage(arg.getRangedAttackDamage());
	this->setArmorDamageReduction(arg.getArmorDamageReduction());
}

FragTrap::~FragTrap()
{

}

FragTrap	&FragTrap::operator=(FragTrap const &arg)
{
	this->setHitPoints(arg.getHitPoints());
	this->setMaxHitPoints(arg.getMaxHitPoints());
	this->setEnergyPoints(arg.getEnergyPoints());
	this->setMaxEnergyPoints(arg.getMaxEnergyPoints());
	this->setLevel(arg.getLevel());
	this->setMeleeAttackDamage(arg.getMeleeAttackDamage);
	this->setRangedAttackDamage(arg.getRangedAttackDamage());
	this->setArmorDamageReduction(arg.getArmorDamageReduction());
	return (*this);
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << this->getName() << "> attacks <" << target << "> at range, causing <" << this->getRangedAttackDamage() << "> points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << this->getName() << "> attacks <" << target << "> at melee, causing <" << this->getMeleeAttackDamage() << "> points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	this->setHitPoints(this->getHitPoints() - amount + this->getArmorDamageReduction());
	if (this->getHitPoints() < 0)
		this->setHitPoints(0);
	std::cout << "FR4G-TP <" << this->getName() << "> took " << amount << " Damage. his HP is " << this->getHitPoints() << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->setHitPoints(this->getHitPoints() + amount);
	if (this->getHitPoints() > this->getMaxHitPoints())
		this->setHitPoints(this->getMaxHitPoints());
	std::cout << "FR4G-TP <" << this->getName() << "> was repaired " << amount << ". his HP is " << this->getHitPoints() << std::endl;
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
