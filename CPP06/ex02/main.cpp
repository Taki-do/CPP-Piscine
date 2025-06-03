/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 11:32:27 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/03 12:03:31 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void) {
	Base *random = generate();
	
	std::cout << "[identify with reference]" << std::endl;
	identify(*random);
	std::cout << "[identify with pointer]" << std::endl;
	identify(random);
}