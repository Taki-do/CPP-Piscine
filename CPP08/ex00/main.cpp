/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:08:14 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/04 18:32:24 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	
    std::list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);

	try {
		easyfind(v, 1);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	try {
		easyfind(l, 10);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	return 0;
}
