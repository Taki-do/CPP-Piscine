/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 10:51:42 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/08 11:44:05 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char *av[]) {
	RPN rpn;
	
	if (ac == 2) {
		if (!rpn.setStack(av[1]))
			return (1);
		std::cout << rpn.getStackTop() << std::endl;
	}
}