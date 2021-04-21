/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:50:00 by juyang            #+#    #+#             */
/*   Updated: 2021/04/21 14:50:01 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <sstream>
# include <limits>

class Converter
{
	private:
		char	_charValue;
		int	_intValue;
		float	_floatValue;
		double	_doubleValue;
	
	public:
		Converter(void);
		Converter(Converter const &arg);
		virtual	~Converter(void);

		Converter&	operator=(Converter const &arg);

		char	getCharValue(void) const;
		int	getIntValue(void) const;
		float	getFloatValue(void) const;
		double	getDoubleValue(void) const;

		bool	stringCheck(char const *str);
		void	convert(std::string str);

		void	convertFromChar(std::string str);
		void	convertFromInt(std::string str);
		void	convertFromFloat(std::string str);
		void	convertFromDouble(std::string str);
};

#endif
