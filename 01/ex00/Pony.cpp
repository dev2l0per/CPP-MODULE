/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:47:58 by juyang            #+#    #+#             */
/*   Updated: 2021/04/03 20:47:58 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name)
{
	this->_name = name;
	std::cout << this->_name << " is Born!" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << this->_name << " is Dead!" << std::endl;
}