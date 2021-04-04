/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:36:45 by juyang            #+#    #+#             */
/*   Updated: 2021/04/03 21:36:46 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <cstdlib>
# include <ctime>

class ZombieEvent
{
private:
	std::string	_type;
public:
	ZombieEvent();
	virtual ~ZombieEvent();
	void	setZombieType(std::string type);
	Zombie*	newZombie(std::string name);
	Zombie*	randomChump(void);
};

#endif
