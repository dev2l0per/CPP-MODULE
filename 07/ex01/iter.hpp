/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 19:31:08 by juyang            #+#    #+#             */
/*   Updated: 2021/04/21 19:31:08 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void	iter(T *array, unsigned int length, void (*func)(T &element))
{
	for (unsigned int i = 0; i < length; i++)
	{
		func(array[i]);
	}
}

#endif
