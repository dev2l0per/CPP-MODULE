/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:08:28 by juyang            #+#    #+#             */
/*   Updated: 2021/04/13 17:08:29 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	private:
	public:
		SuperTrap();
		SuperTrap(std::string const &name);
		SuperTrap(SuperTrap const &arg);
		virtual ~SuperTrap();
		SuperTrap &operator=(SuperTrap const &arg);
};

#endif
