/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:28:24 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/03 18:16:21 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() {
	array = 0;
	_size = 0;
}

template <typename T>
unsigned int	Array<T>::size() const {
	return (_size);
}

template <typename T>
T&  Array<T>::operator[](unsigned int i) {
	if (i >= this->size())
		throw OutOfBoundsException();
	return (array[i]);
}

template <typename T>
Array<T>::Array(unsigned int n) {
	array = new T[n];
	_size = n;
	for (unsigned int i = 0; i < n; i++)
		array[i] = 0;
}

template <typename T>
Array<T>::Array(const Array<T>& copy) {
	*this = copy;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& copy) {
	if (this != &copy)
	{
		array = new T[copy.size()];
		for (unsigned int i = 0; i < copy.size(); i++)
			array[i] = copy.array[i];
		_size = copy.size();
	}
	return (*this);
}

template <typename T>
Array<T>::~Array() {
	delete[] array;
}

template <typename T>
const char* Array<T>::OutOfBoundsException::what() const throw() {
    return ("Trying to access out of bounds !");
}
