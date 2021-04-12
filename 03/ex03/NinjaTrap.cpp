/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:50:44 by juyang            #+#    #+#             */
/*   Updated: 2021/04/06 17:50:44 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_name = std::string("N1NJ4-TP");
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap(std::string const &name) : ClapTrap(name)
{
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap(NinjaTrap const &arg) : ClapTrap(arg._name)
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

NinjaTrap::~NinjaTrap()
{

}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &arg)
{
	this->_hitPoints = arg.getHitPoints();
	this->_maxHitPoints = arg.getMaxHitPoints();
	this->_energyPoints = arg.getEnergyPoints();
	this->_maxEnergyPoints = arg.getMaxEnergyPoints();
	this->_level = arg.getLevel();
	this->_meleeAttackDamage = arg.getMeleeAttackDamage();
	this->_rangedAttackDamage = arg.getRangedAttackDamage();
	this->_armorDamageReduction = arg.getArmorDamageReduction();
	return (*this);
}
void	NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "N1NJ4-TP <" << this->getName() << "> attacks <" << target << "> at range, causing <" << this->getRangedAttackDamage() << "> points of damage!" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "N1NJ4-TP <" << this->getName() << "> attacks <" << target << "> at melee, causing <" << this->getMeleeAttackDamage() << "> points of damage!" << std::endl;
}

void	NinjaTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints = this->_hitPoints - amount + this->_armorDamageReduction;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "N1NJ4-TP <" << this->getName() << "> took " << amount << " Damage. his HP is " << this->getHitPoints() << std::endl;
}

void	NinjaTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints = this->_hitPoints + amount;
	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	std::cout << "N1NJ4-TP <" << this->getName() << "> was repaired " << amount << ". his HP is " << this->getHitPoints() << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	std::cout << "N1NJ4-TP <" << this->getName() << "> get ShoeBox FR4G-TP <" << trap.getName() << ">" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	std::cout << "NINJ4-TP <" << this->getName() << "> get ShoeBox SC4V-TP <" << trap.getName() << ">" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	std::cout << "N1NJ4-TP <" << this->getName() << "> get ShoeBox CL4P-TP <" << trap.getName() << ">" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	std::cout << "N1NJ4-TP <" << this->getName() << "> get ShoeBox N1NJ4-TP <" << trap.getName() << ">" << std::endl;
}