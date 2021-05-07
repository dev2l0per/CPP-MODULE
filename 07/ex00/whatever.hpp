/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 19:19:30 by juyang            #+#    #+#             */
/*   Updated: 2021/04/21 19:19:31 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
const T& min(const T &a, const T &b)
{
	if (a < b)
		return a;
	return b;
}

template <typename T>
const T& max(const T &a, const T &b)
{
	if (a > b)
		return a;
	return b;
}

#endif
