/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 13:09:27 by juyang            #+#    #+#             */
/*   Updated: 2021/04/19 13:09:28 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool	_signed;
		int const	_gradeToSign;
		int const	_gradeToExecute;

	public:
		Form(void);
		Form(std::string const &name, int const &gradeToSign, int const &gradeToExecute);
		Form(Form const &arg);
		virtual ~Form(void);

		Form&	operator=(Form const &arg);

		std::string const&	getName(void) const;
		bool const&	getSigned(void) const;
		int const&	getGradeToSign(void) const;
		int const&	getGradeToExecute(void) const;
		void	setSigned(bool sign);

		void	beSigned(Bureaucrat const &arg);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char*	what(void) const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what(void) const throw();
		};

		class AlreadySignException : public std::exception
		{
			public:
				virtual const char*	what(void) const throw();
		};
};

std::ostream&	operator<<(std::ostream &os, Form const &arg);

#endif
