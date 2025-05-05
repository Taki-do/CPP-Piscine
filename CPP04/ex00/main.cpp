/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:34:39 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/05 14:40:28 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	
	delete meta;
	delete i;
	std::cout << std::endl << "[Wrong animals are coming]" << std::endl << std::endl;
	
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wi = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << wi->getType() << " " << std::endl;
	wi->makeSound();
	j->makeSound();
	wmeta->makeSound();

	delete wmeta;
	delete wi;
	delete j;
	std::cout << std::endl << "[Copy test]" << std::endl << std::endl;
	const Animal *copy = new Cat();
	const Animal new_animal(*copy);

	new_animal.makeSound();
	delete copy;
	return (0);
}