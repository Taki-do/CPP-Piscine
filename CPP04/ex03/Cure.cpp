/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:22:34 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/07 10:26:46 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	//std::cout << "Cure constructor" << std::endl;
}

Cure::Cure(const Cure& copy) : AMateria(copy) {
	//std::cout << "Cure copy" << std::endl;
}

Cure& Cure::operator=(const Cure& copy) {
	//std::cout << "Cure operator assignement" << std::endl;
	if (this != &copy)
		AMateria::operator=(copy);
	return (*this);
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure() {
	//std::cout << "Cure destructor" << std::endl;
}