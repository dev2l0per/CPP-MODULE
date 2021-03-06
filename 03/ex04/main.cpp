/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:04:23 by juyang            #+#    #+#             */
/*   Updated: 2021/04/06 16:04:24 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	srand(time(NULL));

	FragTrap *frag = new FragTrap("FR4G");
	frag->vaulthunter_dot_exe("CL4P-TP");
	frag->meleeAttack("CL4P-TP");
	frag->rangedAttack("CL4P-TP");
	frag->takeDamage(24);
	frag->beRepaired(50);
	frag->takeDamage(42);
	frag->takeDamage(100);
	frag->beRepaired(125);
	frag->vaulthunter_dot_exe("CL4P-TP");
	frag->vaulthunter_dot_exe("CL4P-TP");
	frag->vaulthunter_dot_exe("CL4P-TP");
	frag->vaulthunter_dot_exe("CL4P-TP");

	std::cout << "---" << std::endl;

	ScavTrap *scav = new ScavTrap("SC4V");
	scav->challengeNewComer();
	scav->meleeAttack("CL4P-TP");
	scav->rangedAttack("CL4P-TP");
	scav->takeDamage(24);
	scav->beRepaired(50);
	scav->takeDamage(42);
	scav->takeDamage(100);
	scav->beRepaired(125);
	scav->challengeNewComer();
	scav->challengeNewComer();
	scav->challengeNewComer();
	scav->challengeNewComer();

	std::cout << "---" << std::endl;

	ClapTrap clap("CL4P");
	NinjaTrap *ninja = new NinjaTrap("NINJ4");
	ninja->ninjaShoebox(*ninja);
	ninja->meleeAttack("CL4P-TP");
	ninja->rangedAttack("CL4P-TP");
	ninja->takeDamage(24);
	ninja->beRepaired(50);
	ninja->takeDamage(42);
	ninja->takeDamage(100);
	ninja->beRepaired(125);
	ninja->ninjaShoebox(*frag);
	ninja->ninjaShoebox(*frag);
	ninja->ninjaShoebox(*frag);
	ninja->ninjaShoebox(clap);
	ninja->ninjaShoebox(*scav);
	ninja->ninjaShoebox(*scav);
	ninja->ninjaShoebox(*scav);
	ninja->ninjaShoebox(*scav);
	ninja->ninjaShoebox(clap);

	std::cout << "---" << std::endl;

	SuperTrap *super = new SuperTrap("SUP3R");
	std::cout << super->getHitPoints() << std::endl;
	super->ninjaShoebox(*static_cast<NinjaTrap*>(super));
	super->ninjaShoebox(*static_cast<FragTrap*>(super));
	super->meleeAttack("CL4P-TP");
	super->rangedAttack("CL4P-TP");
	super->takeDamage(24);
	super->beRepaired(50);
	super->takeDamage(42);
	super->takeDamage(100);
	super->beRepaired(125);
	super->vaulthunter_dot_exe("CL4P-TP");
	super->vaulthunter_dot_exe("CL4P-TP");
	super->ninjaShoebox(*frag);
	super->ninjaShoebox(*frag);
	super->ninjaShoebox(clap);
	super->ninjaShoebox(*scav);
	super->ninjaShoebox(*scav);
	super->ninjaShoebox(*scav);
	super->ninjaShoebox(clap);


	std::cout << "---" << std::endl;

	delete frag;
	delete scav;
	delete ninja;
	delete super;

	return (0);
}
