/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 14:37:41 by juyang            #+#    #+#             */
/*   Updated: 2021/04/22 14:37:42 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>
# include <vector>
# include <algorithm>
# include <iostream>

class Span
{
	private:
		unsigned int	_N;
		std::vector<int>	_vec;
	
		Span(void);

	public:
		Span(unsigned int const &N);
		Span(Span const &arg);
		virtual ~Span(void);

		Span&	operator=(Span const &arg);

		void	addNumber(int value);
		template <typename T>
		void	addNumber(T begin, T end)
		{
			std::vector<int>::iterator it;

			for (; begin != end; begin++)
			{
				if (this->_vec.size() >= this->_N)
					throw Span::VectorIsFullException();
				it = std::find(this->_vec.begin(), this->_vec.end(), *begin);
				if (it != this->_vec.end())
					throw Span::AlreadyExistNumberException();
				this->_vec.push_back(*begin);
			}
		}
		
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);

		unsigned int	getN(void) const;
		std::vector<int>	getVector(void) const;

		void	print_element(void);

		class	AlreadyExistNumberException : public std::exception
		{
			public:
				const char	*what(void) const throw();
		};
		
		class	VectorIsFullException : public std::exception
		{
			public:
				const char	*what(void) const throw();
		};

		class	VectorSizeIsLackException : public std::exception
		{
			public:
				const char	*what(void) const throw();
		};
};

#endif
