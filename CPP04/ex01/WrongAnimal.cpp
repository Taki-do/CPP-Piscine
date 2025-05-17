/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 12:09:26 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/17 09:37:39 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
	std::cout << "WrongAnimal copy constructor" << std::endl;
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy) {
	std::cout << "WrongAnimal operator assignement" << std::endl;
	if (this != &copy)
		type = copy.type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor" << std::endl;
}

std::string WrongAnimal::getType() const {
	return (type);
}

void WrongAnimal::makeSound() const {
	std::cout << "* Wrong Generic sound *" << std::endl;
}