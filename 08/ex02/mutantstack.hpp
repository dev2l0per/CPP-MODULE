/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 16:46:36 by juyang            #+#    #+#             */
/*   Updated: 2021/04/22 16:46:36 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) : std::stack<T>() {}
		MutantStack(MutantStack const &arg) : std::stack<T>(arg) {}
		virtual ~MutantStack(void) {}

		MutantStack&	operator=(MutantStack const &arg)
		{
			std::stack<T>::operator=(arg);

			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator	iterator;
		typedef typename std::stack<T>::container_type::const_iterator	const_iterator;

		iterator	begin(void)
		{
			return (this->c.begin());
		}
		iterator	end(void)
		{
			return (this->c.end());
		}
		const_iterator	begin(void) const
		{
			return (this->c.begin());
		}
		const_iterator	end(void) const
		{
			return (this->c.end());
		}
};

#endif
