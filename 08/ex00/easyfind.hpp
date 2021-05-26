/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 20:02:02 by juyang            #+#    #+#             */
/*   Updated: 2021/04/21 20:02:03 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>

class EmptyContainerException : public std::exception
{
	public:
		virtual const char* what(void) const throw()
		{
			return ("Exception Error : Empty Container Error!");
		}
};

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	if (container.begin() == container.end())
		throw EmptyContainerException();
	return (std::find(container.begin(), container.end(), value));
}

#endif
