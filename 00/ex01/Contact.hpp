/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 18:40:03 by juyang            #+#    #+#             */
/*   Updated: 2021/04/03 18:40:04 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _login;
		std::string _postal_address;
		std::string _email_address;
		std::string	_phone_number;
		std::string	_birthday_date;
		std::string	_favorite_meal;
		std::string	_underwear_color;
		std::string	_darkest_secret;

	public:
		void	set_first_name(std::string first_name);
		void	set_last_name(std::string last_name);
		void	set_nickname(std::string nickname);
		void	set_login(std::string login);
		void	set_postal_address(std::string postal_address);
		void	set_email_address(std::string email_address);
		void	set_phone_number(std::string phone_number);
		void	set_birthday_date(std::string birthday_date);
		void	set_favorite_meal(std::string favorite_meal);
		void	set_underwear_color(std::string underwear_color);
		void	set_darkest_secret(std::string darkest_secret);
		std::string	get_field(std::string data);
		int		init_contact(void);
};

#endif
