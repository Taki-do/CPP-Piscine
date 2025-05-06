/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:55:22 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/06 17:24:50 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

ICharacter::ICharacter() {
	//std::cout << "ICharacter constructor" << std::endl;
}

ICharacter::ICharacter(std::string name) {
	//std::cout << "ICharacter type constructor" << std::endl;
	type = name;
}

ICharacter::ICharacter(const ICharacter& copy) {
	//std::cout << "ICharacter copy" << std::endl;
	*this = copy;
}

ICharacter& ICharacter::operator=(const ICharacter& copy) {
	//std::cout << "ICharacter assignement operator" << std::endl;
	(void)copy;
	return (*this);
}
