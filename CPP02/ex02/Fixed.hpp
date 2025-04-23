/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:05:07 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/23 10:02:44 by taomalbe         ###   ########.fr       */
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
		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		bool operator>(const Fixed& other);
		bool operator<(const Fixed& other);
		bool operator>=(const Fixed& other);
		bool operator<=(const Fixed& other);
		bool operator==(const Fixed& other);
		bool operator!=(const Fixed& other);
		static float min(Fixed& x, Fixed& y);
		static float min(const Fixed& x, const Fixed& y);
		static float max(Fixed& x, Fixed& y);
		static float max(const Fixed& x, const Fixed& y);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif