/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:08:43 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/01 12:00:25 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(const Animal& copy) {
	std::cout << "Animal copy constructor" << std::endl;
	*this = copy;
}

Animal& Animal::operator=(const Animal& copy) {
	std::cout << "Animal operator assignement" << std::endl;
	if (this != &copy)
		type = copy.type;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor" << std::endl;
}

std::string Animal::getType() const {
	return (type);
}

void Animal::makeSound() const {
	std::cout << "* Generic sound *" << std::endl;
}