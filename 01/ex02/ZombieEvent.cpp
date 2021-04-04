/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:36:54 by juyang            #+#    #+#             */
/*   Updated: 2021/04/03 21:36:57 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->_type = "";
	std::cout << "ZombieEvent is Created" << std::endl;
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "ZombieEvent is Deleted" << std::endl;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie	*createZombie = new Zombie(name);

	createZombie->set_type(this->_type);
	createZombie->announce();
	return (createZombie);
}

Zombie*	ZombieEvent::randomChump(void)
{
	int	randNum = (rand() % 18);
	std::string	randpull[18] = {"jimkwon", "mki", "chmoon", "soekim", "sunmin", "soojeong", "sehan", "okwon", "ukwon", "wopark", "sayun", "yujeon", "jeongwle", "junghwki", "jihkang", "hyeonski", "hyeolee", "juyang"};

	return (newZombie(randpull[randNum]));
}