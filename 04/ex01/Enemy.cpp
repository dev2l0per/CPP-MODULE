/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:16:02 by juyang            #+#    #+#             */
/*   Updated: 2021/04/14 20:16:02 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Enemy.hpp"

Enemy::Enemy(void)
{

}

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type)
{

}

Enemy::Enemy(Enemy const &arg)
{
	this->_hp = arg.getHP();
	this->_type = arg.getType();
}

Enemy::~Enemy(void)
{

}

Enemy&	Enemy::operator=(Enemy const &arg)
{
	this->_hp = arg.getHP();
	this->_type = arg.getType();

	return (*this);
}

std::string const&	Enemy::getType(void) const
{
	return (this->_type);
}

int	Enemy::getHP(void) const
{
	return (this->_hp);
}

void	Enemy::takeDamage(int damage)
{
	if (damage >= 0)
	{
		this->_hp = this->_hp - damage;
		if (this->_hp < 0)
			this->_hp = 0;
	}
}