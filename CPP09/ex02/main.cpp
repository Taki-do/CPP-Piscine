/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 15:28:46 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/09 19:03:09 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char *av[]) {
	if (ac > 1) {
		PmergeMe 	Algo;
		int			nb;
		for (int i = 1; i < ac; i++) {
			std::istringstream ss(av[i]);
			ss >> nb;
			if (ss.fail() || nb < 0) {
				std::cerr << "Error : PmergeMe only takes positives integers.\n";
				return (1);
			}
			if (!Algo.checkDouble(nb)) {
				std::cerr << "Error : PmergeMe do not takes duplicates.\n";
				return (1);
			}
			Algo.addNumber(nb);
			Algo.addNumberDeque(nb);
		}
		std::cout << "Before: ";
		Algo.print();
		std::clock_t start = std::clock();
		Algo.sort();
		std::clock_t end = std::clock();
		double duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;
		
		std::clock_t start1 = std::clock();
		Algo.sort_deque();
		std::clock_t end1 = std::clock();
		double duration1 = static_cast<double>(end1 - start1) / CLOCKS_PER_SEC;
		
		std::cout << "After: ";
		Algo.print();
		std::cout << "Time to process a range of " << ac - 1
				  << " elements with std::vector : " << duration * 1e6 << " us\n";
		std::cout << "Time to process a range of " << ac - 1
				  << " elements with std::deque : " << duration1 * 1e6 << " us\n";
	}
	else {
		std::cerr << "Good usage is : ./PmergeMe X Y Z [...]" << std::endl;
	}
}