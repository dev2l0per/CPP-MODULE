/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:35:37 by juyang            #+#    #+#             */
/*   Updated: 2021/04/15 18:35:37 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_aMateria[4];
		
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &arg);
		virtual ~MateriaSource(void);

		MateriaSource&	operator=(MateriaSource const &arg);

		virtual void	learnMateria(AMateria *);
		virtual AMateria*	createMateria(std::string const &type);
};

#endif
