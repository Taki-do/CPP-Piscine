/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 14:50:30 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/03 15:02:55 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T &one, T &two) {
	T tmp;
	tmp = one;
	one = two;
	two = tmp;
}

template <typename T>
T		min(T &one, T &two) {
	if (one > two)
		return (two);
	else if (one < two)
		return (one);
	return (two);
}

template <typename T>
T		max(T &one, T &two) {
	if (one > two)
		return (one);
	else if (one < two)
		return (two);
	return (two);
}

#endif