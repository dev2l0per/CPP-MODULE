/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 19:50:51 by juyang            #+#    #+#             */
/*   Updated: 2021/04/04 19:50:51 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{

}

Human::~Human()
{

}

const	Brain&	Human::getBrain(void) const
{
	return (this->_brain);
}

std::string	Human::identify(void) const
{
	return (this->_brain.identify());
}
