/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 10:37:27 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/03 10:52:37 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void) {
	Data 		s;
	Data		*dsrz;
	uintptr_t	srz;
	//Serializer  serial; //can't declare

	s.i = 42;
	srz = Serializer::serialize(&s);
	std::cout << "serialized Data = " << srz << std::endl;
	std::cout << "serialized Data in hex = " << std::hex << srz << std::endl;
	dsrz = Serializer::deserialize(srz);
	std::cout << std::endl << "deserialized Data = " << dsrz << std::endl;
	std::cout << "final value = " << std::dec << dsrz->i << std::endl; //good ??
}