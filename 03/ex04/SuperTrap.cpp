/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:08:34 by juyang            #+#    #+#             */
/*   Updated: 2021/04/13 17:08:35 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : FragTrap(), NinjaTrap()
{
	// this->setHitPoints(this->FragTrap::getHitPoints());
	// this->setMaxHitPoints(this->FragTrap::getMaxHitPoints());
	// this->setEnergyPoints(this->NinjaTrap::getEnergyPoints());
	// this->setMaxEnergyPoints(this->NinjaTrap::getMaxEnergyPoints());
	// this->setEnergyPoints(100);
	// this->setMaxEnergyPoints(100);
	// this->setLevel(1);
	// this->setName(std::string("5UPER-TP"));
	// this->setMeleeAttackDamage(30);
	// this->setRangedAttackDamage(20);
	// this->setArmorDamageReduction(5);
}

SuperTrap::SuperTrap(std::string const &name) : FragTrap(name), NinjaTrap(name)
{
	// this->setHitPoints(100);
	// this->setMaxHitPoints(100);
	// this->setEnergyPoints(100);
	// this->setMaxEnergyPoints(100);
	// this->setLevel(1);
	// this->setMeleeAttackDamage(30);
	// this->setRangedAttackDamage(20);
	// this->setArmorDamageReduction(5);
}

SuperTrap::SuperTrap(SuperTrap const &arg)
{
}

SuperTrap::~SuperTrap()
{

}

SuperTrap	&SuperTrap::operator=(SuperTrap const &arg)
{
	// this->setHitPoints(arg.getHitPoints());
	// this->setMaxHitPoints(arg.getMaxHitPoints());
	// this->setEnergyPoints(arg.getEnergyPoints());
	// this->setMaxEnergyPoints(arg.getMaxEnergyPoints());
	// this->setLevel(arg.getLevel());
	// this->setMeleeAttackDamage(arg.getMeleeAttackDamage());
	// this->setRangedAttackDamage(arg.getRangedAttackDamage());
	// this->setArmorDamageReduction(arg.getArmorDamageReduction());
	return (*this);
}

// void	FragTrap::rangedAttack(std::string const &target)
// {
// 	std::cout << "FR4G-TP <" << this->getName() << "> attacks <" << target << "> at range, causing <" << this->getRangedAttackDamage() << "> points of damage!" << std::endl;
// }

// void	FragTrap::meleeAttack(std::string const &target)
// {
// 	std::cout << "FR4G-TP <" << this->getName() << "> attacks <" << target << "> at melee, causing <" << this->getMeleeAttackDamage() << "> points of damage!" << std::endl;
// }

// void	FragTrap::takeDamage(unsigned int amount)
// {
// 	this->setHitPoints(this->getHitPoints() - amount + this->getArmorDamageReduction());
// 	if (this->getHitPoints() < 0)
// 		this->setHitPoints(0);
// 	std::cout << "FR4G-TP <" << this->getName() << "> took " << amount << " Damage. his HP is " << this->getHitPoints() << std::endl;
// }

// void	FragTrap::beRepaired(unsigned int amount)
// {
// 	this->setHitPoints(this->getHitPoints() + amount);
// 	if (this->getHitPoints() > this->getMaxHitPoints())
// 		this->setHitPoints(this->getMaxHitPoints());
// 	std::cout << "FR4G-TP <" << this->getName() << "> was repaired " << amount << ". his HP is " << this->getHitPoints() << std::endl;
// }