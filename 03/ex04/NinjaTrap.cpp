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
	this->setHitPoints(60);
	this->setMaxHitPoints(60);
	this->setEnergyPoints(120);
	this->setMaxEnergyPoints(120);
	this->setLevel(1);
	this->setName(std::string("N1NJ4-TP"));
	this->setMeleeAttackDamage(60);
	this->setRangedAttackDamage(5);
	this->setArmorDamageReduction(0);
}

NinjaTrap::NinjaTrap(std::string const &name) : ClapTrap(name)
{
	this->setHitPoints(60);
	this->setMaxHitPoints(60);
	this->setEnergyPoints(120);
	this->setMaxEnergyPoints(120);
	this->setLevel(1);
	this->setMeleeAttackDamage(60);
	this->setRangedAttackDamage(5);
	this->setArmorDamageReduction(0);
}

NinjaTrap::NinjaTrap(NinjaTrap const &arg) : ClapTrap(arg)
{
}

NinjaTrap::~NinjaTrap()
{

}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &arg)
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
	this->setHitPoints(this->getHitPoints() - amount + this->getArmorDamageReduction());
	if (this->getHitPoints() < 0)
		this->setHitPoints(0);
	std::cout << "N1NJ4-TP <" << this->getName() << "> took " << amount << " Damage. his HP is " << this->getHitPoints() << std::endl;
}

void	NinjaTrap::beRepaired(unsigned int amount)
{
	this->setHitPoints(this->getHitPoints() + amount);
	if (this->getHitPoints() > this->getMaxHitPoints())
		this->setHitPoints(this->getMaxHitPoints());
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