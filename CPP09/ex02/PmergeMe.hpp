/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 13:09:01 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/09 17:42:46 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <list>
#include <vector>
#include <sstream>
#include <cmath>
#include <algorithm>

class PmergeMe {
	private:
		std::vector<int>	vec;
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& copy);
		PmergeMe& operator=(const PmergeMe& copy);
		~PmergeMe();
		void	addNumber(int nb);
		int 	Jacobsthal(int k);
		void	insert(std::vector<int> &main, std::vector<int> &pend, 
			int odd, std::vector<int> &left, std::vector<int> &vec, bool is_odd, int order);
		void	sort();
		void	printSorted();
};

#endif