/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:43:08 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/23 12:05:55 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		fixed = other.fixed;
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed);
}

void Fixed::setRawBits( int const raw ) {
	fixed = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

Fixed::Fixed(const int nb) {
	fixed = nb << frac;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float fnb) {
	fixed = roundf(fnb * (1 << frac));
	std::cout << "Float constructor called" << std::endl;
}

float 	Fixed::toFloat( void ) const {
	return ((float)fixed / (1 << frac));
}

int		Fixed::toInt( void ) const {
	return (fixed / (1 << frac));
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
	out << fixed.toFloat();
	return (out);
}