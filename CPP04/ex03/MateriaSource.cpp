/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:13:51 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/06 18:05:47 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			return (stock[i]);
	}
	return (NULL);
}