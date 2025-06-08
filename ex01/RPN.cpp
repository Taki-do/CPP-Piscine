/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 10:52:34 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/08 11:55:52 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN& copy) {
	*this = copy;
}

RPN& RPN::operator=(const RPN& copy) {
	if (this != &copy) {
		s = copy.s;
	}
	return (*this);
}

RPN::~RPN() {}

int		RPN::isoperator(char c) {
	return (c == '+' || c == '-' || c == '/' || c == '*');
}

int		RPN::calcoperator(int nb1, int nb2, char op) {
	if (op == '+')
		return (nb1 + nb2);
	if (op == '-')
		return (nb1 - nb2);
	if (op == '/')
		return (nb1 / nb2); //protection div 0 ??
	if (op == '*')
		return (nb1 * nb2);
	return (0); //a voir
}

int	RPN::setStack(char *arg) {
	std::string str(arg);
	int	nb1, nb2;
	int	flag = 0;

	for (long unsigned int i = 0; i < str.size(); i++) {
		if (isdigit(str[i])) {
			if (i >= 1) {
				if (isdigit(str[i - 1]))
					flag = 1;
			}
			s.push(str[i] - '0');
		}
		else if (s.size() >= 2 && isoperator(str[i])) {
			nb2 = s.top();
			s.pop();
			nb1 = s.top();
			s.pop();
			s.push(calcoperator(nb1, nb2, str[i]));
		}
		else if (str[i] != ' ' || flag) {
			std::cerr << "Error\n";
			return (0);
		}
	}
	return (1);
}

int		RPN::getStackTop() {
	return (s.top());
}