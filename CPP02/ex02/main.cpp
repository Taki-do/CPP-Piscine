/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:48:26 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/23 10:21:08 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	//try any operator if you want
	Fixed const b( Fixed( 5.05f ) / Fixed( 2 ) );
	
	std::cout << "a = " << a << std::endl;
	std::cout << "a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	if (a > b)
		std::cout << "a is superior to b" << std::endl;
	if (a < b)
		std::cout << "a is inferior to b" << std::endl;
	if (a >= b)
		std::cout << "a is superior equal to b" << std::endl;
	if (a <= b)
		std::cout << "a is inferior equal to b" << std::endl;
	if (a == b)
		std::cout << "a is equal to b" << std::endl;
	if (a != b)
		std::cout << "a is not equal to b" << std::endl;
	std::cout << "minimum between : " << a << " and " << b << " is : " << Fixed::min( a, b ) << std::endl;
	std::cout << "maximum between : " << a << " and " << b << " is : " << Fixed::max( a, b ) << std::endl;
	
	return (0);
}