/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 19:19:35 by juyang            #+#    #+#             */
/*   Updated: 2021/04/21 19:19:35 by juyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

class Awesome {
	public:
		Awesome( void ) {}
		Awesome( int n ) : _n(n) { }
		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }

		int	getN(void) { return (this->_n); }

	private:
		int _n;
};

int		main(void)
{
	int a = 2;
	int b = 3;
	Awesome awesomeA = Awesome(10);
	Awesome awesomeB = Awesome(20);
	Awesome temp = Awesome();

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	::swap(awesomeA, awesomeB);
	std::cout << "awesomeA = " << awesomeA.getN() << ", awesomeB = " << awesomeB.getN() << std::endl;
	temp = min( awesomeA, awesomeB );
	std::cout << "min( awesomeA, awesomeB ) = " << temp.getN() << std::endl;
	temp = max( awesomeA, awesomeB );
	std::cout << "max( awesomeA, awesomeB ) = " << temp.getN() << std::endl;

	return 0;
}
