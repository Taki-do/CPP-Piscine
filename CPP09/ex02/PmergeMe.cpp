/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 10:45:57 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/09 20:18:00 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& copy) {
	*this = copy;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& copy) {
	if (this != &copy) {
		vec = copy.vec;
	}
	return (*this);
}

PmergeMe::~PmergeMe() {}

void	PmergeMe::addNumber(int nb) {
	vec.push_back(nb);
}

void	PmergeMe::addNumberDeque(int nb) {
	deq.push_back(nb);
}

int PmergeMe::Jacobsthal(int k) {
    return round((pow(2, k + 1) + pow(-1, k)) / 3);
}

void	PmergeMe::insert(std::vector<int> &main, std::vector<int> &pend, 
	int odd, std::vector<int> &left, std::vector<int> &vec, bool is_odd, int order) {
	std::vector<int>::iterator end;

	if (pend.size() == 1) {
		end = std::upper_bound(main.begin(), main.end(), *pend.begin());
		main.insert(end, *pend.begin());
	}
	else if (pend.size() > 1) {
		size_t jc = 3;
		size_t count = 0;
		size_t idx;
		size_t decrease;
		while (!pend.empty()) {
			idx = Jacobsthal(jc) - Jacobsthal(jc - 1);
			if (idx > pend.size())
				idx = pend.size();
			decrease = 0;
			while (idx) {
				end = main.begin();
				if (Jacobsthal(jc + count) - decrease <= main.size())
					end = main.begin() + Jacobsthal(jc + count) - decrease;
				else
					end = main.end();
				end = std::upper_bound(main.begin(), end, *(pend.begin() + idx - 1));
				main.insert(end, *(pend.begin() + idx - 1));
				pend.erase(pend.begin() + idx - 1);

				idx--;
				decrease--;
				count++;
			}
			jc++;
		}
	}
	std::vector<int> reconstruct;

	if (is_odd) {
		end = std::upper_bound(main.begin(), main.end(), odd);
		main.insert(end, odd);
	}
	for (std::vector<int>::iterator i = main.begin(); i != main.end(); i++) {
		std::vector<int>::iterator it = std::find(vec.begin(), vec.end(), *i);
		reconstruct.insert(reconstruct.end(), it - (order - 1), it + 1);
	}
	reconstruct.insert(reconstruct.end(), left.begin(), left.end());
	vec = reconstruct;
}

void	PmergeMe::sort() {
	static int order = 1;
	int	unit_size = vec.size() / order;
	if (unit_size < 2)
		return ;
	bool is_odd = unit_size % 2;
	std::vector<int>::iterator start = vec.begin();
	std::vector<int>::iterator end = vec.begin() + ((order * unit_size) - (is_odd * order));

	for (std::vector<int>::iterator it = start; it < end; it += (order * 2)) {
		if (*(it + (order - 1)) >  *(it + ((order * 2) - 1))) {
			for (int i = 0; i < order; i++)
				std::swap(*(it + i), *(it + i + order));
		}
	}
	order *= 2;
	sort();
	order /= 2;
	
	std::vector<int> 	main;
	std::vector<int> 	pend;
	std::vector<int>	left;
	int					odd;
	main.push_back(*(start + order - 1));
	main.push_back(*(start + order * 2 - 1));
	for (std::vector<int>::iterator it = start + order * 2; it < end; it += order) {
		pend.push_back(*(it + order - 1));
		it += order;
		main.push_back(*(it + order - 1));
	}
	if (is_odd)
		odd = *(end + order - 1);
	left.insert(left.end(), end + (order * is_odd), vec.end());
	if (is_odd || !pend.empty())
		insert(main, pend, odd, left, vec, is_odd, order);
}

void	PmergeMe::print() {
	std::vector<int>::iterator 	it;
	size_t						size;
	size = vec.size();
	//if (vec.size() > 5)
	//	size = 5;
	for (size_t i = 0; i < size; i++) {
		std::cout << vec[i] << " ";
	}
	//if (vec.size() > 5)
	//	std::cout << "[...]";
	std::cout << std::endl;
}

void	PmergeMe::insert_deque(std::deque<int> &main, std::deque<int> &pend, 
	int odd, std::deque<int> &left, std::deque<int> &deq, bool is_odd, int order) {
	std::deque<int>::iterator end;

	if (pend.size() == 1) {
		end = std::upper_bound(main.begin(), main.end(), *pend.begin());
		main.insert(end, *pend.begin());
	}
	else if (pend.size() > 1) {
		size_t jc = 3; //Jacobsthal number 3
		size_t count = 0;
		size_t idx;
		size_t decrease;
		while (!pend.empty()) {
			idx = Jacobsthal(jc) - Jacobsthal(jc - 1);
			if (idx > pend.size())
				idx = pend.size();
			decrease = 0;
			while (idx) {
				end = main.begin();
				if (Jacobsthal(jc + count) - decrease <= main.size())
					end = main.begin() + Jacobsthal(jc + count) - decrease;
				else
					end = main.end();
				end = std::upper_bound(main.begin(), end, *(pend.begin() + idx - 1));
				main.insert(end, *(pend.begin() + idx - 1));
				pend.erase(pend.begin() + idx - 1);

				idx--;
				decrease--;
				count++;
			}
			jc++;
		}
	}
	std::deque<int> reconstruct;

	if (is_odd) {
		end = std::upper_bound(main.begin(), main.end(), odd);
		main.insert(end, odd);
	}
	for (std::deque<int>::iterator i = main.begin(); i != main.end(); i++) {
		std::deque<int>::iterator it = std::find(deq.begin(), deq.end(), *i);
		reconstruct.insert(reconstruct.end(), it - (order - 1), it + 1);
	}
	reconstruct.insert(reconstruct.end(), left.begin(), left.end());
	deq = reconstruct;
}

void	PmergeMe::sort_deque() {
	static int order = 1;
	int	unit_size = deq.size() / order;
	if (unit_size < 2)
		return ; //pas de paires
	bool is_odd = unit_size % 2;
	std::deque<int>::iterator start = deq.begin();
	std::deque<int>::iterator end = deq.begin() + ((order * unit_size) - (is_odd * order));

	for (std::deque<int>::iterator it = start; it < end; it += (order * 2)) {
		if (*(it + (order - 1)) >  *(it + ((order * 2) - 1))) {
			for (int i = 0; i < order; i++)
				std::swap(*(it + i), *(it + i + order));
		}
	}
	order *= 2;
	sort();
	order /= 2;

	std::deque<int> 	main;
	std::deque<int> 	pend;
	std::deque<int>	left;
	int					odd;
	main.push_back(*(start + order - 1));
	main.push_back(*(start + order * 2 - 1));
	for (std::deque<int>::iterator it = start + order * 2; it < end; it += order) {
		pend.push_back(*(it + order - 1));
		it += order;
		main.push_back(*(it + order - 1));
	}
	if (is_odd)
		odd = *(end + order - 1);
	left.insert(left.end(), end + (order * is_odd), deq.end());
	if (is_odd || !pend.empty())
		insert_deque(main, pend, odd, left, deq, is_odd, order);
}

void	PmergeMe::print_deque() {
	std::deque<int>::iterator 	it;
	for (size_t i = 0; i < deq.size(); i++) {
		std::cout << deq[i] << " ";
	}
	std::cout << std::endl;
}

bool	PmergeMe::checkDouble(int nb) {
	for (size_t i = 0; i < vec.size(); i++) {
		if (vec[i] == nb)
			return (false);
	}
	return (true);
}