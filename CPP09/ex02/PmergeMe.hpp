/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 13:09:01 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/09 19:00:12 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <deque>
#include <vector>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <ctime>

class PmergeMe {
	private:
		std::vector<int>	vec;
		std::deque<int>		deq;
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& copy);
		PmergeMe& operator=(const PmergeMe& copy);
		~PmergeMe();
		void	addNumber(int nb);
		void	addNumberDeque(int nb);
		int 	Jacobsthal(int k);
		void	insert(std::vector<int> &main, std::vector<int> &pend, 
			int odd, std::vector<int> &left, std::vector<int> &vec, bool is_odd, int order);
		void	sort();
		void	print();
		void	insert_deque(std::deque<int> &main, std::deque<int> &pend, 
			int odd, std::deque<int> &left, std::deque<int> &vec, bool is_odd, int order);
		void	sort_deque();
		void	print_deque();
		bool	checkDouble(int nb);
};

#endif