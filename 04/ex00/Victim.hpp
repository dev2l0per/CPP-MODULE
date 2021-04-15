/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:52:23 by juyang            #+#    #+#             */
/*   Updated: 2021/04/14 18:52:24 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
	private:
		std::string _name;

	protected:
		Victim(void);

	public:
		Victim(std::string const &name);
		Victim(Victim const &arg);
		virtual ~Victim(void);

		Victim& operator=(Victim const &arg);

		std::string	getName(void) const;
		void	setName(std::string const &name);
		virtual void	getPolymorphed(void) const;
};

std::ostream&	operator<<(std::ostream &os, Victim const &arg);

#endif
