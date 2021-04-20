/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 20:15:32 by juyang            #+#    #+#             */
/*   Updated: 2021/04/04 20:15:33 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
private:
	Weapon& _weapon;
	std::string _name;
public:
	HumanA(std::string name, Weapon& weapon);
	virtual ~HumanA();
	void	attack(void);
};

#endif
