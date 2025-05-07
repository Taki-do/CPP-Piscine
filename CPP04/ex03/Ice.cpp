/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:30:34 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/07 10:27:39 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice") {
	//std::cout << "Ice constructor" << std::endl;
}

Ice::Ice(const Ice& copy) : AMateria(copy) {
	//std::cout << "Ice copy" << std::endl;
}

Ice& Ice::operator=(const Ice& copy) {
	//std::cout << "Ice operator assignement" << std::endl;
	if (this != &copy)
		AMateria::operator=(copy);
	return (*this);
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
	std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
Ice::~Ice() {
	//std::cout << "Ice destructor" << std::endl;
}