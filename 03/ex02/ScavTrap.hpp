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
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
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
};

#endif
