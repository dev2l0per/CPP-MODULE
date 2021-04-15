/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:52:08 by juyang            #+#    #+#             */
/*   Updated: 2021/04/14 18:52:10 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	private:
		std::string _name;
		std::string _title;

		Sorcerer(void);
	public:
		Sorcerer(std::string const &name, std::string const &title);
		Sorcerer(Sorcerer const &arg);
		virtual ~Sorcerer(void);

		Sorcerer& operator=(Sorcerer const &arg);

		std::string	getName(void) const;
		std::string	getTitle(void) const;
		void	setName(std::string const &name);
		void	setTitle(std::string const &title);

		void	polymorph(Victim const &) const;
};

std::ostream&	operator<<(std::ostream& os, Sorcerer const &arg);

#endif
