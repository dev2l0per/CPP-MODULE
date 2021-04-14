/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:52:46 by juyang            #+#    #+#             */
/*   Updated: 2021/04/14 18:52:47 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
	private:
		Peon(void);

	public:
		Peon(std::string const &name);
		Peon(Peon const &arg);
		virtual ~Peon(void);

		Peon&	operator=(Peon const &arg);
		
		virtual void	getPolymorphed(void) const;
};

std::ostream&	operator<<(std::ostream &os, Peon const &arg);

#endif
