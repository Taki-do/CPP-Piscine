/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:02:33 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/04 18:24:13 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void	easyfind(T& container, int occ) {
	typename T::const_iterator it;
	it = container.begin();
	while (it != container.end())
	{
		if (*it == occ)
		{
			std::cout << "Occurence found : " << *it << std::endl;
			return ;
		}
		it++;
	}
	throw NoOccurenceException();
}

const char* NoOccurenceException::what() const throw() {
    return ("Container does not contain second parameter !");
}