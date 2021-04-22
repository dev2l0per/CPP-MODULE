/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 14:37:48 by juyang            #+#    #+#             */
/*   Updated: 2021/04/22 14:37:49 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "span.hpp"

int main()
{
	Span sp2 = Span(5);

	sp2.addNumber(5);
	sp2.addNumber(3);
	sp2.addNumber(17);
	sp2.addNumber(9);
	sp2.addNumber(11);

	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(-2147483648);
	sp.addNumber(2147483647);
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
    {
        sp.addNumber(100);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	Span test(10000);
    
	std::srand(std::time(NULL));
    for (int i = 0; i < 10000; i++)
        test.addNumber(i);
    // test.print_element();
    std::cout << test.shortestSpan() << std::endl;
    std::cout << test.longestSpan() << std::endl;

	return 0;
}
