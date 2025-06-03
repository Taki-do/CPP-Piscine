/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:11:14 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/03 15:55:53 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void	print(const T &i) {
	std::cout << i << " ";
}

template <typename T>
void	add_array(T &i) {
	i++;
}

int	main(void) {
	int	tab[5] = {1, 2, 3, 4, 5};

	//test avec non-const
	::iter(tab, 5, static_cast<void (*)(int &)>(add_array));
	//test avec const
	::iter(tab, 5, static_cast<void (*)(int const &)>(print));
	std::cout << std::endl;

	char array[] = "OUI";

	//test avec non-const
	//::iter(array, 3, static_cast<void (*)(char &)>(add_array));
	//test avec const
	::iter(array, 3, static_cast<void (*)(char const &)>(print));
	std::cout << std::endl;
	return (0);
}

