/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 21:32:39 by juyang            #+#    #+#             */
/*   Updated: 2021/04/04 21:32:39 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	int	_value;
	static const int	_bits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(Fixed &other);
	Fixed	&opertaor=(Fixed &other);
	int	getRawBits(void);
	void	setRawBits(const int bits);
};

#endif
