/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 19:50:42 by juyang            #+#    #+#             */
/*   Updated: 2021/04/04 19:50:42 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <sstream>
# include <iomanip>
# include <iostream>

class Brain
{
	private:
		std::string	_myName;
	public:
		Brain();
		virtual ~Brain();
		std::string	identify(void) const;
};

#endif
