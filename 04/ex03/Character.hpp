/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:35:24 by juyang            #+#    #+#             */
/*   Updated: 2021/04/15 18:35:25 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_aMateria[4];

	public:
		Character(void);
		Character(std::string const &name);
		Character(Character const &arg);
		virtual ~Character(void);

		Character&	operator=(Character const &arg);

		virtual std::string const &getName(void) const;
		virtual void	equip(AMateria *aMateria);
		virtual void	unequip(int idx);
		virtual void	use(int idx, ICharacter &target);
};

#endif
