/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:34:51 by juyang            #+#    #+#             */
/*   Updated: 2021/04/15 18:34:51 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	private:
		std::string	_type;
		unsigned int _xp;

		AMateria(void);

	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &arg);
		virtual ~AMateria(void);

		AMateria&	operator=(AMateria const &arg);

		std::string const & getType(void) const;
		unsigned int	getXP(void) const;

		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
};

#endif
