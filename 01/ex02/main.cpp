/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 18:41:04 by juyang            #+#    #+#             */
/*   Updated: 2021/04/04 18:41:05 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

void	spawnZombieOnTheHeap(ZombieEvent event) {
	Zombie		*heapzombie;
	
	event.setZombieType("hello");
	heapzombie = event.randomChump();
	delete heapzombie;
}

int		main() {
	ZombieEvent	event;
	Zombie		stackZombie;
	
	srand(time(NULL));
	spawnZombieOnTheHeap(event);


	spawnZombieOnTheHeap(event);
	spawnZombieOnTheHeap(event);
	spawnZombieOnTheHeap(event);
	spawnZombieOnTheHeap(event);
	spawnZombieOnTheHeap(event);
	spawnZombieOnTheHeap(event);
	spawnZombieOnTheHeap(event);

	stackZombie.set_name("Stack");
	stackZombie.set_type("onTheStack");
	stackZombie.announce();

	// system("leaks ZombieEvent");
	return (0);
}
