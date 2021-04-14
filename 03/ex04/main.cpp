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

int main(void)
{
	srand(time(NULL));

	std::cout << std::endl;

    // FragTrap frag("Frag");
    // ScavTrap scav("Scav");
    // NinjaTrap ninj("Ninj");
    // ClapTrap clap;

    // ninj.ninjaShoebox(frag);
    // ninj.ninjaShoebox(scav);
    // ninj.ninjaShoebox(ninj);
    // ninj.ninjaShoebox(clap);
    
    // ScavTrap clap("Clap");
    // ScavTrap trap("Trap");
    // FragTrap frag("Frag");
    // FragTrap prap;

    // prap = frag;
    
	// std::cout << std::endl;
    // clap.rangedAttack("Trap");
    // trap.takeDamage(20);
    // clap.meleeAttack("Trap");
    // trap.takeDamage(30);
    // trap.beRepaired(35);
    // frag.rangedAttack("Clap");
    // trap.beRepaired(80);
    // trap.takeDamage(120);
    // frag.beRepaired(7);
    // trap.beRepaired(33);
    // frag.takeDamage(10);
    
    // frag.vaulthunter_dot_exe("Clap");
    // clap.challengeNewComer();
    // clap.challengeNewComer();
    // clap.challengeNewComer();
    // clap.challengeNewComer();

    
	std::cout << std::endl;

	return (0);
}
