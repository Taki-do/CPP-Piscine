/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:15:42 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/08 09:33:40 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int check_value(std::string line) {
	long unsigned int j = 0;
	if (line[0] == '-')
		j++;
	while (j < line.size()) {
		if (!isdigit(line[j]) && line[j] != '.')
			return (0);
		j++;
	}
	std::istringstream ss(line);
	float i;
	ss >> i;
	if (i >= INT_MAX || i <= INT_MIN) {
		std::cerr << "Error: too large a number.\n";
		return (0);
	}
	if (i < 0) {
		std::cerr << "Error: not a positive number.\n";
		return (0);
	}
	if (i > 1000) {
		std::cerr << "Error : number above 1000.\n";
		return (0);
	}
	return (1);
}

int	check_format(std::string line) {
	int	i = 0;
	
	if (line.size() != 10)
		return (0);
	while (i < 4) {
		if (!isdigit(line[i++]))
			return (0);
	}
	if (line[4] != '-' || line[7] != '-')
		return (0);
	i++;
	while (i < 7) {
		if (!isdigit(line[i++]))
			return (0);
	}
	i++;
	while (i < 10) {
		if (!isdigit(line[i++]))
			return (0);
	}
	return (1);
}

int	main(int ac, char *av[]) {
	std::ifstream 	input;
	std::string		line;
	BitcoinExchange	Tmp;
	float	value;

	if (ac != 2) {
		std::cerr << "Error: Invalid number of arguments, usage : ./btc your_file" << std::endl;
		return (1);
	}
	if (!Tmp.setMap())
		return (1);
	BitcoinExchange	Btc(Tmp);
	input.open(av[1]);
	if (!input) {
		std::cerr << "Error while opening file" << std::endl;
		return (1);
	}
	getline(input, line);
	while (getline(input, line)) {
		std::string date = line.substr(0, 10);
		if (line.find(" | ") == std::string::npos) {
			std::cerr << "Error: bad input => " << date << std::endl;
			continue ;
		}
		if (!check_value(line.substr(13, line.size())))
			continue ;
		std::istringstream	svalue(line.substr(13, line.size()));
		svalue >> value;
		std::map<std::string, float>::iterator it = Btc.getIterator(date);
		if (it != Btc.getMapEnd() && it->first == date)
			std::cout << date << " => " << value << " = "
					  << value * Btc.getMap(it) << std::endl;
		else if (it != Btc.getMapBegin()) {
			it--;
			std::cout << date << " => " << value << " = "
					  << value * Btc.getMap(it) << std::endl;
		}
		else {
			if (!check_format(date)) {
				std::cerr << "Error: invalid format !" << std::endl;
				continue ;
			}
			std::cerr << "Error: invalid date => " << date << std::endl;
			continue ;
		}
	}
	return (0);
}