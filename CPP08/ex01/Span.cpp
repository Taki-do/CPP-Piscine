/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:46:13 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/05 13:22:03 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int N) {
	end = static_cast<int>(N);
}

Span::Span(const Span& copy) {
	*this = copy;
}

Span& Span::operator=(const Span& copy) {
	if (this != &copy)
	{
		vec = copy.vec;
		end = copy.end;
	}
	return (*this);
}

Span::~Span() {}

void	Span::addNumber(int nb) {
	if (vec.size() < end)
		vec.push_back(nb);
	else
		throw addNumberException();
}

const char* Span::addNumberException::what() const throw() {
	return ("Can't add number, limit exceded !");
}

int	Span::shortestSpan() {
	if (end <= 1)
		throw SpanSearchException();
	std::vector<int> tmp = vec;
	std::sort(tmp.begin(), tmp.end());
	return (tmp[1] - tmp[0]);
}

int	Span::longestSpan() {
	if (end <= 1)
		throw SpanSearchException();
	std::vector<int> tmp = vec;
	std::reverse(tmp.begin(), tmp.end());
	return (tmp[0] - tmp[tmp.size() - 1]);
}

const char * Span::SpanSearchException::what() const throw() {
	return ("Can't find span, no numbers stored or there is only one number !");
}

void	Span::SpamNumbers(int start, int fend) {
	if (end > 1)
	{
		try {
			for (int i = start; i < fend; i++) {
				addNumber(i);
			}
		}
		catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
		
	}
}