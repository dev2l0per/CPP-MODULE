/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 20:11:11 by juyang            #+#    #+#             */
/*   Updated: 2021/04/19 20:11:12 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		Form*	(*_formConstructor[3])(std::string const &target);

	public:
		Intern(void);
		Intern(Intern const &arg);
		virtual ~Intern(void);

		Intern&	operator=(Intern const &arg);

		Form*	getFormConstructor(int idx) const;

		Form*	makeForm(std::string const &name, std::string const &target);

		class	NotFoundFormException : public std::exception
		{
			public:
				const char*	what(void) const throw();
		};
};

Form*	makeShrubberyCreationForm(std::string const &target);
Form*	makeRobotomyRequestForm(std::string const &target);
Form*	makePresidentialPardonForm(std::string const &target);

#endif
