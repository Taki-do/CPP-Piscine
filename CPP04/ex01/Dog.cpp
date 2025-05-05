/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:27:14 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/05 15:00:22 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog& copy) : Animal(copy) {
	std::cout << "Dog copy constructor" << std::endl;
	*this = copy;
}

Dog& Dog::operator=(const Dog& copy) {
	std::cout << "Dog operator assignement" << std::endl;
	if (this != &copy)
	{
		Animal::operator=(copy);
		this->brain = copy.brain;
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destructor" << std::endl;
	delete brain;
}

std::string Dog::getType() const {
	return (type);
}

void Dog::makeSound() const {
	std::cout << "* WOUF WOUF *" << std::endl;
}