/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 15:28:46 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/09 17:42:37 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char *av[]) {
	if (ac > 1) {
		PmergeMe 	Algo;
		int			nb;
		
		for (int i = 1; i < ac; i++) {
			std::istringstream ss(av[i]);
			//secu
			ss >> nb;
			Algo.addNumber(nb);
		}
		Algo.sort();
		Algo.printSorted();
	}
	else {
		std::cerr << "Good usage is : ./PmergeMe X Y Z [...]" << std::endl;
	}
}