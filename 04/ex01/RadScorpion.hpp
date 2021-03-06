/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:16:25 by juyang            #+#    #+#             */
/*   Updated: 2021/04/14 20:16:25 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	private:

	public:
		RadScorpion(void);
		RadScorpion(RadScorpion const &arg);
		virtual ~RadScorpion(void);

		RadScorpion&	operator=(RadScorpion const &arg);
};

#endif
