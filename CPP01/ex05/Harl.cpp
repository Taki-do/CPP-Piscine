/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 10:46:40 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/11 11:58:12 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void Harl::debug( void ) {
	std::cout << "DEBUG" << std::endl;
}

void Harl::info( void ) {
	std::cout << "INFO" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "WARNING" << std::endl;	
}

void Harl::error( void ) {
	std::cout << "ERROR" << std::endl;
}

void Harl::complain( std::string level ) {
	Harl 	harl;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*message[4])(void) = {
		&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(harl.*message[i])();
			break;
		}
	}

}