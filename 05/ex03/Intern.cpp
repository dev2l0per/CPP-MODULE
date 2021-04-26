/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 20:11:17 by juyang            #+#    #+#             */
/*   Updated: 2021/04/19 20:11:17 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	this->_formConstructor[0] = makeShrubberyCreationForm;
	this->_formConstructor[1] = makeRobotomyRequestForm;
	this->_formConstructor[2] = makePresidentialPardonForm;
}

Intern::Intern(Intern const &arg)
{
	this->_formConstructor[0] = arg._formConstructor[0];
	this->_formConstructor[1] = arg._formConstructor[1];
	this->_formConstructor[2] = arg._formConstructor[2];
}

Intern::~Intern(void)
{

}

Intern&	Intern::operator=(Intern const &arg)
{
	this->_formConstructor[0] = arg._formConstructor[0];
	this->_formConstructor[1] = arg._formConstructor[1];
	this->_formConstructor[2] = arg._formConstructor[2];

	return (*this);
}

Form*	Intern::makeForm(std::string const &name, std::string const &target)
{
	std::string str[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++)
	{
		if (str[i] == name)
		{
			std::cout << "Intern creates <" << name << ">" << std::endl;
			
			return ((this->_formConstructor[i])(target));
		}
	}
	throw Intern::NotFoundFormException();

	return (NULL);
}

const char*	Intern::NotFoundFormException::what(void) const throw()
{
	return ("Exception Error : Not Found Form !");
}

Form*	makeShrubberyCreationForm(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

Form*	makeRobotomyRequestForm(std::string const &target)
{
	return new RobotomyRequestForm(target);
}

Form*	makePresidentialPardonForm(std::string const &target)
{
	return new PresidentialPardonForm(target);
}
