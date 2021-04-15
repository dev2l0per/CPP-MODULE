/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:15:52 by juyang            #+#    #+#             */
/*   Updated: 2021/04/14 20:15:52 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{

}

PowerFist::PowerFist(PowerFist const &arg) : AWeapon(arg)
{

}

PowerFist::~PowerFist(void)
{

}

PowerFist&	PowerFist::operator=(PowerFist const &arg)
{
	AWeapon::operator=(arg);

	return (*this);
}

void	PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}