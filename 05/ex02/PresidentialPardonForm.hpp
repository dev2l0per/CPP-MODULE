/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:52:52 by juyang            #+#    #+#             */
/*   Updated: 2021/04/19 18:52:53 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm(void);
	
	public:
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &arg);
		virtual ~PresidentialPardonForm(void);

		PresidentialPardonForm&	operator=(PresidentialPardonForm const &arg);

		virtual void	execute(Bureaucrat const &executor) const;
};

#endif
