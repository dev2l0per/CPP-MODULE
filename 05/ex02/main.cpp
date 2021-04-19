/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:38:45 by juyang            #+#    #+#             */
/*   Updated: 2021/04/19 12:38:47 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

int main()
{
	try {
		ShrubberyCreationForm form("target");
		std::cout << form;
		Bureaucrat temp("name", 3);
		temp.signForm(form);
		temp.executeForm(form);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		RobotomyRequestForm form("target");
		std::cout << form;
		Bureaucrat temp("name", 3);
		temp.signForm(form);
		temp.executeForm(form);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		PresidentialPardonForm form("target");
		std::cout << form;
		Bureaucrat temp("name", 3);
		temp.signForm(form);
		temp.executeForm(form);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		ShrubberyCreationForm form("target_error");
		std::cout << form;
		Bureaucrat temp("name_150", 150);
		temp.signForm(form);
		temp.executeForm(form);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		RobotomyRequestForm form("target_error");
		std::cout << form;
		Bureaucrat temp("name_150", 150);
		temp.signForm(form);
		temp.executeForm(form);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		PresidentialPardonForm form("target_error");
		std::cout << form;
		Bureaucrat temp("name_150", 150);
		temp.signForm(form);
		temp.executeForm(form);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}