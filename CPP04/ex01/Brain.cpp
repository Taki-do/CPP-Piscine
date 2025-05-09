/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:47:13 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/05 15:06:34 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& copy) {
	std::cout << "Brain copy called" << std::endl;
	*this = copy;
}

Brain& Brain::operator=(const Brain& copy) {
	std::cout << "Brain operator assignement called" << std::endl;
	if (this != &copy)
	{
		int i = 0;
		while (i < 100)
		{
			this->ideas[i] = copy.ideas[i];
			i++;
		}
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}