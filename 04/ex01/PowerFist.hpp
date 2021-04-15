/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:15:47 by juyang            #+#    #+#             */
/*   Updated: 2021/04/14 20:15:48 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	private:
	
	public:
		PowerFist(void);
		PowerFist(PowerFist const &arg);
		virtual ~PowerFist(void);

		PowerFist&	operator=(PowerFist const &arg);

		virtual void	attack(void) const;
};

#endif
