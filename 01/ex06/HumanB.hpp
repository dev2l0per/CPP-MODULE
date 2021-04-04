/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 20:15:43 by juyang            #+#    #+#             */
/*   Updated: 2021/04/04 20:15:44 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
private:
	Weapon	*_weapon;
	std::string _name;
public:
	HumanB(std::string name);
	HumanB(std::string name, Weapon& weapon);
	virtual ~HumanB();
	void	attack(void);
	void	setWeapon(Weapon& weapon);
};

#endif
