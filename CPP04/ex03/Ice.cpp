/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:30:34 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/05 18:39:34 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice constructor" << std::endl;
}

Ice::Ice(const Ice& copy) : AMateria(copy) {
	std::cout << "Ice copy" << std::endl;
}

Ice& Ice::operator=(const Ice& copy) {
	std::cout << "Ice operator assignement" << std::endl;
	if (this != &copy)
		AMateria::operator=(copy);
	return (*this);
}

Ice* Ice::clone() const {
	return (new Ice());
}

void Ice::use(ICharacter& target) {
	std::cout <<  "* shoots an ice bolt at " << target.type << " *" << std::endl;
}
Ice::~Ice();