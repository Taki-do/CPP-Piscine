/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:21:55 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/22 10:44:04 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat& copy) : Animal(copy) {
	std::cout << "Cat copy constructor" << std::endl;
	*this = copy;
}

Cat& Cat::operator=(const Cat& copy) {
	std::cout << "Cat operator assignement" << std::endl;
	if (this != &copy)
	{
		Animal::operator=(copy);
		this->brain = new Brain(*copy.brain);
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructor" << std::endl;
	delete brain;
}

std::string Cat::getType() const {
	return (type);
}

void Cat::makeSound() const {
	std::cout << "* MIAOUUUU *" << std::endl;
}

Brain*	Cat::getBrain() {
	return (brain);
}
