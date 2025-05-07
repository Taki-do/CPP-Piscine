/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:13:51 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/07 10:55:00 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource() {
	//std::cout << "MateriaSource constructor" << std::endl;
	id = 0;
}

MateriaSource::MateriaSource(const MateriaSource& copy) : IMateriaSource(copy) {
	//std::cout << "MateriaSource copy" << std::endl;
	*this = copy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& copy) {
	//std::cout << "MateriaSource operator assignement" << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < id; i++)
			delete stock[i];
		for (int i = 0; i < copy.id; i++)
			stock[i] = copy.stock[i];
		id = copy.id;
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	//std::cout << "MateriaSource destructor" << std::endl;
	for (int i = 0; i < id; i++)
		delete stock[i];
}

void MateriaSource::learnMateria(AMateria* m) {
	//std::cout << "MateriaSource learnMateria" << std::endl;
	if (id >= 0 && id <= 3)
		stock[id++] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	//std::cout << "MateriaSource createMateria" << std::endl;
	for (int i = 0; i < id; i++)
	{
		if (stock[i]->getType() == type)
		{
			if (type == "ice")
				return (stock[i]->clone());
			else if (type == "cure")
				return (stock[i]->clone());
			else
				return (NULL);
		}
	}
	return (NULL);
}