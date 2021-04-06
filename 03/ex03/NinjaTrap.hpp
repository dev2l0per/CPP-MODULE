/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:50:49 by juyang            #+#    #+#             */
/*   Updated: 2021/04/06 17:50:50 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	private:
	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const &arg);
		virtual ~NinjaTrap();
		NinjaTrap &operator=(NinjaTrap const &arg);

		void	meleeAttack(std::string const &target);
		void	rangedAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	ninjaShoebox(FragTrap &trap);
		void	ninjaShoebox(ScavTrap &trap);
		void	ninjaShoebox(ClapTrap &trap);
		void	ninjaShoebox(NinjaTrap &trap);
};

#endif
