/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:52:56 by juyang            #+#    #+#             */
/*   Updated: 2021/04/19 18:52:57 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form()
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("Presidential Pardon Form", target, 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &arg) : Form(arg)
{

}

PresidentialPardonForm::~PresidentialPardonForm(void)
{

}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const &arg)
{
	Form::operator=(arg);

	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "<" << this->getTarget() << "> has been pardoned by Zofod Beeblebrox." << std::endl;
}
