/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:47:13 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/22 10:42:23 by taomalbe         ###   ########.fr       */
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

std::string Brain::getIdea(int nb) {
	return (ideas[nb]);
}

void		Brain::setIdea(int nb, std::string s) {
	ideas[nb] = s;
}