/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:46:13 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/04 20:03:12 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int N) {
	end = static_cast<int>(N);
	tab = new int[end];
	it = 0;
}

Span::Span(const Span& copy) {
	*this = copy;
}

Span& Span::operator=(const Span& copy) {
	if (this != &copy)
	{
		tab = new int[copy.end];
		for (unsigned int i = 0; i < copy.end; i++) {
			tab[i] = copy.tab[i];
		}
		end = copy.end;
		it = 0;
	}
	return (*this);
}

Span::~Span() {
	delete[] tab;
}

void	Span::addNumber(int nb) {
	if (it < end)
		tab[it++] = nb;
	else
		throw addNumberException();
}

const char* Span::addNumberException::what() const throw() {
	return ("Can't add number, limit exceded !");
}

int	Span::shortestSpan() {
	int	sSpan;
	if (end <= 1)
		throw SpanSearchException();
	if (tab[0] - tab[1] >= 0)
		sSpan = tab[0] - tab[1];
	else
		sSpan = tab[1] - tab[0];
	for (unsigned int j = 0; j < end; j++) { //rajouter end - 1 necessaire ?
		for (unsigned int i = j + 1; i < end; i++) {
			if (tab[j] - tab[i] >= 0)
			{
				if (tab[j] - tab[i] < sSpan)
					sSpan = tab[j] - tab[i];
			}
			else
			{
				if (tab[i] - tab[j] < sSpan)
					sSpan = tab[i] - tab[j];
			}
		}
	}
	return (sSpan);
}

int	Span::longestSpan() {
	int	lSpan;
	if (end <= 1)
		throw SpanSearchException();
	if (tab[0] - tab[1] >= 0)
		lSpan = tab[0] - tab[1];
	else
		lSpan = tab[1] - tab[0];
	for (unsigned int j = 0; j < end; j++) {
		for (unsigned int i = j + 1; i < end; i++) {
			if (tab[j] - tab[i] >= 0)
			{
				if (tab[j] - tab[i] > lSpan)
					lSpan = tab[j] - tab[i];
			}
			else
			{
				if (tab[i] - tab[j] > lSpan)
					lSpan = tab[i] - tab[j];
			}
		}
	}
	return (lSpan);
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