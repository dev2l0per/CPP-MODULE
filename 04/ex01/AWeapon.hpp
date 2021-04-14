/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:15:19 by juyang            #+#    #+#             */
/*   Updated: 2021/04/14 20:15:20 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
	private:
		std::string _name;
		int	_damage;
		int	_apcost;

		AWeapon(void);

	public:
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(AWeapon const &arg);
		virtual ~AWeapon(void);

		AWeapon&	operator=(AWeapon const &arg);

		std::string const& getName() const;
		int	getAPCost() const;
		int getDamage()	const;

		virtual void	attack() const = 0;
};

#endif
