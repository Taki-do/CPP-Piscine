/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:11:19 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/25 15:34:33 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename F>
void	iter(T *array, int len, F apply) {
	for (int i = 0; i < len; i++)
		apply(array[i]);
}

template <typename T>
void	print(const T &i) {
	std::cout << i << " ";
}

template <typename T>
void	add_array(T &i) {
	i++;
}

#endif