/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 19:39:41 by juyang            #+#    #+#             */
/*   Updated: 2021/04/21 19:39:41 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class Array
{
	private:
		T	*_array;
		unsigned int	_size;

	public:
		Array(void)
		{
			this->_size = 0;
			this->_array = new T[this->_size];
		}
		Array(unsigned int n)
		{
			this->_size = n;
			this->_array = new T[this->_size];
		}
		Array(Array const &arg)
		{
			this->_size = arg.getSize();
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
			{
				this->_array[i] = arg._array[i];
			}
		}
		virtual ~Array(void)
		{
			delete[] this->_array;
		}

		Array&	operator=(Array const &arg)
		{
			this->_size = arg.getSize();
			
			// delete[] this->_array;
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
			{
				this->_array[i] = arg._array[i];
			}

			return (*this);
		}
		T&	operator[](unsigned int index) const
		{
			if (index >= this->getSize())
				throw Array::IndexOutOfLimitsException();
			return this->_array[index];
		}

		unsigned int	getSize(void) const
		{
			return (this->_size);
		}

		class IndexOutOfLimitsException : public std::exception
		{
			public:
				char const	*what(void) const throw()
				{
					return ("Exception Error : Out of Range!");
				}
		};
};

#endif
