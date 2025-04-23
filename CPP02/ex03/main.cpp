/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:48:26 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/23 15:25:03 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
	Point a(0, -3);
	Point b(3, 0);
	Point c(0, 3);
	
	Point p(10, -1);
	std::cout << "a(0, -3)" << std::endl
			  << "b is (3, 0)" << std::endl
			  << "c is (0, 3)" << std::endl;
	if (bsp(a, b, c, p))
		std::cout << "point at (10, -1) in the triangle is " << "true" << std::endl;
	else
		std::cout << "point at (10, -1) in the triangle is " << "false" << std::endl;
	Point p2(2, -0.93945f);
	if (bsp(a, b, c, p2))
		std::cout << "point at (2, -1) in the triangle is " << "true" << std::endl;
	else
		std::cout << "point at (2, -1) in the triangle is " << "false" << std::endl;
}