/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:04:30 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/11 14:39:37 by taomalbe         ###   ########.fr       */
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
	int		index = -1;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			index = i;
			break;
		}
	}
	switch (index)
	{
		case (0) :
		{
			debug();
			info();
			warning();
			error();
			break;
		}
		case (1) :
		{
			info();
			warning();
			error();
			break;	
		}
		case (2) :
		{
			warning();
			error();
			break;	
		}
		case (3) :
		{
			error();
			break;	
		}
		default :
			std::cout << "Just stop harl.." << std::endl;
	}
}