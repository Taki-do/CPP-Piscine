/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:01:12 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/06 17:23:55 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : ICharacter("") {
	//std::cout << "Character constructor" << std::endl;
	slot = 0;
	droped = 0;
}

Character::Character(std::string cname) : ICharacter(cname) {
	//std::cout << "Character constructor" << std::endl;
	slot = 0;
	droped = 0;
}

Character::Character(const Character& copy) : ICharacter(copy) {
	//std::cout << "Character copy" << std::endl;
	*this = copy;
}

Character& Character::operator=(const Character& copy) {
	//std::cout << "Character assignement operator" << std::endl;
	if (this != &copy)
	{
		type = copy.type;
		for (int i = 0; i < slot; i++)
			delete materia[i];
		for (int i = 0; i < copy.slot; i++)
			materia[i] = copy.materia[i];
		slot = copy.slot;
		droped = copy.droped;
	}
	return (*this);
}

Character::~Character() {
	//std::cout << "Character destructor" << std::endl;
	for (int i = 0; i < slot; i++)
		delete materia[i];
	for (int i = 0; i < droped; i++)
		delete droped_mat[i];
}

std::string const & Character::getName() const {
	return (type);
}

void Character::equip(AMateria* m) {
	if (slot < 4)
		materia[slot++] = m;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3)
	{
		droped_mat[droped++] = materia[idx];
		materia[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx <= 3)
	{
		if (materia[idx] != NULL)
			materia[idx]->use(target);
	}
}