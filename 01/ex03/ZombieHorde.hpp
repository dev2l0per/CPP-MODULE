/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 19:08:59 by juyang            #+#    #+#             */
/*   Updated: 2021/04/04 19:09:08 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie	*_zombieCrowd;
	std::string	_type;
	int	_count;

public:
	ZombieHorde(int N);
	ZombieHorde(std::string type, int N);
	virtual ~ZombieHorde();
	std::string	randomName(void);
	void	announce(void);
};

#endif
