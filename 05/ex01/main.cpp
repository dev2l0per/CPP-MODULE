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

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <exception>

int main()
{
	try {
		Form form("norm1", 1, 150);
		std::cout << form;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	} 
	try {
		Form form("error1", 0, 1);
		std::cout << form;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form form("error2", 151, 150);
		std::cout << form;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form form("error3", 150, 0);
		std::cout << form;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form form("error4", 1, 151);
		std::cout << form;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form form("norm2", 5, 100);
		Bureaucrat temp("sample", 3);
		temp.signForm(form);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form form("norm3", 5, 100);
		Bureaucrat temp("sample", 3);
		temp.signForm(form);
		temp.signForm(form);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form form("norm4", 5, 100);
		Bureaucrat temp("sample", 6);
		temp.signForm(form);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
