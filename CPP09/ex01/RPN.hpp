/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 10:07:26 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/08 11:43:32 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <cctype>
#include <string>
#include <stack>

class RPN {
	private:
		std::stack<int> s;
	public:
		RPN();
		RPN(const RPN& copy);
		RPN& operator=(const RPN& copy);
		~RPN();
		int		setStack(char *arg);
		int		isoperator(char c);
		int		calcoperator(int nb1, int nb2, char op);
		int		getStackTop();
};

#endif