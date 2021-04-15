/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:16:40 by juyang            #+#    #+#             */
/*   Updated: 2021/04/14 20:16:40 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		std::string	_name;
		int	_AP;
		AWeapon	*_currentWeapon;

		Character(void);

	public:
		Character(std::string const &name);
		Character(Character const &arg);
		~Character(void);

		Character&	operator=(Character const &arg);

		void	recoverAP(void);
		void	equip(AWeapon *);
		void	attack(Enemy *);
		std::string const&	getName(void) const;
		int	const&	getAP(void) const;
		AWeapon* getCurrentWeapon(void) const;
};

std::ostream&	operator<<(std::ostream &os, Character const &arg);

#endif
