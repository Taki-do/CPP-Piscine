/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:04:12 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/11 14:04:14 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char *av[]) {
	Harl harl;
	if (ac == 2)
	{
		std::string str = std::string(av[1]);
		harl.complain(str);
	}
}