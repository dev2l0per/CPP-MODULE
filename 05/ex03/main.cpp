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

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

static void testForm(Bureaucrat& bur, Form* form)
{
    std::cout << std::endl << "Sign & Execute " << form->getName() << ": " << std::endl;
    bur.signForm(*form);
    bur.executeForm(*form);
}

static void testIntern(Intern& intern, const std::string &form_name, const std::string &target_name)
{
    Bureaucrat sign("name", 1);
    Form *totest = NULL;

    std::cout << std::endl;
	try {
    	totest = intern.makeForm(form_name, target_name);
		testForm(sign, totest);
        delete totest;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

int main()
{
    Intern someRandomIntern;

	std::srand(std::time(NULL));

    testIntern(someRandomIntern, "presidential pardon", "target1");
    testIntern(someRandomIntern, "robotomy request", "target2");
    testIntern(someRandomIntern, "shrubbery creation", "target3");
    testIntern(someRandomIntern, "doesn't exist", "target_error");

    return (0);
}