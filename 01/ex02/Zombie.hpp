/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:14:47 by juyang            #+#    #+#             */
/*   Updated: 2021/04/03 21:14:48 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
private:
	std::string	_name;
	std::string	_type;

public:
	Zombie();
	Zombie(std::string name);
	Zombie(std::string name, std::string type);
	virtual ~Zombie();
	void	announce(void);
	std::string	get_name(void);
	std::string get_type(void);
	void	set_name(std::string name);
	void	set_type(std::string type);
};

#endif
