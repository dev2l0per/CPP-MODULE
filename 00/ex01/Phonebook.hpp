/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 19:01:50 by juyang            #+#    #+#             */
/*   Updated: 2021/04/03 19:01:51 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook
{
	private:
		int		_contact_count;
		Contact	_Contact[8];

	public:
		Phonebook();
		virtual ~Phonebook();
		void	add_contact(Contact contact);
		void	search_contact(int index);
		void	print_header(void);
		void	print_data(std::string data);
		void	print_search_header(void);
		void	print_phonebook(void);
};

#endif
