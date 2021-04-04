/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:48:17 by juyang            #+#    #+#             */
/*   Updated: 2021/04/03 20:48:18 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void		ponyOnTheHeap()
{
	Pony *onTheHeap = new Pony("onTheHeap");
	delete onTheHeap;
}

void		ponyOnTheStack()
{
	Pony onTheStack = Pony("onTheStack");
}

int			main(void)
{
	std::cout << "ponyOnTheHeap !" << std::endl;
	ponyOnTheHeap();
	std::cout << "ponyOnTheStack !" << std::endl;
	ponyOnTheStack();

	// system("leaks a.out");
	return 0;
}
