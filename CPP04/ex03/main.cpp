/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:40:09 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/21 11:35:51 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << "[Trying to create thunder, since the program don't know it exist, it will not be created]" << std::endl;
	tmp = src->createMateria("thunder");
	me->equip(tmp);
	
	std::cout << "[shooting or healing bob]" << std::endl;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	std::cout << "[shooting or healing alice]" << std::endl;
	ICharacter* alice = new Character("alice");
	me->use(0, *alice);
	me->use(1, *alice);
	me->use(2, *alice);
	me->use(3, *alice);
	std::cout << "[Here is a call to the 5th slot of the inventory, who do not exist (so nothing is used)]" << std::endl;
	me->use(4, *alice);
	std::cout << "[We unqeuip now the first power (ice) and we try to use it (yes nothing under this sentence)]" << std::endl;
	me->unequip(0);
	me->use(0, *alice);
	
	std::cout << "[Now we clone it (deep copy), and we will try to use the Materia aquired in clone with second]" << std::endl;

	Character guy("chill_guy");
	guy.equip(src->createMateria("ice"));
	
	Character clone("clone");
	clone = guy;
	std::cout << "[We see that clone can use first item in it's inventory thanks to the copy of chill_guy]" << std::endl;
	clone.use(0, *alice);
	std::cout << "[If we unequip clone's first slot and try to use first slot of clone, it will works thanks to deep copy !]" << std::endl;
	clone.unequip(0);
	guy.use(0, *alice);
	
	delete alice;
	delete bob;
	delete me;
	delete src;
	
	return 0;
}
