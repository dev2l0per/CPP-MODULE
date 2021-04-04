/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 19:09:15 by juyang            #+#    #+#             */
/*   Updated: 2021/04/04 19:09:16 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include "ZombieHorde.hpp"

int		main() {
	srand(time(NULL));	
	ZombieHorde	z(5);
	
	std::cout << std::endl << "Another one!" << std::endl << std::endl;
	// ZombieHorde biggerz(10);
	z.announce();

	// system("leaks ZombieHorde");
	return (0);
}
