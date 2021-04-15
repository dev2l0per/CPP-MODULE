/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:33:18 by juyang            #+#    #+#             */
/*   Updated: 2021/04/15 16:33:18 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"

class Squad : public ISquad
{
	private:
		int	_count;
		ISpaceMarine	**_unit;

	public:
		Squad(void);
		Squad(Squad const &arg);
		virtual ~Squad(void);

		Squad&	operator=(Squad const &arg);

		virtual int	getCount(void) const;
		virtual ISpaceMarine*	getUnit(int) const;
		virtual int	push(ISpaceMarine *);
};

#endif
