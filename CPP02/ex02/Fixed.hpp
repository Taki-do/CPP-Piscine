/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:05:07 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/22 15:56:32 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int 				fixed;
		const static int 	frac = 8;
	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed(const int nb);
		Fixed(const float fnb);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		
		int 	getRawBits( void ) const;
		void 	setRawBits( int const raw );
		float 	toFloat( void ) const;
		int		toInt( void ) const;
		static float min(float nb1, float nb2);
		static float min(const float nb1, const float nb2);
		static float max(float nb1, float nb2);
		static float max(const float nb1, const float nb2);
};

int operator>(Fixed& fix1, Fixed& fix2);
int operator<(Fixed& fix1, Fixed& fix2);
int operator>=(Fixed& fix1, Fixed& fix2);
int operator<=(Fixed& fix1, Fixed& fix2);
int operator==(Fixed& fix1, Fixed& fix2);
int operator!=(Fixed& fix1, Fixed& fix2);

Fixed& operator+(Fixed& fix1, Fixed& fix2);
Fixed& operator-(Fixed& fix1, Fixed& fix2);
Fixed& operator/(Fixed& fix1, Fixed& fix2);
Fixed& operator*(Fixed& fix1, Fixed& fix2);

Fixed& operator++(Fixed& fix1);
Fixed& operator--(Fixed& fix1);
Fixed& operator++(Fixed& fix1, int nb);
Fixed& operator--(Fixed& fix1, int nb);

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif