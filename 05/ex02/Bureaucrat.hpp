/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:38:36 by juyang            #+#    #+#             */
/*   Updated: 2021/04/19 12:38:37 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string const	_name;
		int	_grade;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string const &name, int const &grade);
		Bureaucrat(Bureaucrat const &arg);
		virtual ~Bureaucrat(void);

		Bureaucrat&	operator=(Bureaucrat const &arg);

		void	increment(void);
		void	decrement(void);
		std::string const&	getName(void) const;
		int	getGrade(void) const;

		void	signForm(Form &arg) const;
		void	executeForm(Form const &form);

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char*	what(void) const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what(void) const throw();
		};
};

std::ostream&	operator<<(std::ostream &os, Bureaucrat const &arg);

#endif
