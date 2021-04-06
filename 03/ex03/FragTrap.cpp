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
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_name = std::string("FR4G-TP");
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
}

FragTrap::FragTrap(FragTrap const &arg) : ClapTrap(arg.getName());
{
	this->_hitPoints = arg.getHitPoints();
	this->_maxHitPoints = arg.getMaxHitPoints();
	this->_energyPoints = arg.getEnergyPoints();
	this->_maxEnergyPoints = arg.getMaxEnergyPoints();
	this->_level = arg.getLevel();
	this->_meleeAttackDamage = arg.getMeleeAttackDamage();
	this->_rangedAttackDamage = arg.getRangedAttackDamage();
	this->_armorDamageReduction = arg.getArmorDamageReduction();

}

FragTrap::~FragTrap()
{

}

FragTrap	&FragTrap::operator=(FragTrap const &arg)
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
	this->_hitPoints = this->_hitPoints - amount + this->_armorDamageReduction;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "FR4G-TP <" << this->getName() << "> took " << amount << " Damage. his HP is " << this->getHitPoints() << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints = this->_hitPoints + amount;
	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	std::cout << "FR4G-TP <" << this->getName() << "> was repaired " << amount << ". his HP is " << this->getHitPoints() << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->_energyPoints < 25)
	{
		std::cout << this->getName() << " not enough energy point." << std::endl;
	}
	else
	{
		this->_energyPoints = this->_energyPoints - 25;
		std::cout << "FR4G-TP <" << this->getName() << "> used " << this->_skillList[rand() % 5] << " to " << target << std::endl;
	}
}
