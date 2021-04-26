/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:50:06 by juyang            #+#    #+#             */
/*   Updated: 2021/04/21 14:50:06 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter(void) : _charValue(0), _intValue(0), _floatValue(0), _doubleValue(0)
{

}

Converter::Converter(Converter const &arg) : _charValue(arg.getCharValue()), _intValue(arg.getIntValue()), _floatValue(arg.getFloatValue()), _doubleValue(arg.getDoubleValue())
{

}

Converter::~Converter(void)
{

}

Converter&	Converter::operator=(Converter const &arg)
{
	this->_charValue = arg.getCharValue();
	this->_intValue = arg.getIntValue();
	this->_floatValue = arg.getFloatValue();
	this->_doubleValue = arg.getDoubleValue();

	return (*this);
}

char	Converter::getCharValue(void) const
{
	return (this->_charValue);
}

int	Converter::getIntValue(void) const
{
	return (this->_intValue);
}

float	Converter::getFloatValue(void) const
{
	return (this->_floatValue);
}

double	Converter::getDoubleValue(void) const
{
	return (this->_doubleValue);
}

bool	Converter::stringCheck(char const *cStr)
{
	std::string str(cStr);
	bool	dotFlag;
	bool	floatFlag;
	size_t	index;

	if (str == "-inff" || str == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		
		return (false);
	}
	else if (str == "+inff" || str == "+inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;

		return (false);
	}
	else if (str == "nanf" || str == "nan")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;

		return (false);
	}
	else
	{
		index = 0;
		dotFlag = false;
		floatFlag = false;
		if (cStr[index] == '-' || cStr[index] == '+')
		{
			if (str.length() == 1)
				return (false);
			index++;
		}
		for (; index < str.length(); index++)
		{
			if (cStr[index] == '.' && dotFlag == false)
			{
				dotFlag = true;
			}
			else if (cStr[index] == 'f' && floatFlag == false)
			{
				floatFlag = true;
			}
			else if (cStr[index] >= '0' && cStr[index] <= '9' && floatFlag == false)
			{
				continue;
			}
			else
				return (false);
		}
	}
	return (true);
}

void	Converter::convert(std::string str)
{
	if (this->stringCheck(str.c_str()) == false)
	{
		if (!(str == "-inff" || str == "-inf" || str == "+inff" || str == "+inf" || str == "nanf" || str == "nan"))
			std::cout << "Error : Invalid Argument" << std::endl;
	}
	else if (str[str.length() - 1] == 'f')
		convertFromFloat(str);
	else if (str.find('.') != std::string::npos)
		convertFromDouble(str);
	else
	{
		long long int lldValue;
		std::stringstream ss(str);
		
		ss >> lldValue;
		if (ss.fail())
			std::cout << "Error : Input Range Error" << std::endl;
		else if (lldValue >= CHAR_MIN && lldValue <= CHAR_MAX)
			convertFromChar(str);
		else if (lldValue >= INT_MIN && lldValue <= INT_MAX)
			convertFromInt(str);
		else
			convertFromDouble(str);
	}
}

void	Converter::convertFromChar(std::string str)
{
	std::stringstream ss(str);

	ss >> this->_intValue;
	this->_charValue = static_cast<char>(this->_intValue);
	this->_doubleValue = static_cast<double>(this->_intValue);
	this->_floatValue = static_cast<float>(this->_intValue);

	if (!(this->_charValue >= 32 && this->_charValue <= 127))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << this->_charValue << "'" << std::endl;
	std::cout << "int: " << this->_intValue << std::endl;
	std::cout << "float: " << this->_floatValue << ".0f" << std::endl;
	std::cout << "double: " << this->_doubleValue << ".0" << std::endl;
}

void	Converter::convertFromInt(std::string str)
{
	std::stringstream ss(str);

	ss >> this->_intValue;
	this->_charValue = static_cast<char>(this->_intValue);
	this->_doubleValue = static_cast<double>(this->_intValue);
	this->_floatValue = static_cast<float>(this->_intValue);

	if (!(this->_intValue >= 32 && this->_intValue <= 127) && this->_intValue > 127)
		std::cout << "char: impossible" << std::endl;
	else if (!(this->_intValue >= 32 && this->_intValue <= 127))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << this->_charValue << "'" << std::endl;
	std::cout << "int: " << this->_intValue << std::endl;
	std::cout << "float: " << this->_floatValue << ".0f" << std::endl;
	std::cout << "double: " << this->_doubleValue << ".0" << std::endl;
}

void	Converter::convertFromFloat(std::string str)
{
	str.replace(str.find('f'), 1, "");
	std::stringstream ss(str);

	ss >> this->_floatValue;
	this->_charValue = static_cast<char>(this->_floatValue);
	this->_intValue = static_cast<int>(this->_floatValue);
	this->_doubleValue = static_cast<double>(this->_floatValue);

	if (!(this->_intValue >= 32 && this->_intValue <= 127) && this->_intValue > 127)
		std::cout << "char: impossible" << std::endl;
	else if (!(this->_intValue >= 32 && this->_intValue <= 127))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << this->_charValue << "'" << std::endl;
	std::cout << "int: " << this->_intValue << std::endl;
	if (this->_floatValue == 0.0f)
	{
		std::cout << "float: " << this->_floatValue << ".0f" << std::endl;
		std::cout << "double: " << this->_doubleValue << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << str << "f" << std::endl;
		std::cout << "double: " << str << std::endl;
	}
}

void	Converter::convertFromDouble(std::string str)
{
	std::stringstream ss(str);

	ss >> this->_doubleValue;
	this->_charValue = static_cast<char>(this->_doubleValue);
	this->_intValue = static_cast<int>(this->_doubleValue);
	this->_floatValue = static_cast<float>(this->_doubleValue);

	if (!(this->_intValue >= 32 && this->_intValue <= 127) && this->_intValue > 127)
		std::cout << "char: impossible" << std::endl;
	else if (!(this->_intValue >= 32 && this->_intValue <= 127))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << this->_charValue << "'" << std::endl;
	std::cout << "int: " << this->_intValue << std::endl;
	if (this->_doubleValue == 0.0)
	{
		std::cout << "float: " << this->_floatValue << ".0f" << std::endl;
		std::cout << "double: " << this->_doubleValue << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << str << "f" << std::endl;
		std::cout << "double: " << str << std::endl;
	}
}