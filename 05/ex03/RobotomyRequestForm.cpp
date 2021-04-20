/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:52:40 by juyang            #+#    #+#             */
/*   Updated: 2021/04/19 18:52:41 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form()
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("Robotomy Request Form", target, 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &arg) : Form(arg)
{

}

RobotomyRequestForm::~RobotomyRequestForm(void)
{

}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const &arg)
{
	Form::operator=(arg);

	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "<" << this->getTarget() << "> is Robotomizing..." << std::endl;
	if (rand() % 2 == 0)
		throw RobotomizeFailedException();
	std::cout << "<" << this->getTarget() << "> Robotomizing Success!" << std::endl;
}

const char*	RobotomyRequestForm::RobotomizeFailedException::what(void) const throw()
{
	return ("Exception Error : Robotomizing Failed!");
}