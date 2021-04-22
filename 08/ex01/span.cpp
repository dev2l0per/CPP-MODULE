/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 14:37:38 by juyang            #+#    #+#             */
/*   Updated: 2021/04/22 14:37:39 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void)
{

}

Span::Span(unsigned int const &N) : _N(N)
{

}

Span::Span(Span const &arg) : _N(arg._N), _vec(arg._vec)
{

}

Span::~Span(void)
{

}

Span&	Span::operator=(Span const &arg)
{
	this->_N = arg.getN();
	this->_vec = arg.getVector();

	return (*this);
}

void	Span::addNumber(int value)
{
	std::vector<int>::iterator it;

	if (this->_vec.size() >= this->_N)
		throw Span::VectorIsFullException();
	it = std::find(this->_vec.begin(), this->_vec.end(), value);
	if (it != this->_vec.end())
		throw Span::AlreadyExistNumberException();
	this->_vec.push_back(value);
}

unsigned int	Span::shortestSpan(void)
{
	unsigned int	ret;

	if (this->_vec.size() < 2)
		throw Span::VectorSizeIsLackException();
	std::sort(this->_vec.begin(), this->_vec.end());
	ret = UINT_MAX;
	for (size_t i = 1; i < this->_vec.size(); i++)
	{
		if (ret > (unsigned int)this->_vec[i] - this->_vec[i - 1])
			ret = (unsigned int)this->_vec[i] - this->_vec[i - 1];
	}
	return (ret);
}

unsigned int	Span::longestSpan(void)
{
	if (this->_vec.size() < 2)
		throw Span::VectorSizeIsLackException();
	return (*(--this->_vec.end()) - *(this->_vec.begin()));
}

unsigned int	Span::getN(void) const
{
	return (this->_N);
}

std::vector<int>	Span::getVector(void) const
{
	return (this->_vec);
}

const char	*Span::AlreadyExistNumberException::what(void) const throw()
{
	return ("Exception Error : Already Exist Number in Vector!");
}

const char	*Span::VectorIsFullException::what(void) const throw()
{
	return ("Exception Error : Vector Is Full !");
}

const char	*Span::VectorSizeIsLackException::what(void) const throw()
{
	return ("Exception Error : Vector Size is Lack !");
}

void Span::print_element()
{
	for (unsigned int i = 0;i < this->_vec.size();i++)
		std::cout << this->_vec[i] << " ";
	std::cout << std::endl;
}