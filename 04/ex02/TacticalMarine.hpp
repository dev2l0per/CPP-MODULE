/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:33:29 by juyang            #+#    #+#             */
/*   Updated: 2021/04/15 16:33:30 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	private:
		

	public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine const &arg);
		virtual ~TacticalMarine(void);

		TacticalMarine&	operator=(TacticalMarine const &arg);

		virtual ISpaceMarine*	clone(void) const;
		virtual void	battleCry(void) const;
		virtual void	rangedAttack(void) const;
		virtual void	meleeAttack(void) const;
};

#endif
