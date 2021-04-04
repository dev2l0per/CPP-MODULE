/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 19:44:43 by juyang            #+#    #+#             */
/*   Updated: 2021/04/04 19:44:44 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main(void)
{
	std::string	str("HI THIS IS BRAIN");
	std::string	*strPtr = &str;
	std::string	&strRef = str;

	std::cout << "STRING : " << str << std::endl;
	std::cout << "STRING POINTER : " << *strPtr << std::endl;
	std::cout << "STRING REFERENCE : " << strRef << std::endl;

	return (0);
}
