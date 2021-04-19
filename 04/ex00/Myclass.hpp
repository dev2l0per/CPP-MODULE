/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Myclass.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 15:25:22 by juyang            #+#    #+#             */
/*   Updated: 2021/04/19 15:25:22 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYCLASS_HPP
# define MYCLASS_HPP

# include "Victim.hpp"

class Myclass : public Victim
{
	private:
		Myclass(void);
	
	public:
		Myclass(std::string const &name);
		Myclass(Myclass const &arg);
		virtual ~Myclass(void);

		Myclass&	operator=(Myclass const &arg);

		virtual void	getPolymorphed(void) const;
};

std::ostream&	operator<<(std::ostream &os, Myclass const &arg);

#endif
