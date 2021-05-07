/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:40:34 by juyang            #+#    #+#             */
/*   Updated: 2021/04/21 18:40:35 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int	randNum;

	randNum = rand() % 3;
	if (randNum == 0)
	{
		std::cout << "Created A!" << std::endl;
		return new A;
	} else if (randNum == 1)
	{
		std::cout << "Created A!" << std::endl;
		return new B;
	} else if (randNum == 2)
	{
		std::cout << "Created A!" << std::endl;
		return new C;
	}
	return (NULL);
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p))
	{
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B *>(p))
	{
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C *>(p))
	{
		std::cout << "C" << std::endl;
	}
}

void	identify_from_reference(Base &p)
{
	identify_from_pointer(&p);
}

int			main(void)
{
	Base	*basePtr;

	std::srand(std::time(NULL));
	basePtr = generate();
	Base	&baseRef = *basePtr;
	identify_from_pointer(basePtr);
	identify_from_reference(baseRef);
}
