/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:33:40 by juyang            #+#    #+#             */
/*   Updated: 2021/04/06 16:33:41 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	protected:
		int	_hitPoints;
		int	_maxHitPoints;
		int	_energyPoints;
		int	_maxEnergyPoints;
		int	_level;
		std::string	_name;
		int	_meleeAttackDamage;
		int	_rangedAttackDamage;
		int	_armorDamageReduction;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &arg);
		virtual ~ClapTrap();
		ClapTrap	&operator=(ClapTrap const &arg);
		virtual void	rangedAttack(std::string const &target);
		virtual void	meleeAttack(std::string const &target);
		virtual void	takeDamage(unsigned int amount);
		virtual void	beRepaired(unsigned int amount);
		
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
