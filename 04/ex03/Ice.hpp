/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:35:05 by juyang            #+#    #+#             */
/*   Updated: 2021/04/15 18:35:05 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &arg);
		virtual ~Ice(void);

		Ice&	operator=(Ice const &arg);

		virtual AMateria* clone(void) const;
		virtual void	use(ICharacter &target);
};

#endif
