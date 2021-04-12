/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 19:13:00 by juyang            #+#    #+#             */
/*   Updated: 2021/04/05 19:13:01 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = value << this->_bits;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(value * (1 << this->_bits));
}

Fixed::Fixed(Fixed const &arg)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = arg._value;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const &arg)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = arg.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

int		Fixed::toInt(void) const
{
	return (this->_value >> this->_bits);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << this->_bits));
}

std::ostream	&operator<<(std::ostream &os, Fixed const &arg)
{
	os << arg.toFloat();
	return os;
}