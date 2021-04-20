/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 19:08:53 by juyang            #+#    #+#             */
/*   Updated: 2021/04/04 19:08:53 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	this->_type = "";
	this->_count = 0;
	if (N > 0)
	{
		this->_zombieCrowd = new Zombie[N];
		this->_count = N;
		for (int i = 0; i < N; i++)
		{
			this->_zombieCrowd[i].set_name(randomName());
			this->_zombieCrowd[i].set_type(this->_type);
			this->_zombieCrowd[i].announce();
		}
		std::cout << this->_count << " Zombies are Born !" << std::endl;
	}
	else
	{
		std::cout << "Not Enough Zombie Cnt!" << std::endl;
	}
}

ZombieHorde::ZombieHorde(std::string type, int N)
{
	this->_type = type;
	this->_count = 0;
	if (N > 0)
	{
		this->_count = N;
		this->_zombieCrowd = new Zombie[N];
		for (int i = 0; i < N; i++)
		{
			this->_zombieCrowd[i].set_name(randomName());
			this->_zombieCrowd[i].set_type(this->_type);
			this->_zombieCrowd[i].announce();
		}
		std::cout << this->_count << " Zombies are Born !" << std::endl;
	}
	else
	{
		std::cout << "Not Enough Zombie Cnt!" << std::endl;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->_zombieCrowd;
	std::cout << this->_count << " Zombies are Dead !" << std::endl;
}

std::string	ZombieHorde::randomName(void)
{
	int	randNum = (rand() % 18);
	std::string	randpull[18] = {"jimkwon", "mki", "chmoon", "soekim", "sunmin", "soojeong", "sehan", "okwon", "ukwon", "wopark", "sayun", "yujeon", "jeongwle", "junghwki", "jihkang", "hyeonski", "hyeolee", "juyang"};

	return (randpull[randNum]);
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < this->_count; i++)
	{
		this->_zombieCrowd[i].announce();
	}
}