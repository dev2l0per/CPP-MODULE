/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 19:39:56 by juyang            #+#    #+#             */
/*   Updated: 2021/04/21 19:39:56 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int> test(42);
	try{
		std::cout << test.getSize() << std::endl;
		for(unsigned int i = 0;i < test.getSize();i++)
		{
			test[i] = i + 1;
			std::cout << test[i] << " ";
		}
		std::cout << std::endl;
		Array<int> test2(test);
		for(unsigned int i = 0;i < test2.getSize();i++)
		{
			test[i] = i * 2;
			std::cout << test2[i] << " ";
		}
		std::cout << std::endl;
		std::cout << test[44] << std::endl;

	}catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	const Array<int> test3(3);
	try{
		std::cout << test3.getSize() << std::endl;
		for(unsigned int i = 0;i < test3.getSize();i++)
		{
			test3[i] = i + 1;
			std::cout << test3[i] << " ";
		}
		std::cout << std::endl;
		Array<int> test4(test3);
		for(unsigned int i = 0;i < test4.getSize();i++)
		{
			test3[i] = i * 2;
			std::cout << test4[i] << " ";
		}
		std::cout << std::endl;
		std::cout << test3[44] << std::endl;

	}catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}
