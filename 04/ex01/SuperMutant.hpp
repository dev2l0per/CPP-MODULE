/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:16:10 by juyang            #+#    #+#             */
/*   Updated: 2021/04/14 20:16:11 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	private:

	public:
		SuperMutant(void);
		SuperMutant(SuperMutant const &arg);
		virtual ~SuperMutant(void);

		SuperMutant&	operator=(SuperMutant const &arg);

		virtual void	takeDamage(int);
};

#endif
