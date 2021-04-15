/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:33:42 by juyang            #+#    #+#             */
/*   Updated: 2021/04/15 16:33:43 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const &arg);
		virtual ~AssaultTerminator(void);

		AssaultTerminator&	operator=(AssaultTerminator const &arg);

		virtual ISpaceMarine*	clone(void) const;
		virtual void	battleCry(void) const;
		virtual void	rangedAttack(void) const;
		virtual void	meleeAttack(void) const;
};

#endif
