/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:52:26 by juyang            #+#    #+#             */
/*   Updated: 2021/04/21 17:52:26 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct	Data
{
	std::string s1;
	int	n;
	std::string	s2;
};

void		*serialize(void)
{
	char	*str = new char[52];
	std::string randomPull("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	std::string *strPtr;
	std::string *str2Ptr;
	int	*intPtr;

	strPtr = reinterpret_cast<std::string *>(str);
	str2Ptr = reinterpret_cast<std::string *>(static_cast<char *>(str) + 28);
	for (int i = 0; i < 8; i++)
	{
		*strPtr += randomPull[rand() % 62];
		*str2Ptr += randomPull[rand() % 62];
	}
	intPtr = reinterpret_cast<int *>(str + 24);
	*intPtr = rand() % INT_MAX;

	std::cout << *strPtr << *intPtr << *str2Ptr << std::endl;

	return reinterpret_cast<void *>(str);
}

Data		*deserialize(void *raw)
{
	struct Data *data = new struct Data;

	data->s1 = *(reinterpret_cast<std::string *>(raw));
	data->n = *(reinterpret_cast<int *>(static_cast<char *>(raw) + 24));
	data->s2 = *(reinterpret_cast<std::string *>(static_cast<char *>(raw) + 28));

	return data;
}

int			main(void)
{
	struct Data *data;
	void	*raw;

	std::srand(std::time(NULL));
	raw = serialize();
	data = deserialize(raw);
	std::cout << "Data->s1 : " << data->s1 << std::endl;
	std::cout << "Data->n : " << data->n << std::endl;
	std::cout << "Data->s2 : " << data->s2 << std::endl;
	delete data;
	delete[] reinterpret_cast<char *>(raw);

	return (0);
}
