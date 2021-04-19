/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:38:40 by juyang            #+#    #+#             */
/*   Updated: 2021/04/19 12:38:41 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name(""), _grade(150)
{

}

Bureaucrat::Bureaucrat(std::string const &name, int const &grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &arg) : _name(arg._name)
{
	if (arg._grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (arg._grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = arg._grade;
}

Bureaucrat::~Bureaucrat(void)
{

}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const &arg)
{
	if (arg._grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (arg._grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = arg._grade;

	return (*this);
}

void	Bureaucrat::increment(void)
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrement(void)
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

std::string const&	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::signForm(Form &arg) const
{
	try
	{
		arg.beSigned(*this);
		std::cout << "<" << this->getName() << "> signs <" << arg.getName() << ">" << std::endl;
	} catch (std::exception &e)
	{
		std::cout << "<" << this->getName() << "> cannot sign <" << arg.getName() << "> becauses <" << e.what() << ">" << std::endl;
	}
}

const char*	Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Exception Error : Grade Too High!");
}

const char*	Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Exception Error : Grade Too Low!");
}

std::ostream&	operator<<(std::ostream &os, Bureaucrat const &arg)
{
	os << "<" << arg.getName() << ">, bureaucrat grade <" << arg.getGrade() << ">." << std::endl;

	return (os);
}