/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:34:39 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/22 10:49:32 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

int main(void)
{
	int	size = 4;
	
	int	i = 0;
	const Animal *tab[size];
	//Animal a; //compil err
	std::cout << "[Tab init started]" << std::endl << std::endl;
	while (i < size / 2)
		tab[i++] = new Dog();
	std::cout << std::endl << "[Dog init finished]" << std::endl << std::endl;
	while (i < size)
		tab[i++] = new Cat();
	std::cout << std::endl << "[Cat init finished]" << std::endl;
	std::cout << std::endl << "[Tab init finished]" << std::endl << std::endl;
	i = 0;
	while (i < size)
		delete tab[i++];
	std::cout << std::endl << "[Tab delete finished]" << std::endl;
	std::cout << std::endl << "[Deep copy test]" << std::endl;
	Cat *cat = new Cat();
	cat->getBrain()->setIdea(0, "Chat a faim");
	cat->getBrain()->setIdea(1, "Chat sais pas parler");
	cat->getBrain()->setIdea(2, "Chat dit chat tout le temps");

	for (int i = 0; i < 3; i++) {
		std::cout << "Cat ideas no " << i << " : " << cat->getBrain()->getIdea(i) << std::endl;
	}
	Cat *copychat = new Cat(*cat);
	for (int i = 0; i < 3; i++) {
		std::cout << "Copychat ideas no " << i << " : " << copychat->getBrain()->getIdea(i) << std::endl;
	}
	std::cout << std::endl << "[Change ideas for copycat, not for cat]" << std::endl;
	copychat->getBrain()->setIdea(0, "Chat a pas faim");
	copychat->getBrain()->setIdea(1, "Chat pas sais pas parler");
	copychat->getBrain()->setIdea(2, "Chat dit pas chat tout le temps");
	for (int i = 0; i < 3; i++) {
		std::cout << "Cat ideas no " << i << " : " << cat->getBrain()->getIdea(i) << std::endl;
	}
	for (int i = 0; i < 3; i++) {
		std::cout << "Copychat ideas no " << i << " : " << copychat->getBrain()->getIdea(i) << std::endl;
	}
	delete cat;
	delete copychat;
	return 0;
}