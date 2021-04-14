/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:04:19 by juyang            #+#    #+#             */
/*   Updated: 2021/04/06 16:04:19 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>

class ScavTrap
{
	private:
		int _hitPoints;
		int _maxHitPoints;
		int _energyPoints;
		int _maxEnergyPoints;
		int _level;
		std::string _name;
		int _meleeAttackDamage;
		int _rangedAttackDamage;
		int _armorDamageReduction;

		static std::string	_challenge[5];
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &arg);
		virtual ~ScavTrap();
		ScavTrap	&operator=(ScavTrap	const &arg);
		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	challengeNewComer(void) const;
		
		int	getHitPoints(void) const;
		int getMaxHitPoints(void) const;
		int getEnergyPoints(void) const;
		int getMaxEnergyPoints(void) const;
		int getLevel(void) const;
		std::string getName(void) const;
		int getMeleeAttackDamage(void) const;
		int getRangedAttackDamage(void) const;
		int getArmorDamageReduction(void) const;
};

#endif
