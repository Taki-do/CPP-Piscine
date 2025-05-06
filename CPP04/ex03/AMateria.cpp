/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:15:39 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/06 17:23:16 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	//std::cout << "AMateria constructor" << std::endl;
	type = "";
}

AMateria::AMateria(std::string const & type) {
	//std::cout << "AMateria constuctor with string" << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria& copy) {
	//std::cout << "AMateria copy" << std::endl;
	*this = copy;
}

AMateria& AMateria::operator=(const AMateria& copy) {
	//std::cout << "AMateria operator assignement" << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

AMateria::~AMateria() {
	//std::cout << "AMateria destructor" << std::endl;
}

void AMateria::use(ICharacter& target) {
	(void)target;
}

std::string const & AMateria::getType() const {
	return (type);
}