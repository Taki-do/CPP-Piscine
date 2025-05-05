/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:34:39 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/05 17:38:46 by taomalbe         ###   ########.fr       */
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
	return 0;
}