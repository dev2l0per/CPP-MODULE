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

SuperTrap::SuperTrap() : ClapTrap(), FragTrap(), NinjaTrap()
{
	this->FragTrap::setHitPoints(100);
	this->FragTrap::setMaxHitPoints(100);
	this->FragTrap::setEnergyPoints(120);
	this->FragTrap::setMaxEnergyPoints(120);
	this->FragTrap::setLevel(1);
	this->FragTrap::setName(std::string("5UPER-TP"));
	this->FragTrap::setMeleeAttackDamage(60);
	this->FragTrap::setRangedAttackDamage(20);
	this->FragTrap::setArmorDamageReduction(5);

	std::cout << "SUPER TRAP DEFAULT CONSTRUCTOR IS CALLED!" << std::endl;
}

SuperTrap::SuperTrap(std::string const &name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	this->FragTrap::setHitPoints(100);
	this->FragTrap::setMaxHitPoints(100);
	this->FragTrap::setEnergyPoints(120);
	this->FragTrap::setMaxEnergyPoints(120);
	this->FragTrap::setLevel(1);
	this->FragTrap::setMeleeAttackDamage(60);
	this->FragTrap::setRangedAttackDamage(20);
	this->FragTrap::setArmorDamageReduction(5);

	std::cout << "SUPER TRAP NAME CONSTRUCTOR IS CALLED!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &arg) : ClapTrap(arg), FragTrap(arg), NinjaTrap(arg)
{
	std::cout << "SUPER TRAP COPY CONSTRUCTOR IS CALLED!" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SUPER TRAP DESTRUCTOR IS CALLED!" << std::endl;
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &arg)
{
	this->FragTrap::setHitPoints(arg.getHitPoints());
	this->FragTrap::setMaxHitPoints(arg.getMaxHitPoints());
	this->FragTrap::setEnergyPoints(arg.getEnergyPoints());
	this->FragTrap::setMaxEnergyPoints(arg.getMaxEnergyPoints());
	this->FragTrap::setLevel(arg.getLevel());
	this->FragTrap::setMeleeAttackDamage(arg.getMeleeAttackDamage());
	this->FragTrap::setRangedAttackDamage(arg.getRangedAttackDamage());
	this->FragTrap::setArmorDamageReduction(arg.getArmorDamageReduction());
	return (*this);
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}