/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:52:35 by juyang            #+#    #+#             */
/*   Updated: 2021/04/19 18:52:37 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm(void);

	public:
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &arg);
		virtual ~RobotomyRequestForm(void);

		RobotomyRequestForm&	operator=(RobotomyRequestForm const &arg);

		virtual void	execute(Bureaucrat const &executor) const;

		class RobotomizeFailedException : public std::exception
		{
			public:
				virtual const char*	what(void) const throw();
		};
};

#endif
