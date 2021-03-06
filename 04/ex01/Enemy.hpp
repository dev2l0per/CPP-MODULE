/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:15:59 by juyang            #+#    #+#             */
/*   Updated: 2021/04/14 20:15:59 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
	private:
		int	_hp;
		std::string	_type;

		Enemy(void);

	public:
		Enemy(int hp, std::string const &type);
		Enemy(Enemy const &arg);
		virtual	~Enemy(void);
		
		Enemy&	operator=(Enemy const &arg);

		std::string const& getType(void) const;
		int	getHP(void) const;

		virtual void	takeDamage(int);
};

#endif
