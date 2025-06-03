/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 10:24:28 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/03 10:43:58 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}

Serializer::Serializer() {} ;

Serializer::Serializer(const Serializer& copy) {
	*this = copy;
}

Serializer& Serializer::operator=(const Serializer& copy) {
	(void)copy;
	return (*this);
}

Serializer::~Serializer() {} ;