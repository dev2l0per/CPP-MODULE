/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 19:31:13 by juyang            #+#    #+#             */
/*   Updated: 2021/04/21 19:31:14 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

class Awesome {
	private:
		int _n;
	
	public:
		Awesome( void ) : _n(42) { return; }
		int	get( void ) const { return this->_n; }
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template <typename T>
void f(T &p)
{
    std::cout << p << std::endl;
}

int main(void)
{
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];

	iter (tab, 5, f);
	iter (tab2, 5, f);

    int iarr[3] = {1, 2, 3};
    iter(iarr, 3, f);
    
    std::cout << std::endl;

    char carr[3] = {'a', 'b', 'c'};
    iter(carr, 3, f);

    std::cout << std::endl; 
    
    float farr[3] = {1.1f, 2.2f, 3.3f};
    iter(farr, 3, f);

    std::cout << std::endl; 
    
    double darr[3] = {1.11, 2.22, 3.33};
    iter(darr, 3, f); 
    
    std::cout << std::endl; 
    
    std::string sarr[3] = {"abc", "def", "ghj"};
    iter(sarr, 3, f);
}