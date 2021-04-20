/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:52:10 by juyang            #+#    #+#             */
/*   Updated: 2021/04/19 18:52:11 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include <exception>
# include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
	private:
		static std::string _treeArt;

		ShrubberyCreationForm(void);

	public:
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &arg);
		virtual ~ShrubberyCreationForm(void);

		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const &arg);

		virtual void	execute(Bureaucrat const &executor) const;

		class FileOpenException : public std::exception
		{
			public:
				virtual const char*	what(void) const throw();
		};
};

#endif
