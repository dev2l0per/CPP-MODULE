/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:35:13 by juyang            #+#    #+#             */
/*   Updated: 2021/04/15 18:35:14 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &arg);
		virtual ~Cure(void);

		Cure&	operator=(Cure const &arg);
		virtual AMateria*	clone(void) const;
		virtual void	use(ICharacter &target);
};

#endif
