/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 13:09:32 by juyang            #+#    #+#             */
/*   Updated: 2021/04/19 13:09:33 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name(""), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{

}

Form::Form(std::string const &name, int const &gradeToSign, int const &gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &arg) : _name(arg.getName()), _signed(arg.getSigned()), _gradeToSign(arg.getGradeToSign()), _gradeToExecute(arg.getGradeToExecute())
{
	if (arg.getGradeToSign() < 1 || arg.getGradeToExecute() < 1)
		throw Form::GradeTooHighException();
	else if (arg.getGradeToExecute() > 150 || arg.getGradeToExecute() < 150)
		throw Form::GradeTooLowException();
}

Form::~Form(void)
{

}

Form&	Form::operator=(Form const &arg)
{
	if (arg.getGradeToSign() < 1 || arg.getGradeToExecute() < 1)
		throw Form::GradeTooHighException();
	else if (arg.getGradeToExecute() > 150 || arg.getGradeToExecute() < 150)
		throw Form::GradeTooLowException();
	this->_signed = arg.getSigned();

	return (*this);
}

std::string const&	Form::getName(void) const
{
	return (this->_name);
}

bool const&	Form::getSigned(void) const
{
	return (this->_signed);
}

int const&	Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int const&	Form::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

void	Form::beSigned(Bureaucrat const &arg)
{
	if (arg.getGrade() > this->getGradeToSign())
		throw Form::GradeTooLowException();
	else if (this->getSigned() == true)
		throw Form::AlreadySignException();
	this->_signed = true;
}

const char*	Form::GradeTooHighException::what(void) const throw()
{
	return ("Exception Error : Grade Too High!");
}

const char*	Form::GradeTooLowException::what(void) const throw()
{
	return ("Exception Error : Grade Too Low!");
}

const char*	Form::AlreadySignException::what(void) const throw()
{
	return ("Exception Error : Already Sign!");
}

std::ostream&	operator<<(std::ostream &os, Form const &arg)
{
	os << "<" << arg.getName() << ">, Signed <" << arg.getSigned() << ">, gradeToSign <" << arg.getGradeToSign() << ">, gradeToExecute <" << arg.getGradeToExecute() << ">" << std::endl;

	return (os);
}
