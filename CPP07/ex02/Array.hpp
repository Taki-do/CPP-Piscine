/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:20:34 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/03 17:53:26 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {
	private:
		T				*array;
		unsigned int	_size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& copy);
		Array& operator=(const Array& copy);
		~Array();
		T&  operator[](unsigned int i);
		class OutOfBoundsException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
		unsigned int	size() const;
};

#include "Array.tpp"

#endif