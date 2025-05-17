/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 12:12:51 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/17 09:31:44 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat default constructor" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy) {
	std::cout << "WrongCat copy constructor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy) {
	std::cout << "WrongCat operator assignement" << std::endl;
	if (this != &copy)
		WrongAnimal::operator=(copy);
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor" << std::endl;
}

std::string WrongCat::getType() const {
	return (type);
}

void WrongCat::makeSound() const {
	std::cout << "* WRONG MIAOUUUU *" << std::endl;
}