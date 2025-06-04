/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:38:45 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/04 19:56:10 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

class Span {
	private:
		unsigned int 	end;
		unsigned int	it;
		int				*tab;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& copy);
		Span& operator=(const Span& copy);
		~Span();
		void	addNumber(int nb);
		class	addNumberException : public std::exception {
			public:
				virtual const char * what() const throw();
		};
		int	shortestSpan();
		int	longestSpan();
		class	SpanSearchException : public std::exception {
			public:
				virtual const char * what() const throw();
		};
		void	SpamNumbers(int start, int fend);
};

#endif