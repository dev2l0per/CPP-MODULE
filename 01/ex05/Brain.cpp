/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 19:50:35 by juyang            #+#    #+#             */
/*   Updated: 2021/04/04 19:50:36 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->_myName = std::string("juyang");
}

Brain::~Brain()
{

}

std::string	Brain::identify(void) const
{
	std::stringstream	ss;

	ss << "0x" << std::uppercase << std::hex << (long)this;
	return (ss.str());
}