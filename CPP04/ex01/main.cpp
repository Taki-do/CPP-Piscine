/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:34:39 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/22 10:45:29 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

int main(void)
{
	int	size = 4;
	
	int	i = 0;
	const Animal *tab[size];
	
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

/*
#define Nb_Animals 10
int main()
{
	{	
		std::cout << WHITE << " TESTING ANIMAL ARRAY" << RESET << std ::endl;
		
		Animal	*array[Nb_Animals + 1];
		array[Nb_Animals] = NULL;
		int	nb_cat = Nb_Animals / 2;

		for (int i = 0; i < nb_cat; i++)
			array[i] = new Cat();
		for (int i = nb_cat; i < Nb_Animals; i++)
			array[i] = new Dog();
		for (int i = 0; i < Nb_Animals; i++)
			array[i]->makeSound();
		for (int i = 0; i < Nb_Animals; i++)
			delete array[i];
	}
	{
		std::cout << WHITE << "\n TESTING CAT COPY" << RESET << std::endl;
		
		Cat * cat = new Cat();
		cat->getBrain()->setIdeas(0, "The cat is hungry");
		cat->getBrain()->setIdeas(1, "The cat is sleeping");
		cat->getBrain()->setIdeas(2, "The cat looks at you with disdain");
		for (int i = 0; i < 3; i++)
			std::cout << YEL << "Idea n°" << i << ": " << cat->getBrain()->getIdeas(i)
					<< RESET << std::endl;
		
		Cat * copycat = new Cat(*cat);
		for (int i = 0; i < 3; i++)
			std::cout << CYAN << "Idea n°" << i << ": " << copycat->getBrain()->getIdeas(i)
					<< RESET << std::endl;
					
		copycat->getBrain()->setIdeas(0, "The copyCat is not hungry");
		copycat->getBrain()->setIdeas(1, "The copyCat is not sleeping");
		copycat->getBrain()->setIdeas(2, "The copyCat look at you with love");
		
		for (int i = 0; i < 3; i++)
			std::cout << YEL << "Idea n°" << i << ": " << cat->getBrain()->getIdeas(i)
					<< RESET << std::endl;
		for (int i = 0; i < 3; i++)
		std::cout << CYAN << "Idea n°" << i << ": " << copycat->getBrain()->getIdeas(i)
				<< RESET << std::endl;
	
		delete cat;
		delete copycat;
	}
	{
		std::cout << WHITE << "\n TESTING DOG COPY" << RESET << std::endl;
		
		Dog * dog = new Dog();
		dog->getBrain()->setIdeas(0, "The Dog is hungry");
		dog->getBrain()->setIdeas(1, "The Dog is sleeping");
		dog->getBrain()->setIdeas(2, "The Dog looks at you with disdain");
		for (int i = 0; i < 3; i++)
			std::cout << YEL << "Idea n°" << i << ": " << dog->getBrain()->getIdeas(i)
					<< RESET << std::endl;
		
		Dog * copyDog = new Dog(*dog);
		for (int i = 0; i < 3; i++)
			std::cout << CYAN << "Idea n°" << i << ": " << copyDog->getBrain()->getIdeas(i)
					<< RESET << std::endl;
					
		copyDog->getBrain()->setIdeas(0, "The copyDog is not hungry");
		copyDog->getBrain()->setIdeas(1, "The copyDog is not sleeping");
		copyDog->getBrain()->setIdeas(2, "The copyDog look at you with love");
		
		for (int i = 0; i < 3; i++)
			std::cout << YEL << "Idea n°" << i << ": " << dog->getBrain()->getIdeas(i)
					<< RESET << std::endl;
		for (int i = 0; i < 3; i++)
		std::cout << CYAN << "Idea n°" << i << ": " << copyDog->getBrain()->getIdeas(i)
				<< RESET << std::endl;
	
		delete dog;
		delete copyDog;
	}
	return (0);
}
	*/