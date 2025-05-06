/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:56:14 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/06 17:24:55 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource() {
	//std::cout << "IMateriaSource constructor" << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource& copy) {
	//std::cout << "IMateriaSource copy" << std::endl;
	*this = copy;
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource& copy) {
	//std::cout << "IMateriaSource operator assignement" << std::endl;
	(void)copy;
	return (*this);
}
