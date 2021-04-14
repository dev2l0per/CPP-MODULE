/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:15:34 by juyang            #+#    #+#             */
/*   Updated: 2021/04/14 20:15:34 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	private:

	public:
		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const &arg);
		virtual ~PlasmaRifle(void);

		PlasmaRifle&	operator=(PlasmaRifle const &arg);

		virtual void	attack(void) const;
};

#endif
