/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 19:12:55 by juyang            #+#    #+#             */
/*   Updated: 2021/04/05 19:12:57 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class Fixed
{
	private:
		int _value;
		static const int	_bits = 8;
	public:
		Fixed();
		Fixed(int const value);
		Fixed(float const value);
		Fixed(Fixed const &arg);
		virtual	~Fixed();
		float	toFloat(void) const;
		int	toInt(void) const;
		Fixed	&operator=(Fixed const &arg);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);

};

std::ostream	&operator<<(std::ostream &os, Fixed const &arg);

#endif
